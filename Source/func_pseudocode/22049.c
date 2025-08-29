__peerIsStoreAgent
__int64 __fastcall _peerIsStoreAgent(__int64 a1)
{
  NSData *v1; // x20
  NSDictionary *v2; // x19
  __int64 v3; // x0
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v7; // x0
  SecRequirementRef requirement; // [xsp+10h] [xbp-60h] BYREF
  SecCodeRef guest; // [xsp+18h] [xbp-58h] BYREF
  _OWORD v10[2]; // [xsp+20h] [xbp-50h] BYREF
  CFStringRef v11; // [xsp+48h] [xbp-28h] BYREF
  NSData *v12; // [xsp+50h] [xbp-20h] BYREF

  memset(v10, 0, sizeof(v10));
  xpc_connection_get_audit_token(a1, v10);
  v11 = kSecGuestAttributeAudit;
  v1 = objc_retainAutoreleasedReturnValue(+[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", v10, 32LL));
  v12 = v1;
  v2 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           &v12,
           &v11,
           1LL));
  objc_release(v1);
  guest = 0LL;
  v3 = SecCodeCopyGuestWithAttributes(0LL, (CFDictionaryRef)v2, 0, &guest);
  if ( (_DWORD)v3 )
  {
    NSLog(&CFSTR("Peer Validation Failed: SecCodeCopyGuestWithAttributes status=%i").isa, v3);
    if ( guest )
      CFRelease(guest);
    v4 = 0LL;
    goto LABEL_12;
  }
  requirement = 0LL;
  v5 = SecRequirementCreateWithString(
         CFSTR("(anchor apple) and (identifier = com.apple.storeassetd or identifier = com.apple.storedownloadd)"),
         0,
         &requirement);
  if ( (_DWORD)v5 )
  {
    NSLog(&CFSTR("Peer Validation Failed: SecRequirementCreateWithString status=%d").isa, v5);
  }
  else
  {
    v7 = SecCodeCheckValidity(guest, 0, requirement);
    if ( !(_DWORD)v7 )
    {
      v4 = 1LL;
      goto LABEL_8;
    }
    if ( (_DWORD)v7 == -67050 )
      NSLog(&CFSTR("Peer Validation Failed: Peer does meet code signing requirements").isa);
    else
      NSLog(&CFSTR("Peer Validation Failed: SecCodeCheckValidity status=%d").isa, v7);
  }
  v4 = 0LL;
LABEL_8:
  if ( guest )
    CFRelease(guest);
  if ( requirement )
    CFRelease(requirement);
LABEL_12:
  objc_release(v2);
  return v4;
}