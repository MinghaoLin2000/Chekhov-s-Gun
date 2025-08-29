-[FudPersonalizer createPersonalizationManifestCFDict:]
__CFDictionary *__cdecl -[FudPersonalizer createPersonalizationManifestCFDict:](FudPersonalizer *self, SEL a2, id a3)
{
  CFMutableDictionaryRef Mutable; // x0
  __CFDictionary *v6; // x20
  __CFString *v7; // x24
  __CFDictionary *v8; // x23
  __CFString *v9; // x25
  __CFString *v10; // x23
  const __CFString *v11; // x1
  __CFDictionary *v12; // x0
  CFBooleanRef v13; // x2
  int v14; // w2
  CFBooleanRef v15; // x2
  CFBooleanRef v16; // x2
  CFBooleanRef v17; // x2
  void *v18; // x21
  void *v19; // x0
  void *v20; // x22
  __int64 v21; // x25
  void *i; // x26
  void *v23; // x24
  __CFDictionary *v24; // x0
  const __CFString *v26; // x1
  __int128 v27; // [xsp+10h] [xbp-120h] BYREF
  __int128 v28; // [xsp+20h] [xbp-110h]
  __int128 v29; // [xsp+30h] [xbp-100h]
  __int128 v30; // [xsp+40h] [xbp-F0h]
  _BYTE v31[128]; // [xsp+58h] [xbp-D8h] BYREF

  if ( !objc_msgSend(a3, "requestName") )
  {
    v26 = CFSTR("%s(): name=nil\n");
LABEL_55:
    FudLog(3LL, v26);
    return 0LL;
  }
  if ( !(unsigned int)objc_msgSend(a3, "chipID") )
  {
    v26 = CFSTR("%s(): chipID=0\n");
    goto LABEL_55;
  }
  if ( !objc_msgSend(a3, "ecID") && !objc_msgSend(a3, "extEcID") && !(unsigned int)objc_msgSend(a3, "globalSigning") )
  {
    v26 = CFSTR("%s(): ecID/globalSigning invalid\n");
    goto LABEL_55;
  }
  if ( !(unsigned int)objc_msgSend(a3, "isProductionModeSet") )
  {
    v26 = CFSTR("%s(): cpro not set\n");
    goto LABEL_55;
  }
  if ( !objc_msgSend(a3, "nonceHash") )
  {
    v26 = CFSTR("%s(): nonceHash=nil\n");
    goto LABEL_55;
  }
  if ( !objc_msgSend(a3, "objectList") )
  {
    v26 = CFSTR("%s(): objectList=nil\n");
    goto LABEL_55;
  }
  Mutable = CFDictionaryCreateMutable(0LL, 0LL, &kCFTypeDictionaryKeyCallBacks, &kCFTypeDictionaryValueCallBacks);
  if ( !Mutable )
  {
    v26 = CFSTR("%s(): error creating cfdict\n");
    goto LABEL_55;
  }
  v6 = Mutable;
  if ( objc_msgSend(a3, "requestPrefix") )
  {
    v7 = CFStringCreateMutable(kCFAllocatorDefault, 0LL);
    v8 = CFDictionaryCreateMutable(0LL, 0LL, &kCFTypeDictionaryKeyCallBacks, &kCFTypeDictionaryValueCallBacks);
    CFDictionaryBuildKeySetTag(
      v8,
      CFSTR("ApBoardID"),
      (const __CFString *)objc_msgSend(a3, "requestPrefix"),
      CFSTR("BoardID"));
    CFDictionaryBuildKeySetTag(
      v8,
      CFSTR("ApChipID"),
      (const __CFString *)objc_msgSend(a3, "requestPrefix"),
      CFSTR("ChipID"));
    CFDictionaryBuildKeySetTag(
      v8,
      CFSTR("ApECID"),
      (const __CFString *)objc_msgSend(a3, "requestPrefix"),
      CFSTR("ECID"));
    CFDictionaryBuildKeySetTag(
      v8,
      CFSTR("ApSecurityDomain"),
      (const __CFString *)objc_msgSend(a3, "requestPrefix"),
      CFSTR("SecurityDomain"));
    CFDictionaryBuildKeySetTag(
      v8,
      CFSTR("ApProductionMode"),
      (const __CFString *)objc_msgSend(a3, "requestPrefix"),
      CFSTR("ProductionMode"));
    CFDictionaryBuildKeySetTag(
      v8,
      CFSTR("ApManifestEpoch"),
      (const __CFString *)objc_msgSend(a3, "requestPrefix"),
      CFSTR("ManifestEpoch"));
    if ( (unsigned int)objc_msgSend(a3, "isSecurityModeSet") )
      CFDictionaryBuildKeySetTag(
        v8,
        CFSTR("ApSecurityMode"),
        (const __CFString *)objc_msgSend(a3, "requestPrefix"),
        CFSTR("SecurityMode"));
    CFDictionaryBuildKeySetTag(
      v8,
      CFSTR("ApNonce"),
      (const __CFString *)objc_msgSend(a3, "requestPrefix"),
      CFSTR("Nonce"));
    v9 = CFStringCreateMutable(kCFAllocatorDefault, 0LL);
    CFStringAppendFormat(v9, 0LL, CFSTR("@%@"), CFSTR("ApImg4Ticket"));
    CFDictionaryBuildKeySetTicket(v8, v9, (const __CFString *)objc_msgSend(a3, "requestPrefix"), CFSTR("Ticket"));
    CFRelease(v9);
    CFStringAppendFormat(v7, 0LL, CFSTR("%@,%@"), objc_msgSend(a3, "requestPrefix"), CFSTR("Ticket"));
    self->_ticketName = v7;
    FudLog(7LL, CFSTR("%s(): overriding personalization request=%@\n"));
    CFDictionarySetValue(v6, CFSTR("APTagOverrides"), v8);
    CFRelease(v8);
  }
  else
  {
    self->_ticketName = (__CFString *)CFStringCreateCopy(kCFAllocatorDefault, CFSTR("ApImg4Ticket"));
  }
  v10 = CFStringCreateMutable(kCFAllocatorDefault, 0LL);
  CFStringAppendFormat(v10, 0LL, CFSTR("@%@"), CFSTR("ApImg4Ticket"));
  CFDictionarySetValue(v6, v10, kCFBooleanTrue);
  CFRelease(v10);
  CFDictionaryBuildKeySetInt32(v6, CFSTR("ApBoardID"), (int)objc_msgSend(a3, "boardID"));
  CFDictionaryBuildKeySetInt32(v6, CFSTR("ApChipID"), (int)objc_msgSend(a3, "chipID"));
  if ( (unsigned int)objc_msgSend(a3, "globalSigning") )
  {
    v11 = CFSTR("UseGlobalSigning");
    v12 = v6;
    v13 = kCFBooleanTrue;
  }
  else
  {
    if ( !objc_msgSend(a3, "extEcID") )
    {
      CFDictionaryBuildKeySetInt64(v6, CFSTR("ApECID"), (__int64)objc_msgSend(a3, "ecID"));
      goto LABEL_20;
    }
    v13 = (CFBooleanRef)objc_msgSend(a3, "extEcID");
    v11 = CFSTR("ApECID");
    v12 = v6;
  }
  CFDictionarySetValue(v12, v11, v13);
LABEL_20:
  if ( self->_overrideSecurityDomain )
    v14 = 1;
  else
    v14 = (unsigned int)objc_msgSend(a3, "securityDomain");
  CFDictionaryBuildKeySetInt32(v6, CFSTR("ApSecurityDomain"), v14);
  if ( (unsigned int)objc_msgSend(a3, "productionMode") )
    v15 = kCFBooleanTrue;
  else
    v15 = kCFBooleanFalse;
  CFDictionarySetValue(v6, CFSTR("ApProductionMode"), v15);
  if ( (unsigned int)objc_msgSend(a3, "isSecurityModeSet") )
  {
    if ( (unsigned int)objc_msgSend(a3, "securityMode") )
      v16 = kCFBooleanTrue;
    else
      v16 = kCFBooleanFalse;
    CFDictionarySetValue(v6, CFSTR("ApSecurityMode"), v16);
  }
  CFDictionarySetValue(v6, CFSTR("ApNonce"), objc_msgSend(a3, "nonceHash"));
  if ( (unsigned int)objc_msgSend(a3, "isChipEpochSet") )
    CFDictionaryBuildKeySetInt32(v6, CFSTR("ApManifestEpoch"), (int)objc_msgSend(a3, "chipEpoch"));
  if ( (unsigned int)objc_msgSend(a3, "enableMixMatch") )
  {
    if ( (unsigned int)objc_msgSend(a3, "enableMixMatch") )
      v17 = kCFBooleanTrue;
    else
      v17 = kCFBooleanFalse;
    CFDictionarySetValue(v6, CFSTR("ApAllowMixAndMatch"), v17);
  }
  v29 = 0u;
  v30 = 0u;
  v27 = 0u;
  v28 = 0u;
  v18 = objc_msgSend(a3, "objectList");
  v19 = objc_msgSend(v18, "countByEnumeratingWithState:objects:count:", &v27, v31, 16LL);
  if ( v19 )
  {
    v20 = v19;
    v21 = *(_QWORD *)v28;
    do
    {
      for ( i = 0LL; i != v20; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v28 != v21 )
          objc_enumerationMutation(v18);
        v23 = *(void **)(*((_QWORD *)&v27 + 1) + 8LL * (_QWORD)i);
        v24 = -[FudPersonalizer createPersonalizationObjectCFDict:](self, "createPersonalizationObjectCFDict:", v23);
        if ( v24 )
          CFDictionarySetValue(v6, objc_msgSend(v23, "objectTag"), v24);
      }
      v20 = objc_msgSend(v18, "countByEnumeratingWithState:objects:count:", &v27, v31, 16LL);
    }
    while ( v20 );
  }
  return v6;
}