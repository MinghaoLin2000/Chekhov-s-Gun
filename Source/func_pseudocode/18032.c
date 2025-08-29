_NetFSCopyURLForRemountingVolumeURL
CFURLRef __fastcall NetFSCopyURLForRemountingVolumeURL(const __CFURL *a1)
{
  CFStringRef v1; // x0
  CFStringRef v2; // x19
  CFURLRef v3; // x20
  const __CFString *Value; // x0
  CFDictionaryRef theDict; // [xsp+8h] [xbp-18h] BYREF

  theDict = 0LL;
  v1 = CFURLCopyFileSystemPath(a1, kCFURLPOSIXPathStyle);
  if ( !v1 )
    return 0LL;
  v2 = v1;
  v3 = 0LL;
  if ( !(unsigned int)NetFSGetMountInfo(v1, &theDict) && theDict )
  {
    Value = (const __CFString *)CFDictionaryGetValue(theDict, CFSTR("MountedURL"));
    if ( Value )
      v3 = CFURLCreateWithString(0LL, Value, 0LL);
    else
      v3 = 0LL;
    CFRelease(theDict);
  }
  CFRelease(v2);
  return v3;
}