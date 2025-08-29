_NetFSMountURLAsync
int __cdecl NetFSMountURLAsync(
        CFURLRef url,
        CFURLRef mountpath,
        CFStringRef user,
        CFStringRef passwd,
        CFMutableDictionaryRef open_options,
        CFMutableDictionaryRef mount_options,
        AsyncRequestID *requestID,
        dispatch_queue_t dispatchq,
        NetFSMountURLBlock mount_report)
{
  int v9; // w27
  void *v18; // x0
  _QWORD v20[5]; // [xsp+0h] [xbp-80h] BYREF
  CFTypeRef cf; // [xsp+28h] [xbp-58h] BYREF

  cf = url;
  v9 = -1;
  if ( url )
  {
    if ( requestID )
    {
      if ( dispatchq )
      {
        if ( mount_report )
        {
          v18 = _Block_copy(mount_report);
          if ( v18 )
          {
            v20[0] = _NSConcreteStackBlock;
            v20[1] = 1107296256LL;
            v20[2] = sub_100009A38;
            v20[3] = &unk_100014668;
            v20[4] = v18;
            if ( mountpath )
              mountpath = (CFURLRef)CFURLCopyFileSystemPath(mountpath, kCFURLPOSIXPathStyle);
            if ( mount_options )
              CFRetain(mount_options);
            else
              mount_options = CFDictionaryCreateMutable(
                                kCFAllocatorDefault,
                                0LL,
                                &kCFTypeDictionaryKeyCallBacks,
                                &kCFTypeDictionaryValueCallBacks);
            if ( !((unsigned __int64)user | (unsigned __int64)passwd)
              || (v9 = sub_100008568(url, user, passwd, &cf)) == 0 )
            {
              if ( !CFDictionaryGetValue(mount_options, CFSTR("SoftMount")) )
                CFDictionarySetValue(mount_options, CFSTR("SoftMount"), kCFBooleanTrue);
              v9 = NAConnectToServerStart(cf, mountpath, open_options, mount_options, requestID, dispatchq, v20);
            }
            if ( cf && cf != url )
              CFRelease(cf);
            if ( mountpath )
              CFRelease(mountpath);
            if ( mount_options )
              CFRelease(mount_options);
          }
        }
      }
    }
  }
  return v9;
}