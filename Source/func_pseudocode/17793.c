-[CoreMLModelSecurity securePredictionFromLazyBatch:options:withReply:]
void __cdecl -[CoreMLModelSecurity securePredictionFromLazyBatch:options:withReply:](
        CoreMLModelSecurity *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  NSMutableArray *v9; // x22
  unsigned __int64 i; // x20
  CoreMLModelSecurityXPCFeatureProvider *v11; // x26
  void *v12; // x24
  CoreMLModelSecurityServiceToClientProtocol *v13; // x23
  CoreMLModelSecurityXPCFeatureProvider *v14; // x26
  MLModel *v15; // x20
  id v16; // x26
  id v17; // x25
  NSMutableArray *v18; // x27
  unsigned __int64 v19; // x28
  __int128 v20; // q0
  void *v21; // x20
  id v22; // x0
  _BOOL4 v23; // w23
  os_log_s *v24; // x23
  void *v25; // x20
  __int128 v26; // [xsp+0h] [xbp-B0h]
  void *context; // [xsp+18h] [xbp-98h]
  id v28; // [xsp+20h] [xbp-90h]
  void (__fastcall **v29)(id, void *, id); // [xsp+28h] [xbp-88h]
  id v30; // [xsp+30h] [xbp-80h]
  id v31; // [xsp+38h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+40h] [xbp-70h] BYREF
  unsigned __int64 v33; // [xsp+44h] [xbp-6Ch]

  v8 = objc_retain(a3);
  v30 = objc_retain(a4);
  v29 = (void (__fastcall **)(id, void *, id))objc_retain(a5);
  context = objc_autoreleasePoolPush();
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSMutableArray arrayWithCapacity:](
           &OBJC_CLASS___NSMutableArray,
           "arrayWithCapacity:",
           objc_msgSend(v8, "count")));
  for ( i = 0LL; i < (unsigned __int64)objc_msgSend(v8, "count"); ++i )
  {
    v11 = objc_alloc(&OBJC_CLASS___CoreMLModelSecurityXPCFeatureProvider);
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectAtIndexedSubscript:", i));
    v13 = objc_retainAutoreleasedReturnValue(-[CoreMLModelSecurity clientProxy](self, "clientProxy"));
    v14 = -[CoreMLModelSecurityXPCFeatureProvider initWithRemoteProvider:clientProxy:](
            v11,
            "initWithRemoteProvider:clientProxy:",
            v12,
            v13);
    -[NSMutableArray setObject:atIndexedSubscript:](v9, "setObject:atIndexedSubscript:", v14, i);
    objc_release(v14);
    objc_release(v13);
    objc_release(v12);
  }
  v28 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___MLArrayBatchProvider), "initWithFeatureProviderArray:", v9);
  v15 = objc_retainAutoreleasedReturnValue(-[CoreMLModelSecurity decryptedModel](self, "decryptedModel"));
  v31 = 0LL;
  v16 = objc_retainAutoreleasedReturnValue(-[MLModel predictionsFromBatch:options:error:](v15, "predictionsFromBatch:options:error:", v28, v30, &v31));
  v17 = objc_retain(v31);
  objc_release(v15);
  if ( v16 )
  {
    v18 = objc_retainAutoreleasedReturnValue(
            +[NSMutableArray arrayWithCapacity:](
              &OBJC_CLASS___NSMutableArray,
              "arrayWithCapacity:",
              objc_msgSend(v16, "count")));
    v19 = 0LL;
    *(_QWORD *)&v20 = 134217984LL;
    v26 = v20;
    while ( v19 < (unsigned __int64)objc_msgSend(v16, "count", v26) )
    {
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "featuresAtIndex:", v19));
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "featureNames"));
      v23 = v22 == 0LL;
      objc_release(v22);
      if ( v23 )
      {
        v24 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel"));
        if ( os_log_type_enabled(v24, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = v26;
          v33 = v19;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            v24,
            OS_LOG_TYPE_ERROR,
            "NULL outputBatchProvider at index %lu.",
            buf,
            0xCu);
        }
      }
      else
      {
        v24 = (os_log_s *)objc_msgSend(
                            objc_alloc((Class)&OBJC_CLASS___MLDictionaryFeatureProvider),
                            "initWithFeatureProvider:",
                            v21);
        -[NSMutableArray setObject:atIndexedSubscript:](v18, "setObject:atIndexedSubscript:", v24, v19);
      }
      objc_release(v24);
      objc_release(v21);
      ++v19;
    }
    v25 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___MLArrayDictionaryFeatureProvider),
            "initWithDictionaryFeatureProviderArray:",
            v18);
    v29[2](v29, v25, v17);
    objc_release(v25);
    objc_release(v18);
  }
  else
  {
    v29[2](v29, 0LL, v17);
  }
  objc_release(v16);
  objc_release(v28);
  objc_release(v9);
  objc_release(v17);
  objc_autoreleasePoolPop(context);
  objc_release(v29);
  objc_release(v30);
  objc_release(v8);
}