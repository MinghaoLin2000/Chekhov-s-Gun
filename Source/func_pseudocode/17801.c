-[CoreMLModelSecurity createPersistentKeyBlobForKeyID:usesCodeSigningIdentityForEncryption:completionBlock:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[CoreMLModelSecurity createPersistentKeyBlobForKeyID:usesCodeSigningIdentityForEncryption:completionBlock:](
        CoreMLModelSecurity *self,
        SEL a2,
        id a3,
        bool a4,
        id a5)
{
  _BOOL8 v6; // x22
  id v7; // x19
  void (__fastcall **v8)(id, void *, _QWORD); // x20
  id v9; // x21
  id v10; // x22
  id v11; // x0
  void *v12; // x24
  void *v13; // x23
  id v14; // x27
  MLCloudSession *v15; // x25
  id v16; // x26
  id v17; // x24
  void *v18; // x28
  os_log_s *v19; // x24
  os_log_s *v20; // x27
  os_log_s *v21; // x24
  id v22; // [xsp+10h] [xbp-70h] BYREF
  id v23; // [xsp+18h] [xbp-68h] BYREF
  id v24; // [xsp+20h] [xbp-60h] BYREF
  id v25; // [xsp+28h] [xbp-58h] BYREF

  v6 = a4;
  v7 = objc_retain(a3);
  v8 = (void (__fastcall **)(id, void *, _QWORD))objc_retain(a5);
  v9 = objc_alloc_init((Class)&OBJC_CLASS___MLFairPlayKeyLoadingSession);
  v25 = 0LL;
  v10 = objc_retainAutoreleasedReturnValue((id)sub_100009B00(v6, &v25));
  v11 = objc_retain(v25);
  v12 = v11;
  if ( v10 )
  {
    v24 = v11;
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "generateKeyRequestForKeyIdentifier:teamIdentifier:error:", v7, v10, &v24));
    v14 = objc_retain(v24);
    objc_release(v12);
    if ( v13 )
    {
      v15 = -[MLCloudSession initWithTeamIdentifier:](
              objc_alloc(&OBJC_CLASS___MLCloudSession),
              "initWithTeamIdentifier:",
              v10);
      v23 = v14;
      v16 = objc_retainAutoreleasedReturnValue(
              -[MLCloudSession fetchKeyResponseFromServerForKeyID:signedKeyRequest:error:](
                v15,
                "fetchKeyResponseFromServerForKeyID:signedKeyRequest:error:",
                v7,
                v13,
                &v23));
      v17 = objc_retain(v23);
      objc_release(v14);
      if ( v16 )
      {
        v22 = v17;
        v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "generatePersistentKeyBlobFromKeyResponse:error:", v16, &v22));
        v14 = objc_retain(v22);
        objc_release(v17);
        if ( v18 )
        {
          v8[2](v8, v18, 0LL);
        }
        else
        {
          v21 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel"));
          if ( os_log_type_enabled(v21, OS_LOG_TYPE_ERROR) )
            sub_10000B10C(v7, v14, v21);
          objc_release(v21);
          ((void (__fastcall **)(id, void *, id))v8)[2](v8, 0LL, v14);
        }
        objc_release(v18);
      }
      else
      {
        v20 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel"));
        if ( os_log_type_enabled(v20, OS_LOG_TYPE_ERROR) )
          sub_10000B0A4(v7, v17, v20);
        objc_release(v20);
        ((void (__fastcall **)(id, void *, id))v8)[2](v8, 0LL, v17);
        v14 = v17;
      }
      objc_release(v16);
      objc_release(v15);
    }
    else
    {
      v19 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel"));
      if ( os_log_type_enabled(v19, OS_LOG_TYPE_ERROR) )
        sub_10000B03C(v7, v14, v19);
      objc_release(v19);
      ((void (__fastcall **)(id, void *, id))v8)[2](v8, 0LL, v14);
    }
    objc_release(v13);
    v12 = v14;
  }
  else
  {
    ((void (__fastcall **)(id, void *, id))v8)[2](v8, 0LL, v11);
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v12);
  objc_release(v8);
  objc_release(v7);
}