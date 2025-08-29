-[MediaConversionRequestTracker initWithRequestOptions:requestNumber:]
MediaConversionRequestTracker *__cdecl -[MediaConversionRequestTracker initWithRequestOptions:requestNumber:](
        MediaConversionRequestTracker *self,
        SEL a2,
        id a3,
        unsigned __int64 a4)
{
  id v8; // x19
  void *v9; // x24
  MediaConversionRequestTracker *v10; // x0
  MediaConversionRequestTracker *v11; // x20
  NSDate *v12; // x0
  NSDate *enqueueTime; // x8
  __int64 v14; // x0
  OS_os_transaction *transaction; // x8
  NSXPCConnection *v16; // x21
  _xpc_connection_s *v17; // x22
  void *v18; // x21
  id v19; // x0
  os_signpost_id_t signpostId; // x21
  void *v21; // x22
  void *v22; // x23
  NSAssertionHandler *v24; // x24
  objc_super v25; // [xsp+10h] [xbp-60h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-50h] BYREF
  void *v27; // [xsp+24h] [xbp-4Ch]
  __int16 v28; // [xsp+2Ch] [xbp-44h]
  void *v29; // [xsp+2Eh] [xbp-42h]

  v8 = objc_retain(a3);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceJobIdentifierKey")));
  objc_release(v9);
  if ( !v9 )
  {
    v24 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v24,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("MediaConversionDebugUtilities.m"),
      46LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("requestOptions[PAMediaConversionServiceJobIdentifierKey]"));
    objc_release(v24);
  }
  v25.receiver = self;
  v25.super_class = (Class)&OBJC_CLASS___MediaConversionRequestTracker;
  v10 = -[MediaConversionRequestTracker init](&v25, "init");
  v11 = v10;
  if ( v10 )
  {
    objc_storeStrong((id *)&v10->_requestOptions, a3);
    v11->_requestNumber = a4;
    v12 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
    enqueueTime = v11->_enqueueTime;
    v11->_enqueueTime = v12;
    objc_release(enqueueTime);
    v14 = os_transaction_create("com.apple.photos.mediaconversion.requesttracking");
    transaction = v11->_transaction;
    v11->_transaction = (OS_os_transaction *)v14;
    objc_release(transaction);
    v16 = objc_retainAutoreleasedReturnValue(+[NSXPCConnection currentConnection](&OBJC_CLASS___NSXPCConnection, "currentConnection"));
    v17 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection _xpcConnection](v16, "_xpcConnection"));
    v11->_clientProcessIdentifier = xpc_connection_get_pid(v17);
    objc_release(v17);
    objc_release(v16);
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionJobPriorityKey")));
    v11->_effectivePriority = (signed __int64)objc_msgSend(v18, "integerValue");
    objc_release(v18);
    v11->_signpostId = os_signpost_id_make_with_pointer((os_log_t)&_os_log_default, v11);
    v19 = objc_retain(&_os_log_default);
    signpostId = v11->_signpostId;
    if ( signpostId - 1 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled((os_log_t)&_os_log_default) )
    {
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceJobIdentifierKey")));
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionRequestReasonKey")));
      *(_DWORD *)buf = 138543618;
      v27 = v21;
      v28 = 2112;
      v29 = v22;
      _os_signpost_emit_with_name_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_SIGNPOST_INTERVAL_BEGIN,
        signpostId,
        "com.apple.photos.mediaconversion.service.enqueue",
        "Media conversion request %{public}@, reason: %@",
        buf,
        0x16u);
      objc_release(v22);
      objc_release(v21);
    }
    objc_release(&_os_log_default);
    -[MediaConversionRequestTracker setupPerfCheck](v11, "setupPerfCheck");
    -[MediaConversionRequestTracker setupCoreImageGraphDumpCapture](v11, "setupCoreImageGraphDumpCapture");
    -[MediaConversionRequestTracker cacheDestinationBookmarkCollectionSignature](
      v11,
      "cacheDestinationBookmarkCollectionSignature");
  }
  objc_release(v8);
  return v11;
}