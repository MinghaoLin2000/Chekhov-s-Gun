-[MLCloudSession fetchKeyResponseFromServerForKeyID:signedKeyRequest:error:]
id __cdecl -[MLCloudSession fetchKeyResponseFromServerForKeyID:signedKeyRequest:error:](
        MLCloudSession *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  NSString *v11; // x22
  __int64 v12; // x1
  void *v13; // x21
  ModelKeyServerAPIFetchKeyRequest *v14; // x22
  NSString *v15; // x24
  dispatch_semaphore_s *v16; // x24
  CKContainer *v17; // x25
  CKDatabase *v18; // x26
  dispatch_time_t v19; // x0
  os_log_s *v20; // x23
  id v21; // x23
  _QWORD v23[4]; // [xsp+8h] [xbp-D8h] BYREF
  id v24; // [xsp+28h] [xbp-B8h]
  __int64 *v25; // [xsp+30h] [xbp-B0h]
  __int64 *v26; // [xsp+38h] [xbp-A8h]
  __int64 v27; // [xsp+40h] [xbp-A0h] BYREF
  __int64 *v28; // [xsp+48h] [xbp-98h]
  __int64 v29; // [xsp+50h] [xbp-90h]
  __int64 (__fastcall *v30)(); // [xsp+58h] [xbp-88h]
  __int64 (__fastcall *v31)(); // [xsp+60h] [xbp-80h]
  id v32; // [xsp+68h] [xbp-78h]
  __int64 v33; // [xsp+70h] [xbp-70h] BYREF
  __int64 *v34; // [xsp+78h] [xbp-68h]
  __int64 v35; // [xsp+80h] [xbp-60h]
  __int64 (__fastcall *v36)(); // [xsp+88h] [xbp-58h]
  __int64 (__fastcall *v37)(); // [xsp+90h] [xbp-50h]
  id v38; // [xsp+98h] [xbp-48h]
  __int64 vars8; // [xsp+E8h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_alloc((Class)&OBJC_CLASS___CKCodeOperation);
  v11 = objc_retainAutoreleasedReturnValue(-[MLCloudSession serviceName](self, "serviceName"));
  v13 = objc_msgSend(
          v10,
          "initWithServiceName:functionName:responseClass:",
          v11,
          CFSTR("fetchKey2"),
          objc_opt_class(&OBJC_CLASS___ModelKeyServerAPIFetchKeyResponse, v12));
  objc_release(v11);
  v14 = objc_alloc_init(&OBJC_CLASS___ModelKeyServerAPIFetchKeyRequest);
  -[ModelKeyServerAPIFetchKeyRequest setKeyId:](v14, "setKeyId:", v8);
  -[ModelKeyServerAPIFetchKeyRequest setSignedKeyRequest:](v14, "setSignedKeyRequest:", v9);
  v15 = objc_retainAutoreleasedReturnValue(-[MLCloudSession teamIdentifier](self, "teamIdentifier"));
  -[ModelKeyServerAPIFetchKeyRequest setTeamId:](v14, "setTeamId:", v15);
  objc_release(v15);
  -[ModelKeyServerAPIFetchKeyRequest setRawRequest:](v14, "setRawRequest:", 0LL);
  objc_msgSend(v13, "setRequest:", v14);
  objc_msgSend(v13, "setQualityOfService:", 25LL);
  v33 = 0LL;
  v34 = &v33;
  v35 = 0x3032000000LL;
  v36 = sub_100007650;
  v37 = sub_100007660;
  v38 = 0LL;
  v27 = 0LL;
  v28 = &v27;
  v29 = 0x3032000000LL;
  v30 = sub_100007650;
  v31 = sub_100007660;
  v32 = 0LL;
  v23[0] = _NSConcreteStackBlock;
  v23[1] = 3254779904LL;
  v23[2] = sub_100007668;
  v23[3] = &unk_100010328;
  v25 = &v27;
  v16 = objc_retain(dispatch_semaphore_create(0LL));
  v24 = v16;
  v26 = &v33;
  objc_msgSend(v13, "setCodeOperationCompletionBlock:", v23);
  v17 = objc_retainAutoreleasedReturnValue(-[MLCloudSession container](self, "container"));
  v18 = objc_retainAutoreleasedReturnValue(-[CKContainer publicCloudDatabase](v17, "publicCloudDatabase"));
  -[CKDatabase addOperation:](v18, "addOperation:", v13);
  objc_release(v18);
  objc_release(v17);
  v19 = dispatch_time(0LL, 10000000000LL);
  if ( dispatch_semaphore_wait(v16, v19) )
  {
    if ( a5 )
      *a5 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[MLModelErrorUtils modelDecryptionKeyFetchErrorWithUnderlyingError:format:](
                  &OBJC_CLASS___MLModelErrorUtils,
                  "modelDecryptionKeyFetchErrorWithUnderlyingError:format:",
                  0LL,
                  CFSTR("Fetching decryption key from server timed out. Make sure the device is online."))));
    v20 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel"));
    if ( os_log_type_enabled(v20, OS_LOG_TYPE_ERROR) )
      sub_10000ADC8(v20);
    objc_release(v20);
    v21 = 0LL;
  }
  else
  {
    if ( a5 )
      *a5 = objc_retainAutorelease((id)v28[5]);
    v21 = objc_retain((id)v34[5]);
  }
  objc_release(v24);
  _Block_object_dispose(&v27, 8);
  objc_release(v32);
  _Block_object_dispose(&v33, 8);
  objc_release(v38);
  objc_release(v16);
  objc_release(v14);
  objc_release(v13);
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v21);
}