-[ATXHeuristicDataSourcesClient _queryProxySynchronouslyWithTimeout:queryHandler:]
id __cdecl -[ATXHeuristicDataSourcesClient _queryProxySynchronouslyWithTimeout:queryHandler:](
        ATXHeuristicDataSourcesClient *self,
        SEL a2,
        double a3,
        id a4)
{
  void (__fastcall **v6)(id, void *, _QWORD *); // x19
  dispatch_semaphore_t v7; // x0
  NSXPCConnection *xpcConnection; // x20
  dispatch_semaphore_s *v9; // x21
  id v10; // x20
  dispatch_semaphore_s *v11; // x21
  void ***v12; // x22
  os_log_s *v13; // x23
  NSError *v14; // x0
  void *v15; // x8
  id v16; // x23
  void **v18; // [xsp+0h] [xbp-D0h] BYREF
  __int64 v19; // [xsp+8h] [xbp-C8h]
  __int64 (__fastcall *v20)(); // [xsp+10h] [xbp-C0h]
  void *v21; // [xsp+18h] [xbp-B8h]
  id v22; // [xsp+20h] [xbp-B0h]
  __int64 *v23; // [xsp+28h] [xbp-A8h]
  _QWORD v24[4]; // [xsp+30h] [xbp-A0h] BYREF
  id v25; // [xsp+50h] [xbp-80h]
  __int64 *v26; // [xsp+58h] [xbp-78h]
  __int64 v27; // [xsp+60h] [xbp-70h] BYREF
  __int64 *v28; // [xsp+68h] [xbp-68h]
  __int64 v29; // [xsp+70h] [xbp-60h]
  __int64 (__fastcall *v30)(); // [xsp+78h] [xbp-58h]
  __int64 (__fastcall *v31)(); // [xsp+80h] [xbp-50h]
  id v32; // [xsp+88h] [xbp-48h]
  __int64 vars8; // [xsp+D8h] [xbp+8h]

  v6 = (void (__fastcall **)(id, void *, _QWORD *))objc_retain(a4);
  v27 = 0LL;
  v28 = &v27;
  v29 = 0x3032000000LL;
  v30 = sub_100007F64;
  v31 = sub_100007F74;
  v32 = 0LL;
  v7 = dispatch_semaphore_create(0LL);
  xpcConnection = self->_xpcConnection;
  v24[0] = _NSConcreteStackBlock;
  v24[1] = 3254779904LL;
  v24[2] = sub_100007F7C;
  v24[3] = &unk_100028AA0;
  v26 = &v27;
  v9 = objc_retain(v7);
  v25 = v9;
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSXPCConnection remoteObjectProxyWithErrorHandler:](
            xpcConnection,
            "remoteObjectProxyWithErrorHandler:",
            v24));
  v18 = _NSConcreteStackBlock;
  v19 = 3254779904LL;
  v20 = sub_100008060;
  v21 = &unk_100028AA0;
  v23 = &v27;
  v11 = objc_retain(v9);
  v22 = v11;
  v12 = objc_retainBlock(&v18);
  ((void (__fastcall **)(id, void *, void ***))v6)[2](v6, v10, v12);
  if ( (unsigned int)+[_PASDispatch waitForSemaphore:timeoutSeconds:](
                       &OBJC_CLASS____PASDispatch,
                       "waitForSemaphore:timeoutSeconds:",
                       v11,
                       a3,
                       v18,
                       v19,
                       v20,
                       v21) == 1 )
  {
    v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC());
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
      sub_10000A8B0(v13);
    objc_release(v13);
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              NSCocoaErrorDomain,
              1LL,
              0LL));
    v15 = (void *)v28[5];
    v28[5] = (__int64)v14;
    objc_release(v15);
  }
  v16 = objc_retain((id)v28[5]);
  objc_release(v12);
  objc_release(v22);
  objc_release(v10);
  objc_release(v25);
  objc_release(v11);
  _Block_object_dispose(&v27, 8);
  objc_release(v32);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v16);
}