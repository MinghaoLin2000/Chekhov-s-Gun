_NetFSMountURLSync
int __cdecl NetFSMountURLSync(
        CFURLRef url,
        CFURLRef mountpath,
        CFStringRef user,
        CFStringRef passwd,
        CFMutableDictionaryRef open_options,
        CFMutableDictionaryRef mount_options,
        CFArrayRef *mountpoints)
{
  CFMutableDictionaryRef Mutable; // x19
  CFStringRef v13; // x21
  int v14; // w24
  const __CFArray *v15; // x0
  CFTypeRef cf; // [xsp+0h] [xbp-50h] BYREF
  CFTypeRef v18; // [xsp+8h] [xbp-48h] BYREF

  Mutable = mount_options;
  cf = 0LL;
  v18 = url;
  if ( !mountpath )
  {
    v13 = 0LL;
    if ( mount_options )
      goto LABEL_3;
LABEL_5:
    Mutable = CFDictionaryCreateMutable(
                kCFAllocatorDefault,
                0LL,
                &kCFTypeDictionaryKeyCallBacks,
                &kCFTypeDictionaryValueCallBacks);
    goto LABEL_6;
  }
  v13 = CFURLCopyFileSystemPath(mountpath, kCFURLPOSIXPathStyle);
  if ( !Mutable )
    goto LABEL_5;
LABEL_3:
  CFRetain(Mutable);
LABEL_6:
  if ( !((unsigned __int64)user | (unsigned __int64)passwd) || (v14 = sub_100008568(url, user, passwd, &v18)) == 0 )
  {
    if ( !CFDictionaryGetValue(Mutable, CFSTR("SoftMount")) )
      CFDictionarySetValue(Mutable, CFSTR("SoftMount"), kCFBooleanTrue);
    v14 = NAConnectToServerSync(v18, v13, open_options, Mutable, &cf);
    if ( !v14 && mountpoints && cf )
    {
      v15 = (const __CFArray *)sub_1000086C4(cf);
      *mountpoints = v15;
      if ( v15 )
        v14 = 0;
      else
        v14 = 12;
      CFRelease(cf);
    }
  }
  if ( v18 && v18 != url )
    CFRelease(v18);
  if ( v13 )
    CFRelease(v13);
  if ( Mutable )
    CFRelease(Mutable);
  return v14;
}