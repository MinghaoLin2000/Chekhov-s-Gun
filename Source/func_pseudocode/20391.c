-[device_http_t passwordChallengeContinue:completionHandler:]
void __cdecl -[device_http_t passwordChallengeContinue:completionHandler:](device_http_t *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  void (__fastcall **v7)(_QWORD); // x20
  void *v8; // x21
  NSString *v9; // x25
  id v10; // x21
  void *v11; // x23
  void *v12; // x24
  unsigned int v13; // w25
  void *v14; // x0
  const void *v15; // x24
  __int64 v16; // x1
  id v17; // x23
  __int64 v18; // x0
  void *v19; // x0
  void *v20; // x26
  id v21; // x27
  NSString *printerDisplayName; // x23
  char v23; // w22
  _QWORD v24[4]; // [xsp+0h] [xbp-110h] BYREF
  id v25; // [xsp+20h] [xbp-F0h]
  id v26; // [xsp+28h] [xbp-E8h] BYREF
  id location[2]; // [xsp+30h] [xbp-E0h] BYREF
  __int128 v28; // [xsp+40h] [xbp-D0h]
  __int128 v29; // [xsp+50h] [xbp-C0h]
  __int128 v30; // [xsp+60h] [xbp-B0h]
  __int128 v31; // [xsp+70h] [xbp-A0h]
  __int128 v32; // [xsp+80h] [xbp-90h]
  __int128 v33; // [xsp+90h] [xbp-80h]
  __int128 v34; // [xsp+A0h] [xbp-70h]

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(_QWORD))objc_retain(a4);
  if ( objc_msgSend(v6, "previousFailureCount") || !self->_defaultCredential )
  {
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "proposedCredential"));
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "user"));
    objc_release(v8);
    if ( v9 )
    {
LABEL_27:
      objc_initWeak(location, self);
      printerDisplayName = self->_printerDisplayName;
      v23 = self->_credentialFromPrompt == 0LL;
      v24[0] = _NSConcreteStackBlock;
      v24[1] = 3254779904LL;
      v24[2] = sub_10004A234;
      v24[3] = &unk_100091108;
      objc_copyWeak(&v26, location);
      v25 = objc_retain(v7);
      PKPromptAuthInfo(printerDisplayName, v9, v23, v24);
      objc_release(v25);
      objc_destroyWeak(&v26);
      objc_destroyWeak(location);
      objc_release(v9);
      goto LABEL_28;
    }
    v10 = objc_retain(v6);
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "protectionSpace"));
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "authenticationMethod"));
    if ( (unsigned int)objc_msgSend(v12, "isEqualToString:", NSURLAuthenticationMethodHTTPBasic) )
    {
      objc_release(v12);
      objc_release(v11);
    }
    else
    {
      v13 = (unsigned int)objc_msgSend(v12, "isEqualToString:", NSURLAuthenticationMethodHTTPDigest);
      objc_release(v12);
      objc_release(v11);
      if ( !v13 )
        goto LABEL_15;
    }
    v14 = objc_msgSend(v10, "_createCFAuthChallenge");
    v15 = v14;
    if ( v14 )
    {
      v17 = objc_retainAutoreleasedReturnValue((id)CFURLAuthChallengeGetFailureResponse(v14));
      if ( !v17
        || (v18 = objc_opt_class(&OBJC_CLASS___NSHTTPURLResponse, v16), (objc_opt_isKindOfClass(v17, v18) & 1) == 0) )
      {
        v9 = 0LL;
LABEL_25:
        CFRelease(v15);
        objc_release(v17);
        goto LABEL_26;
      }
      v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "valueForHTTPHeaderField:", CFSTR("Www-Authenticate")));
      v20 = v19;
      if ( !v19 )
      {
        v9 = 0LL;
LABEL_24:
        objc_release(v20);
        goto LABEL_25;
      }
      v33 = 0u;
      v34 = 0u;
      v31 = 0u;
      v32 = 0u;
      v29 = 0u;
      v30 = 0u;
      *(_OWORD *)location = 0u;
      v28 = 0u;
      v21 = objc_retainAutorelease(objc_retain(v19));
      if ( !sub_10004B3A8((int)objc_msgSend(v21, "UTF8String"), "username") || !LOBYTE(location[0]) )
      {
        if ( !(unsigned int)objc_msgSend(v21, "hasPrefix:", CFSTR("Basic")) )
        {
          v9 = 0LL;
          goto LABEL_23;
        }
        v9 = 0LL;
        if ( !sub_10004B3A8((int)objc_msgSend(objc_retainAutorelease(v21), "UTF8String"), "default")
          || !LOBYTE(location[0]) )
        {
          goto LABEL_23;
        }
      }
      v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", location));
LABEL_23:
      objc_release(v21);
      goto LABEL_24;
    }
LABEL_15:
    v9 = 0LL;
LABEL_26:
    objc_release(v10);
    goto LABEL_27;
  }
  v7[2](v7);
LABEL_28:
  objc_release(v7);
  objc_release(v6);
}