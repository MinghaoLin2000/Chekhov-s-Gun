__Z13PKGetAuthInfoP8NSStringP5NSURL
NSURLCredential *__fastcall PKGetAuthInfo(NSString *a1, id a2)
{
  id v2; // x19
  _UNKNOWN **v3; // x20
  void *v4; // x22
  int v5; // w21
  void *v6; // x22
  int v7; // w23
  void *v8; // x22
  int v9; // w24
  void *v10; // x22
  void *v11; // x26
  int v12; // w25
  const __CFDictionary *v13; // x0
  const __CFDictionary *v14; // x22
  int v15; // w23
  const __CFDictionary *v16; // x21
  NSString *v17; // x20
  NSString *v18; // x22
  NSURLCredential *v19; // x21
  const __CFString *Value; // x26
  const char *BytePtr; // x0
  CFTypeRef cf; // [xsp+8h] [xbp-268h] BYREF
  CFTypeRef result; // [xsp+10h] [xbp-260h] BYREF
  char __dst[256]; // [xsp+18h] [xbp-258h] BYREF
  char buffer[256]; // [xsp+118h] [xbp-158h] BYREF
  __int64 vars8; // [xsp+278h] [xbp+8h]

  v2 = objc_retain(objc_retain(a2));
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "port"));
  if ( !v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "scheme"));
    v3 = objc_retainAutoreleasedReturnValue(PKDefaultPortForScheme(v4));
    objc_release(v4);
  }
  v5 = (unsigned int)objc_msgSend(v3, "integerValue");
  v6 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "host")));
  v7 = (unsigned int)objc_msgSend(v6, "UTF8String");
  objc_release(v6);
  v8 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "path")));
  v9 = (unsigned int)objc_msgSend(v8, "UTF8String");
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "scheme"));
  v11 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "lowercaseString")));
  v12 = (unsigned int)objc_msgSend(v11, "UTF8String");
  objc_release(v11);
  objc_release(v10);
  cf = 0LL;
  result = 0LL;
  v13 = (const __CFDictionary *)sub_100044720(v7, v5, v9, v12, 3, 0LL);
  v14 = v13;
  if ( v13 )
  {
    if ( SecItemCopyMatching(v13, &result) )
    {
      v15 = 0;
      v16 = 0LL;
    }
    else
    {
      Value = (const __CFString *)CFDictionaryGetValue((CFDictionaryRef)result, kSecAttrAccount);
      v16 = (const __CFDictionary *)sub_100044720(v7, v5, v9, v12, 4, 0LL);
      v15 = 0;
      if ( v16 && Value )
      {
        if ( CFStringGetCString(Value, buffer, 256LL, 0x8000100u) && !SecItemCopyMatching(v16, &cf) )
        {
          BytePtr = (const char *)CFDataGetBytePtr((CFDataRef)cf);
          strlcpy(__dst, BytePtr, 0x100uLL);
          v15 = 1;
        }
        else
        {
          v15 = 0;
        }
      }
    }
    CFRelease(v14);
    if ( result )
      CFRelease(result);
    if ( v16 )
      CFRelease(v16);
  }
  else
  {
    v15 = 0;
  }
  if ( cf )
    CFRelease(cf);
  objc_release(v3);
  objc_release(v2);
  if ( v15 )
  {
    v17 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", buffer));
    v18 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", __dst));
    v19 = objc_retainAutoreleasedReturnValue(
            +[NSURLCredential credentialWithUser:password:persistence:](
              &OBJC_CLASS___NSURLCredential,
              "credentialWithUser:password:persistence:",
              v17,
              v18,
              2LL));
    objc_release(v18);
    objc_release(v17);
  }
  else
  {
    v19 = 0LL;
  }
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v19);
}