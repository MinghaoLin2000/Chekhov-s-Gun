-[FudPersonalizer personalizeWithServer:]
bool __cdecl -[FudPersonalizer personalizeWithServer:](FudPersonalizer *self, SEL a2, id a3)
{
  __CFDictionary *v5; // x0
  __AMAuthInstall *v6; // x0
  __CFString *v7; // x1
  __AMAuthInstall *v8; // x22
  CFURLRef v9; // x0
  __AMAuthInstall *amai; // x22
  __CFString *serverURL; // x1
  CFURLRef v12; // x0
  void *v13; // x0
  __int64 v14; // x21
  void *v15; // x0
  void *v16; // x0
  __CFString *v17; // x0
  CFIndex Count; // x0
  __CFDictionary *MutableCopy; // x0
  __CFDictionary **p_serverResponseDict; // x22
  __int64 PersonalizedResponse; // x0
  int v22; // w23
  const __CFData *Value; // x0
  const __CFData *v24; // x22
  unsigned int v25; // w0
  const __CFData *v26; // x23
  CFIndex Length; // x24
  CFIndex v28; // x25
  __CFData *v29; // x23
  const UInt8 *BytePtr; // x0
  UInt8 *MutableBytePtr; // x22
  unsigned int v32; // w22
  unsigned int v33; // w0
  const UInt8 *v34; // x22
  CFIndex v35; // x0
  __CFData *StitchTicket; // x3
  const __CFString *v37; // x22
  CFAllocatorRef v39; // x21
  FudPersonalizerDelegate *delegate; // x0
  id v41; // x2
  __int64 v42; // x4
  __int64 v43; // x21
  const char *v44; // [xsp+0h] [xbp-60h]
  __CFDictionary *v45; // [xsp+8h] [xbp-58h]
  __int64 v46; // [xsp+8h] [xbp-58h]
  void *v47; // [xsp+8h] [xbp-58h]
  const __CFString *v48; // [xsp+8h] [xbp-58h]
  void *v49; // [xsp+8h] [xbp-58h]
  __int64 v50; // [xsp+10h] [xbp-50h] BYREF
  __int64 v51; // [xsp+18h] [xbp-48h] BYREF

  v50 = 0LL;
  v51 = 0LL;
  v5 = -[FudPersonalizer createPersonalizationManifestCFDict:](self, "createPersonalizationManifestCFDict:");
  self->_manifestDict = v5;
  if ( !v5 )
  {
    v14 = 2LL;
    v37 = CFSTR("Failed to build manifest dictionary");
    goto LABEL_39;
  }
  v45 = v5;
  FudLog(7LL, CFSTR("%s(): manifestDictionary=%@"));
  if ( !self->_amai )
  {
    v6 = (__AMAuthInstall *)AMAuthInstallCreate(kCFAllocatorDefault);
    self->_amai = v6;
    if ( !v6 )
    {
      v14 = 1LL;
      v37 = CFSTR("Failed to create Signing Request");
      goto LABEL_39;
    }
    if ( (unsigned int)objc_msgSend(a3, "useSSOCredentials", "-[FudPersonalizer personalizeWithServer:]", v45) )
    {
      if ( (unsigned int)AMAuthInstallSsoInitialize(0LL) )
      {
        FudLog(7LL, CFSTR("%s(): SSO not installed. Continuing.\n"));
      }
      else
      {
        if ( (unsigned int)AMAuthInstallSsoEnable(self->_amai) )
        {
          v14 = 1LL;
          v37 = CFSTR("Failed to enable SSO");
          goto LABEL_39;
        }
        amai = self->_amai;
        if ( self->_serverURL )
          serverURL = self->_serverURL;
        else
          serverURL = CFSTR("https://gs.apple.com:443/");
        v12 = CFURLCreateWithString(kCFAllocatorDefault, serverURL, 0LL);
        if ( (unsigned int)AMAuthInstallSetSigningServerURL(amai, v12) )
        {
          v14 = 1LL;
          v37 = CFSTR("Failed to set Signing Server URL");
          goto LABEL_39;
        }
        v13 = +[IASAuthenticationManager sharedManager](&OBJC_CLASS___IASAuthenticationManager, "sharedManager");
        v14 = 1LL;
        v15 = objc_msgSend(
                v13,
                "getSSOServiceTicketAsOnConsoleUserWithUI:serviceID:outUsername:error:",
                1LL,
                kIASAuthInstallServiceID,
                &v50,
                &v51);
        if ( !v15 )
        {
          v37 = CFSTR("Failed to get getSSOServiceTicketAsOnConsoleUserWithUI");
          goto LABEL_39;
        }
        v16 = +[IASAuthenticationManager usernameAndTicketBlobWithSSOData:withUsername:](
                &OBJC_CLASS___IASAuthenticationManager,
                "usernameAndTicketBlobWithSSOData:withUsername:",
                v15,
                v50);
        if ( !v16 )
        {
          v37 = CFSTR("Failed to get usernameAndTicketBlobWithSSOData");
          goto LABEL_39;
        }
        if ( (unsigned int)AMAuthInstallSsoSetToken(self->_amai, v16) )
        {
          v37 = CFSTR("Failed to set SSO token");
          goto LABEL_39;
        }
      }
    }
    else
    {
      v7 = self->_serverURL;
      if ( v7 )
      {
        v8 = self->_amai;
        v9 = CFURLCreateWithString(kCFAllocatorDefault, v7, 0LL);
        AMAuthInstallSetSigningServerURL(v8, v9);
      }
    }
    AMAuthInstallLogSetHandler(sub_100004A78);
  }
  v17 = self->_serverURL;
  if ( v17 )
  {
    CFStringGetCStringPtr(v17, 0x8000100u);
    FudLog(7LL, CFSTR("%s(): Overriding signing server URL=%s\n"));
  }
  if ( (unsigned int)AMAuthInstallApSetParameters(self->_amai, self->_manifestDict) )
  {
    v14 = 1LL;
    v37 = CFSTR("Failed to add manifest properties to Signing Request");
    goto LABEL_39;
  }
  Count = CFDictionaryGetCount(self->_manifestDict);
  MutableCopy = CFDictionaryCreateMutableCopy(kCFAllocatorDefault, Count, self->_manifestDict);
  self->_serverRequestDict = MutableCopy;
  CFDictionaryRemoveValue(MutableCopy, CFSTR("APTagOverrides"));
  p_serverResponseDict = &self->_serverResponseDict;
  PersonalizedResponse = AMAuthInstallApCreatePersonalizedResponse(
                           self->_amai,
                           self->_serverRequestDict,
                           &self->_serverResponseDict);
  v22 = PersonalizedResponse;
  v46 = PersonalizedResponse;
  FudLog(6LL, CFSTR("%s(): AMAuthInstallApCreatePersonalizedResponse status = %d\n"));
  if ( v22 == 3194
    && ((unsigned int)objc_msgSend(a3, "useSSOCredentials", "-[FudPersonalizer personalizeWithServer:]", v46) & 1) == 0 )
  {
    objc_msgSend(a3, "setUseSSOCredentials:", 1LL);
    return 0;
  }
  if ( !*p_serverResponseDict )
  {
    v14 = 3LL;
    v37 = CFSTR("Failed to generate signed manifest");
    goto LABEL_39;
  }
  Value = (const __CFData *)CFDictionaryGetValue(*p_serverResponseDict, self->_ticketName);
  if ( !Value )
  {
    v14 = 3LL;
    v37 = CFSTR("Failed to retrieve signed manifest");
    goto LABEL_39;
  }
  v24 = Value;
  v25 = (unsigned int)objc_msgSend(a3, "responseFormat");
  if ( v25 )
  {
    if ( v25 == 2 )
    {
      v49 = objc_msgSend(a3, "responseFormat");
      FudLog(7LL, CFSTR("%s(): Returning stitched img4 format specified by plugin=%d\n"));
      v39 = CFGetAllocator(self->_amai);
      StitchTicket = (__CFData *)AMAuthInstallApImg4CreateStitchTicket(
                                   v39,
                                   objc_msgSend(a3, "payload", "-[FudPersonalizer personalizeWithServer:]", v49),
                                   v24);
      self->_responseData = StitchTicket;
      if ( !StitchTicket )
      {
        v14 = 4LL;
        v37 = CFSTR("Failed to stitch img4 response");
        goto LABEL_39;
      }
    }
    else
    {
      if ( v25 != 1 )
      {
        v14 = 2LL;
        v37 = CFSTR("Invalid response format");
        goto LABEL_39;
      }
      v26 = (const __CFData *)objc_msgSend(a3, "payload");
      Length = CFDataGetLength(v26);
      v28 = CFDataGetLength(v24);
      v29 = CFDataCreateMutableCopy(kCFAllocatorDefault, 0LL, v26);
      v47 = objc_msgSend(a3, "responseFormat");
      FudLog(7LL, CFSTR("%s(): Returning stitched ftab format specified by plugin=%d\n"));
      BytePtr = CFDataGetBytePtr(v24);
      CFDataAppendBytes(v29, BytePtr, v28);
      MutableBytePtr = CFDataGetMutableBytePtr(v29);
      *((_DWORD *)MutableBytePtr + 4) = Length;
      *((_DWORD *)MutableBytePtr + 5) = v28;
      if ( (unsigned int)objc_msgSend(a3, "chipID", "-[FudPersonalizer personalizeWithServer:]", v47) == 8194 )
        *((_QWORD *)MutableBytePtr + 1) = 0x1234567898765432LL;
      if ( (unsigned int)objc_msgSend(a3, "responseAlignment") )
      {
        v32 = (unsigned int)objc_msgSend(a3, "responseAlignment");
        v33 = (unsigned int)objc_msgSend(a3, "responseAlignment");
        CFDataIncreaseLength(
          v29,
          (int)(v32 + (v28 + Length) / v33 * v33 - (v28 + Length)) % (int)objc_msgSend(a3, "responseAlignment"));
      }
      v34 = CFDataGetBytePtr(v29);
      v35 = CFDataGetLength(v29);
      StitchTicket = CFDataCreateWithBytesNoCopy(kCFAllocatorDefault, v34, v35, kCFAllocatorDefault);
      self->_responseData = StitchTicket;
      if ( !StitchTicket )
      {
        v14 = 4LL;
        v37 = CFSTR("Failed to stitch ftab response");
LABEL_39:
        v43 = FUDError(v14, v37);
        v44 = "-[FudPersonalizer personalizeWithServer:]";
        v48 = v37;
        FudLog(3LL, CFSTR("%s(): %@"));
        delegate = self->_delegate;
        v41 = a3;
        StitchTicket = 0LL;
        v42 = v43;
        goto LABEL_40;
      }
    }
  }
  else
  {
    v44 = "-[FudPersonalizer personalizeWithServer:]";
    v48 = (const __CFString *)objc_msgSend(a3, "responseFormat");
    FudLog(7LL, CFSTR("%s(): Returning manifest only format specified by plugin=%d\n"));
    StitchTicket = (__CFData *)CFRetain(v24);
    self->_responseData = StitchTicket;
  }
  delegate = self->_delegate;
  v41 = a3;
  v42 = 0LL;
LABEL_40:
  -[FudPersonalizerDelegate personalizationDone:response:error:](
    delegate,
    "personalizationDone:response:error:",
    v41,
    StitchTicket,
    v42,
    v44,
    v48);
  return 1;
}