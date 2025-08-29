-[platform_http_get URLSession:task:didReceiveChallenge:completionHandler:]
void __cdecl -[platform_http_get URLSession:task:didReceiveChallenge:completionHandler:](
        platform_http_get *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v7; // x19
  void (__fastcall **v8)(id, _QWORD, NSURLCredential *); // x20
  void *v9; // x22
  void *v10; // x21
  void *v11; // x23
  void *v12; // x22
  PKSecTrustWrapper *v13; // x22
  os_log_s *v14; // x23
  NSURLCredential *v15; // x23
  os_log_s *v16; // x22
  CFErrorRef error; // [xsp+8h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-50h] BYREF
  void *v19; // [xsp+14h] [xbp-4Ch]
  __int16 v20; // [xsp+1Ch] [xbp-44h]
  CFErrorRef v21; // [xsp+1Eh] [xbp-42h]

  v7 = objc_retain(a5);
  v8 = (void (__fastcall **)(id, _QWORD, NSURLCredential *))objc_retain(a6);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "protectionSpace"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "authenticationMethod"));
  objc_release(v9);
  if ( ((unsigned int)objc_msgSend(v10, "isEqualToString:", NSURLAuthenticationMethodServerTrust) & 1) != 0 )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "protectionSpace"));
    v12 = objc_msgSend(v11, "serverTrust");
    objc_release(v11);
    if ( v12 )
    {
      error = 0LL;
      v13 = -[PKSecTrustWrapper initWithTrust:](objc_alloc(&OBJC_CLASS___PKSecTrustWrapper), "initWithTrust:", v12);
      SecTrustEvaluateWithError(-[PKSecTrustWrapper trustRef](v13, "trustRef"), &error);
      if ( error )
      {
        v14 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
        if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEFAULT) )
        {
          *(_DWORD *)buf = 138543618;
          v19 = v10;
          v20 = 2114;
          v21 = error;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v14,
            OS_LOG_TYPE_DEFAULT,
            "challenge %{public}@ has error %{public}@ but allowing",
            buf,
            0x16u);
        }
        objc_release(v14);
        CFRelease(error);
        error = 0LL;
      }
      v15 = objc_retainAutoreleasedReturnValue(
              +[NSURLCredential credentialForTrust:](
                &OBJC_CLASS___NSURLCredential,
                "credentialForTrust:",
                -[PKSecTrustWrapper trustRef](v13, "trustRef")));
      v8[2](v8, 0LL, v15);
      objc_release(v15);
      objc_release(v13);
    }
    else
    {
      v8[2](v8, 3LL, 0LL);
    }
  }
  else
  {
    v16 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v16, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 138543362;
      v19 = v10;
      _os_log_impl((void *)&_mh_execute_header, v16, OS_LOG_TYPE_DEFAULT, "challenge %{public}@ not handled", buf, 0xCu);
    }
    objc_release(v16);
    v8[2](v8, 1LL, 0LL);
  }
  objc_release(v10);
  objc_release(v8);
  objc_release(v7);
}