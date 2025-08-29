-[TSPAVAssetResourceLoaderDelegate initWithData:]
TSPAVAssetResourceLoaderDelegate *__cdecl -[TSPAVAssetResourceLoaderDelegate initWithData:](
        TSPAVAssetResourceLoaderDelegate *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  TSPAVAssetResourceLoaderDelegate *v6; // x0
  TSPAVAssetResourceLoaderDelegate *v7; // x20
  void *v8; // x21
  NSString *v9; // x22
  const char *v10; // x23
  dispatch_queue_attr_s *v11; // x24
  dispatch_queue_t v12; // x0
  OS_dispatch_queue *delegateQueue; // x8
  NSString *v14; // x23
  const char *v15; // x24
  dispatch_queue_attr_s *v16; // x25
  dispatch_queue_t v17; // x0
  OS_dispatch_queue *requestHandlingQueue; // x8
  objc_super v20; // [xsp+10h] [xbp-50h] BYREF

  v5 = objc_retain(a3);
  v20.receiver = self;
  v20.super_class = (Class)&OBJC_CLASS___TSPAVAssetResourceLoaderDelegate;
  v6 = -[TSPAVAssetResourceLoaderDelegate init](&v20, "init");
  v7 = v6;
  if ( v6 )
  {
    objc_storeStrong((id *)&v6->_data, a3);
    v7->_dataLength = (signed __int64)objc_msgSend(v5, "length");
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "digestString"));
    v9 = objc_retainAutorelease(
           objc_retainAutoreleasedReturnValue(
             +[NSString stringWithFormat:](
               &OBJC_CLASS___NSString,
               "stringWithFormat:",
               CFSTR("TSPAVAssetResourceLoaderDelegate.DelegateQueue[%@]"),
               v8)));
    v10 = -[NSString UTF8String](v9, "UTF8String");
    v11 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v12 = dispatch_queue_create(v10, v11);
    delegateQueue = v7->_delegateQueue;
    v7->_delegateQueue = (OS_dispatch_queue *)v12;
    objc_release(delegateQueue);
    objc_release(v11);
    v14 = objc_retainAutorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("TSPAVAssetResourceLoaderDelegate.RequestHandlingQueue[%@]"),
                v8)));
    v15 = -[NSString UTF8String](v14, "UTF8String");
    v16 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v17 = dispatch_queue_create(v15, v16);
    requestHandlingQueue = v7->_requestHandlingQueue;
    v7->_requestHandlingQueue = (OS_dispatch_queue *)v17;
    objc_release(requestHandlingQueue);
    objc_release(v16);
    objc_release(v14);
    objc_release(v9);
    objc_release(v8);
  }
  objc_release(v5);
  return v7;
}