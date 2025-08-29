__Z16PKPromptAuthInfoP8NSStringS0_b
__CFUserNotification *__fastcall PKPromptAuthInfo(NSString *a1, NSString *a2, int a3)
{
  NSString *v5; // x19
  NSString *v6; // x20
  __CFUserNotification *v7; // x21
  const __CFString *v8; // x0
  const char *v9; // x1
  const __CFString *v10; // x21
  CFStringRef StringWithValidatedFormat; // x22
  __CFString *v12; // x23
  __CFString *v13; // x22
  const __CFString *v14; // x25
  CFOptionFlags responseFlags; // [xsp+8h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v5 = objc_retain(a1);
  v6 = objc_retain(a2);
  if ( dword_1000C3F40 <= 2 )
  {
    pthread_mutex_lock(&stru_1000C3D10);
    if ( qword_1000C3F38 )
    {
      CFUserNotificationCancel((CFUserNotificationRef)qword_1000C3F38);
      CFRelease((CFTypeRef)qword_1000C3F38);
      qword_1000C3F38 = 0LL;
    }
    if ( a3 )
      v8 = CFSTR("Password required for \"%@\"");
    else
      v8 = CFSTR("Incorrect Name or Password for \"%@\"");
    if ( a3 )
      v9 = "Password prompt";
    else
      v9 = "Password prompt, subsequent attempts";
    v10 = (const __CFString *)PKLocalizedString(v8, v9);
    StringWithValidatedFormat = CFStringCreateStringWithValidatedFormat(
                                  kCFAllocatorDefault,
                                  0LL,
                                  CFSTR("%@"),
                                  v10,
                                  0LL,
                                  v5);
    CFRelease(v10);
    v7 = (__CFUserNotification *)sub_100042FFC((int)v5, (int)v6, StringWithValidatedFormat);
    CFRelease(StringWithValidatedFormat);
    qword_1000C3F38 = (__int64)v7;
    dword_1000C3F40 = 4;
    pthread_mutex_unlock(&stru_1000C3D10);
    responseFlags = 3LL;
    if ( v7 )
    {
      v12 = 0LL;
      v13 = 0LL;
      if ( CFUserNotificationReceiveResponse(v7, 0.0, &responseFlags) )
      {
        responseFlags = 3LL;
        qword_1000C3F38 = 0LL;
        dword_1000C3F40 = 0;
      }
      else
      {
        qword_1000C3F38 = 0LL;
        dword_1000C3F40 = 0;
        if ( !responseFlags )
        {
          if ( v6
            && -[NSString caseInsensitiveCompare:](v6, "caseInsensitiveCompare:", CFSTR("guest-only")) == NSOrderedSame )
          {
            v13 = objc_retain(v6);
            v12 = objc_retainAutoreleasedReturnValue((id)CFUserNotificationGetResponseValue(
                                                           v7,
                                                           kCFUserNotificationTextFieldValuesKey,
                                                           0LL));
          }
          else
          {
            v14 = objc_retainAutoreleasedReturnValue((id)CFUserNotificationGetResponseValue(
                                                           v7,
                                                           kCFUserNotificationTextFieldValuesKey,
                                                           0LL));
            v12 = objc_retainAutoreleasedReturnValue((id)CFUserNotificationGetResponseValue(
                                                           v7,
                                                           kCFUserNotificationTextFieldValuesKey,
                                                           1LL));
            v13 = (__CFString *)v14;
          }
        }
      }
      CFRelease(v7);
      v7 = 0LL;
      if ( v13 && v12 )
        v7 = objc_retainAutoreleasedReturnValue(
               +[NSURLCredential credentialWithUser:password:persistence:](
                 &OBJC_CLASS___NSURLCredential,
                 "credentialWithUser:password:persistence:",
                 v13,
                 v12,
                 2LL));
    }
    else
    {
      v13 = 0LL;
      v12 = 0LL;
      qword_1000C3F38 = 0LL;
      dword_1000C3F40 = 0;
    }
    objc_release(v12);
    objc_release(v13);
  }
  else
  {
    v7 = 0LL;
  }
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}