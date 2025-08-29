-[ImageConversionService convertImageWithOptions:reply:]
void __cdecl -[ImageConversionService convertImageWithOptions:reply:](
        ImageConversionService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  void *v7; // x21
  ClientRequest *v8; // x22
  char *v9; // x0
  os_signpost_id_t v10; // x20
  NSXPCConnection *v11; // x24
  unsigned __int64 v12; // x20
  MediaConversionRequestTracker *v13; // x28
  id v14; // x23
  unsigned __int8 v15; // w26
  id v16; // x0
  void *v17; // x25
  unsigned __int8 v18; // w26
  PAMediaConversionServiceResourceURLCollection *v19; // x25
  MediaConversionQueue *requestQueue; // x0
  NSString *v21; // x26
  NSString *v22; // x0
  NSString *v23; // x27
  unsigned __int64 v24; // x0
  __CFString *v25; // x0
  void *v26; // x20
  void *v27; // x27
  unsigned int v28; // w0
  NSString *v29; // [xsp+8h] [xbp-148h]
  __CFString *v30; // [xsp+10h] [xbp-140h]
  NSString *v31; // [xsp+18h] [xbp-138h]
  NSString *v32; // [xsp+28h] [xbp-128h]
  id v33; // [xsp+30h] [xbp-120h]
  signed __int64 v34; // [xsp+38h] [xbp-118h]
  void *context; // [xsp+40h] [xbp-110h]
  id v36; // [xsp+48h] [xbp-108h]
  id v37; // [xsp+50h] [xbp-100h]
  id v38; // [xsp+58h] [xbp-F8h]
  id v39; // [xsp+60h] [xbp-F0h]
  id v40; // [xsp+68h] [xbp-E8h] BYREF
  id v41; // [xsp+70h] [xbp-E0h] BYREF
  id v42; // [xsp+78h] [xbp-D8h] BYREF
  uint8_t buf[4]; // [xsp+80h] [xbp-D0h] BYREF
  unsigned __int64 v44; // [xsp+84h] [xbp-CCh]
  __int16 v45; // [xsp+8Ch] [xbp-C4h]
  void *v46; // [xsp+8Eh] [xbp-C2h]
  __int16 v47; // [xsp+96h] [xbp-BAh]
  __CFString *v48; // [xsp+98h] [xbp-B8h]
  __int16 v49; // [xsp+A0h] [xbp-B0h]
  id v50; // [xsp+A2h] [xbp-AEh]
  __int16 v51; // [xsp+AAh] [xbp-A6h]
  NSString *v52; // [xsp+ACh] [xbp-A4h]
  __int16 v53; // [xsp+B4h] [xbp-9Ch]
  NSString *v54; // [xsp+B6h] [xbp-9Ah]
  __int16 v55; // [xsp+BEh] [xbp-92h]
  void *v56; // [xsp+C0h] [xbp-90h]
  __int16 v57; // [xsp+C8h] [xbp-88h]
  _BOOL4 v58; // [xsp+CAh] [xbp-86h]
  __int16 v59; // [xsp+CEh] [xbp-82h]
  id v60; // [xsp+D0h] [xbp-80h]
  __int16 v61; // [xsp+D8h] [xbp-78h]
  signed __int64 v62; // [xsp+DAh] [xbp-76h]

  v6 = objc_retain(a3);
  v38 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceJobIdentifierKey")));
  v8 = objc_opt_new(&OBJC_CLASS___ClientRequest);
  -[ClientRequest setSignpostID:](
    v8,
    "setSignpostID:",
    os_signpost_id_make_with_pointer((os_log_t)&_os_log_default, v7));
  v9 = -[ClientRequest signpostID](v8, "signpostID");
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v10 = (os_signpost_id_t)v9;
    if ( os_signpost_enabled((os_log_t)&_os_log_default) )
    {
      *(_WORD *)buf = 0;
      _os_signpost_emit_with_name_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_SIGNPOST_INTERVAL_BEGIN,
        v10,
        "com.apple.photos.mediaconversion.service",
        (const char *)&unk_100032A6B,
        buf,
        2u);
    }
  }
  v34 = -[ImageConversionService incrementPendingRequestCountWithRequestIdentifier:](
          self,
          "incrementPendingRequestCountWithRequestIdentifier:",
          v7);
  v37 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionRequestReasonKey")));
  v11 = objc_retainAutoreleasedReturnValue(+[NSXPCConnection currentConnection](&OBJC_CLASS___NSXPCConnection, "currentConnection"));
  v36 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection userInfo](v11, "userInfo"));
  v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v36, "objectForKeyedSubscript:", CFSTR("PAMCS_CONNECTION_USER_INFO_CONNECTION_IDENTIFIER_KEY")));
  context = objc_autoreleasePoolPush();
  v12 = -[MediaConversionQueue nextRequestNumber](self->_requestQueue, "nextRequestNumber");
  v13 = -[MediaConversionRequestTracker initWithRequestOptions:requestNumber:](
          objc_alloc(&OBJC_CLASS___MediaConversionRequestTracker),
          "initWithRequestOptions:requestNumber:",
          v6,
          v12);
  v14 = objc_retainAutoreleasedReturnValue(
          -[MediaConversionQueue queueEntryWithConversionOptions:](
            self->_requestQueue,
            "queueEntryWithConversionOptions:",
            v6));
  objc_msgSend(v14, "setTaskTypeSupportsDeduplication:", 1LL);
  v42 = 0LL;
  v15 = -[ImageConversionService validateRequestOptions:error:](self, "validateRequestOptions:error:", v6, &v42);
  v16 = objc_retain(v42);
  v17 = v16;
  if ( (v15 & 1) == 0 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 138543618;
      v44 = (unsigned __int64)v14;
      v45 = 2114;
      v46 = v17;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Invalid request options for %{public}@: %{public}@",
        buf,
        0x16u);
    }
    goto LABEL_17;
  }
  v41 = v16;
  v18 = -[ImageConversionService setupSourceAndDestinationForRequestTracker:imageConversionOptions:error:](
          self,
          "setupSourceAndDestinationForRequestTracker:imageConversionOptions:error:",
          v13,
          v6,
          &v41);
  v33 = objc_retain(v41);
  objc_release(v17);
  if ( (v18 & 1) == 0 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      v28 = -[MediaConversionRequestTracker clientProcessIdentifier](v13, "clientProcessIdentifier");
      *(_DWORD *)buf = 138543618;
      v44 = (unsigned __int64)v14;
      v45 = 1024;
      LODWORD(v46) = v28;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Rejecting conversion request (image) %{public}@ from [%d] because source or destination URLs are invalid",
        buf,
        0x12u);
    }
    v17 = v33;
    -[MediaConversionRequestTracker setError:](v13, "setError:", v33);
    -[MediaConversionRequestTracker markAsCompletedWithInitialRequestIdentifier:](
      v13,
      "markAsCompletedWithInitialRequestIdentifier:",
      0LL);
