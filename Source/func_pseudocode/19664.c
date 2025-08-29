-[IPPSession _initWithBundleIdentifier:clientID:completeConfiguraton:]
id __cdecl -[IPPSession _initWithBundleIdentifier:clientID:completeConfiguraton:](
        IPPSession *self,
        SEL a2,
        id a3,
        int a4,
        id a5)
{
  __CFString *v9; // x19
  void (__fastcall **v10)(id, NSURLSessionConfiguration *); // x21
  IPPSession *v11; // x0
  IPPSession *v12; // x20
  IPPSessionDelegate *v13; // x0
  IPPSessionDelegate *sessionDelegate; // x8
  dispatch_queue_attr_s *v15; // x22
  dispatch_queue_t v16; // x0
  OS_dispatch_queue *workQueue; // x8
  NSOperationQueue *v18; // x0
  NSOperationQueue *operationQueue; // x8
  NSURLSessionConfiguration *v20; // x22
  NSSet *v21; // x23
  NSBundle *v22; // x0
  NSBundle *v23; // x23
  NSDictionary *v24; // x0
  NSDictionary *v25; // x25
  __CFString *v26; // x24
  const __CFString *v27; // x9
  NSDictionary *v28; // x25
  NSURLSession *v29; // x0
  NSURLSession *URLSession; // x8
  os_log_s *v31; // x25
  NSURLSession *v32; // x8
  objc_super v34; // [xsp+0h] [xbp-90h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  NSURLSession *v36; // [xsp+14h] [xbp-7Ch]
  __int16 v37; // [xsp+1Ch] [xbp-74h]
  __CFString *v38; // [xsp+1Eh] [xbp-72h]
  _QWORD v39[2]; // [xsp+28h] [xbp-68h] BYREF
  _QWORD v40[2]; // [xsp+38h] [xbp-58h] BYREF

  v9 = (__CFString *)objc_retain(a3);
  v10 = (void (__fastcall **)(id, NSURLSessionConfiguration *))objc_retain(a5);
  v34.receiver = self;
  v34.super_class = (Class)&OBJC_CLASS___IPPSession;
  v11 = -[IPPSession init](&v34, "init");
  v12 = v11;
  if ( v11 )
  {
    objc_storeStrong((id *)&v11->_clientBundleIdentifier, a3);
    v12->_clientID = a4;
    v13 = -[IPPSessionDelegate initWithClientID:](
            objc_alloc(&OBJC_CLASS___IPPSessionDelegate),
            "initWithClientID:",
            (unsigned int)v12->_clientID);
    sessionDelegate = v12->_sessionDelegate;
    v12->_sessionDelegate = v13;
    objc_release(sessionDelegate);
    v15 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v16 = dispatch_queue_create("com.apple.printing.IPPNetworkSession", v15);
    workQueue = v12->_workQueue;
    v12->_workQueue = (OS_dispatch_queue *)v16;
    objc_release(workQueue);
    objc_release(v15);
    v18 = objc_opt_new(&OBJC_CLASS___NSOperationQueue);
    operationQueue = v12->_operationQueue;
    v12->_operationQueue = v18;
    objc_release(operationQueue);
    -[NSOperationQueue setUnderlyingQueue:](v12->_operationQueue, "setUnderlyingQueue:", v12->_workQueue);
    -[NSOperationQueue setMaxConcurrentOperationCount:](v12->_operationQueue, "setMaxConcurrentOperationCount:", 1LL);
    v20 = objc_retainAutoreleasedReturnValue(
            +[NSURLSessionConfiguration ephemeralSessionConfiguration](
              &OBJC_CLASS___NSURLSessionConfiguration,
              "ephemeralSessionConfiguration"));
    -[NSURLSessionConfiguration setTimeoutIntervalForRequest:](v20, "setTimeoutIntervalForRequest:", 30.0);
    -[NSURLSessionConfiguration setHTTPMaximumConnectionsPerHost:](v20, "setHTTPMaximumConnectionsPerHost:", 4LL);
    -[NSURLSessionConfiguration setURLCache:](v20, "setURLCache:", 0LL);
    -[NSURLSessionConfiguration setURLCredentialStorage:](v20, "setURLCredentialStorage:", 0LL);
    v21 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", &off_1000B4668));
    -[NSURLSessionConfiguration set_suppressedAutoAddedHTTPHeaders:](v20, "set_suppressedAutoAddedHTTPHeaders:", v21);
    objc_release(v21);
    -[NSURLSessionConfiguration set_enableOAuthBearerTokenChallenges:](
      v20,
      "set_enableOAuthBearerTokenChallenges:",
      1LL);
    v22 = objc_retainAutoreleasedReturnValue(
            +[NSBundle bundleWithIdentifier:](
              &OBJC_CLASS___NSBundle,
              "bundleWithIdentifier:",
              CFSTR("com.apple.framework.PrintKit")));
    v23 = v22;
    if ( !v22
      || (v24 = objc_retainAutoreleasedReturnValue(-[NSBundle infoDictionary](v22, "infoDictionary")), (v25 = v24) == 0LL)
      || (v26 = (__CFString *)objc_retainAutoreleasedReturnValue(
                                -[NSDictionary objectForKeyedSubscript:](
                                  v24,
                                  "objectForKeyedSubscript:",
                                  kCFBundleVersionKey)),
          objc_release(v25),
          !v26) )
    {
      v26 = CFSTR("Unknown");
    }
    v27 = CFSTR("com.apple.prinkit");
    if ( v9 )
      v27 = v9;
    v39[0] = CFSTR("X-PrintKit-Origin");
    v39[1] = CFSTR("X-PrintKit-Version");
    v40[0] = v27;
    v40[1] = v26;
    v28 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v40,
              v39,
              2LL));
    -[NSURLSessionConfiguration setHTTPAdditionalHeaders:](v20, "setHTTPAdditionalHeaders:", v28);
    objc_release(v28);
    if ( v9 )
      -[NSURLSessionConfiguration set_sourceApplicationBundleIdentifier:](
        v20,
        "set_sourceApplicationBundleIdentifier:",
        v9);
    -[NSURLSessionConfiguration set_sourceApplicationSecondaryIdentifier:](
      v20,
      "set_sourceApplicationSecondaryIdentifier:",
      CFSTR("com.apple.PrintKit.PrinterTool"));
    if ( v10 )
      v10[2](v10, v20);
    v29 = objc_retainAutoreleasedReturnValue(
            +[NSURLSession sessionWithConfiguration:delegate:delegateQueue:](
              &OBJC_CLASS___NSURLSession,
              "sessionWithConfiguration:delegate:delegateQueue:",
              v20,
              v12->_sessionDelegate,
              v12->_operationQueue));
    URLSession = v12->_URLSession;
    v12->_URLSession = v29;
    objc_release(URLSession);
    v31 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryNetwork[0]));
    if ( os_log_type_enabled(v31, OS_LOG_TYPE_DEFAULT) )
    {
      v32 = v12->_URLSession;
      *(_DWORD *)buf = 138543618;
      v36 = v32;
      v37 = 2114;
      v38 = v9;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v31,
        OS_LOG_TYPE_DEFAULT,
        "Created - session %{public}@ ident %{public}@",
        buf,
        0x16u);
    }
    objc_release(v31);
    objc_release(v23);
    objc_release(v26);
    objc_release(v20);
  }
  objc_release(v10);
  objc_release(v9);
  return v12;
}