LABEL_17:
    v21 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker requestIdentifier](v13, "requestIdentifier"));
    v26 = v38;
    -[ImageConversionService replyToCompletionHandler:requestIdentifier:resultData:resultImageInformation:signpostID:error:](
      self,
      "replyToCompletionHandler:requestIdentifier:resultData:resultImageInformation:signpostID:error:",
      v38,
      v21,
      0LL,
      0LL,
      -[ClientRequest signpostID](v8, "signpostID"),
      v17);
    goto LABEL_21;
  }
  v19 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker sourceURLCollection](v13, "sourceURLCollection"));
  objc_msgSend(v14, "setSourceURLCollection:", v19);
  objc_release(v19);
  -[ClientRequest setImageClientReplyHandler:](v8, "setImageClientReplyHandler:", v38);
  -[ClientRequest setRequestTracker:](v8, "setRequestTracker:", v13);
  -[ClientRequest setConnection:](v8, "setConnection:", v11);
  -[ClientRequest setConnectionIdentifier:](v8, "setConnectionIdentifier:", v39);
  requestQueue = self->_requestQueue;
  v40 = 0LL;
  -[MediaConversionQueue enqueueEntry:clientRequest:isDuplicateOfOriginalQueueEntry:](
    requestQueue,
    "enqueueEntry:clientRequest:isDuplicateOfOriginalQueueEntry:",
    v14,
    v8,
    &v40);
  v21 = (NSString *)objc_retain(v40);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    if ( v21 )
      v22 = v21;
    else
      v22 = (NSString *)v14;
    v23 = objc_retain(v22);
    v24 = -[MediaConversionRequestTracker effectivePriority](v13, "effectivePriority");
    if ( v24 > 4 )
      v25 = 0LL;
    else
      v25 = off_1000393F8[v24];
    v30 = objc_retain(v25);
    v31 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker requestOptionsSignatureString](v13, "requestOptionsSignatureString"));
    v29 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker sourceURLFilenameOnlySummary](v13, "sourceURLFilenameOnlySummary"));
    v32 = v23;
    v27 = objc_retainAutoreleasedReturnValue(-[NSString identifier](v23, "identifier"));
    *(_DWORD *)buf = 134220291;
    v44 = v12;
    v45 = 2114;
    v46 = v7;
    v47 = 2112;
    v48 = v30;
    v49 = 2114;
    v50 = v37;
    v51 = 2114;
    v52 = v31;
    v53 = 2113;
    v54 = v29;
    v55 = 2114;
    v56 = v27;
    v57 = 1024;
    v58 = v21 != 0LL;
    v59 = 2114;
    v60 = v39;
    v61 = 2048;
    v62 = v34;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Received conversion request #%lu %{public}@ (%@, %{public}@) with signature %{public}@ for %{private}@, attached t"
      "o conversion task %{public}@, isDuplicate = %d, connection %{public}@, pending request count now %ld",
      buf,
      0x62u);
    objc_release(v27);
    objc_release(v29);
    objc_release(v31);
    objc_release(v30);
    objc_release(v32);
  }
  v17 = v33;
  v26 = v38;
LABEL_21:
  objc_release(v21);
  objc_release(v17);
  objc_release(v14);
  objc_release(v13);
  objc_autoreleasePoolPop(context);
  objc_release(v39);
  objc_release(v36);
  objc_release(v11);
  objc_release(v37);
  objc_release(v8);
  objc_release(v7);
  objc_release(v26);
  objc_release(v6);
}