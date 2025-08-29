-[VideoConversionService performConversionOfClass:forSourceBookmarkDictionary:destinationBookmarkDictionary:options:replyHandler:]
void __cdecl -[VideoConversionService performConversionOfClass:forSourceBookmarkDictionary:destinationBookmarkDictionary:options:replyHandler:](
        VideoConversionService *self,
        SEL a2,
        Class a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  id v13; // x24
  id v14; // x21
  id v15; // x23
  NSXPCConnection *v16; // x20
  void *v17; // x22
  __int64 v18; // x1
  void *v19; // x27
  void *v20; // x20
  void *v21; // x20
  void *v22; // x22
  void *v23; // x20
  __CFString *v24; // x0
  unsigned __int64 v25; // x22
  void *v26; // x20
  id v27; // x25
  void *v28; // x22
  id v29; // x20
  __CFString *v30; // x23
  void *v31; // x26
  void *v32; // x20
  unsigned int v33; // w22
  void *v34; // x20
  PAMediaConversionServiceResourceURLCollection *v35; // x22
  PAMediaConversionServiceResourceURLCollection *v36; // x20
  void (__fastcall **v37)(_QWORD, _QWORD, _QWORD, _QWORD); // x28
  MediaConversionRequestTracker *v38; // x26
  __CFString *v39; // x24
  PAMediaConversionServiceResourceURLCollection *v40; // x0
  void *v41; // x20
  void *v42; // x22
  id v43; // x0
  void *v44; // x24
  void *v45; // x20
  void *v46; // x20
  MediaConversionQueue *requestQueue; // x0
  id v48; // x0
  void *v49; // x19
  id v50; // x22
  void *v51; // x20
  void (__fastcall **v52)(_QWORD, _QWORD, _QWORD, _QWORD); // x26
  void *v53; // x28
  void *v54; // x0
  unsigned int v55; // w20
  _BOOL4 v56; // w0
  NSDictionary *v57; // x20
  __int64 v58; // x3
  NSError *v59; // x22
  NSAssertionHandler *v60; // x22
  unsigned __int64 v61; // [xsp+18h] [xbp-138h]
  objc_class *v62; // [xsp+20h] [xbp-130h]
  Class v63; // [xsp+20h] [xbp-130h]
  void *v64; // [xsp+28h] [xbp-128h]
  id v65; // [xsp+30h] [xbp-120h]
  id v66; // [xsp+38h] [xbp-118h]
  id v67; // [xsp+40h] [xbp-110h]
  id v68; // [xsp+48h] [xbp-108h]
  NSXPCConnection *v69; // [xsp+50h] [xbp-100h]
  id v70; // [xsp+58h] [xbp-F8h]
  id v71; // [xsp+60h] [xbp-F0h]
  MediaConversionRequestTracker *v72; // [xsp+68h] [xbp-E8h]
  __CFString *v73; // [xsp+70h] [xbp-E0h]
  id v74; // [xsp+78h] [xbp-D8h] BYREF
  id v75; // [xsp+80h] [xbp-D0h] BYREF
  id v76; // [xsp+88h] [xbp-C8h] BYREF
  uint8_t buf[4]; // [xsp+90h] [xbp-C0h] BYREF
  __CFString *v78; // [xsp+94h] [xbp-BCh]
  __int16 v79; // [xsp+9Ch] [xbp-B4h]
  const __CFString *v80; // [xsp+9Eh] [xbp-B2h]
  __int16 v81; // [xsp+A6h] [xbp-AAh]
  void *v82; // [xsp+A8h] [xbp-A8h]
  __int16 v83; // [xsp+B0h] [xbp-A0h]
  _BOOL4 v84; // [xsp+B2h] [xbp-9Eh]
  __int16 v85; // [xsp+B6h] [xbp-9Ah]
  void *v86; // [xsp+B8h] [xbp-98h]
  __int16 v87; // [xsp+C0h] [xbp-90h]
  id v88; // [xsp+C2h] [xbp-8Eh]
  NSErrorUserInfoKey v89; // [xsp+D0h] [xbp-80h] BYREF
  const __CFString *v90; // [xsp+D8h] [xbp-78h] BYREF
  NSErrorUserInfoKey v91; // [xsp+E0h] [xbp-70h] BYREF
  const __CFString *v92; // [xsp+E8h] [xbp-68h] BYREF

  v13 = objc_retain(a4);
  v71 = objc_retain(a5);
  v14 = objc_retain(a6);
  v15 = objc_retain(a7);
  v73 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceJobIdentifierKey")));
  if ( !v73 )
  {
    v60 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v60,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("VideoConversionService.m"),
      1537LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("requestIdentifier"));
    objc_release(v60);
  }
  v16 = objc_retainAutoreleasedReturnValue(+[NSXPCConnection currentConnection](&OBJC_CLASS___NSXPCConnection, "currentConnection"));
  v68 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection userInfo](v16, "userInfo"));
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v68, "objectForKeyedSubscript:", CFSTR("PAMCS_CONNECTION_USER_INFO_CONNECTION_IDENTIFIER_KEY")));
  v19 = (void *)objc_opt_new(&OBJC_CLASS___ClientRequest, v18);
  v69 = v16;
  objc_msgSend(v19, "setConnection:", v16);
  v70 = v17;
  objc_msgSend(v19, "setConnectionIdentifier:", v17);
  objc_msgSend(v19, "setVideoClientReplyHandler:", v15);
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionWantsProgressKey")));
  objc_msgSend(v19, "setWantsProgress:", objc_msgSend(v20, "boolValue"));
  objc_release(v20);
  v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionJobPriorityKey")));
  v22 = objc_msgSend(v21, "integerValue");
  objc_release(v21);
  v66 = v15;
  if ( !v22 )
  {
    v23 = objc_msgSend(v14, "mutableCopy");
    objc_msgSend(
      v23,
      "setObject:forKeyedSubscript:",
      &off_100043E88,
      CFSTR("PAMediaConversionServiceOptionJobPriorityKey"));
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
    {
      v24 = objc_retain(CFSTR("background"));
      *(_DWORD *)buf = 138543618;
      v78 = v73;
      v79 = 2112;
      v80 = CFSTR("background");
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "Request %{public}@ does not have a priority, the client should provide one. Defaulting to %@.",
        buf,
        0x16u);
      objc_release(CFSTR("background"));
    }
    objc_release(v14);
    v14 = v23;
  }
  v25 = -[MediaConversionQueue nextRequestNumber](self->_requestQueue, "nextRequestNumber");
  v26 = objc_msgSend(v14, "mutableCopy");
  objc_msgSend(v26, "setObject:forKeyedSubscript:", v13, CFSTR("PAMediaConversionServiceSourceBookmarkCollectionKey"));
  v67 = v26;
  v61 = v25;
  v72 = -[MediaConversionRequestTracker initWithRequestOptions:requestNumber:](
          objc_alloc(&OBJC_CLASS___MediaConversionRequestTracker),
          "initWithRequestOptions:requestNumber:",
          v26,
          v25);
  objc_msgSend(v19, "setRequestTracker:");
  v27 = objc_retainAutoreleasedReturnValue(
          -[MediaConversionQueue queueEntryWithConversionOptions:](
            self->_requestQueue,
            "queueEntryWithConversionOptions:",
            v14));
  objc_msgSend(
    v27,
    "setTaskTypeSupportsDeduplication:",
    -[objc_class supportsDeduplication](a3, "supportsDeduplication"));
  v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "identifier"));
  v76 = 0LL;
  v29 = objc_retainAutoreleasedReturnValue(
          +[PAMediaConversionServiceSharedUtilitiesServiceSide temporaryFilesDirectoryURLForConversionTaskIdentifier:error:](
            &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
            "temporaryFilesDirectoryURLForConversionTaskIdentifier:error:",
            v28,
            &v76));
  v30 = (__CFString *)objc_retain(v76);
  objc_release(v28);
  if ( v29 )
  {
    v62 = a3;
    objc_msgSend(v27, "setTemporaryFilesParentDirectoryURL:", v29);
    v31 = v29;
    v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionWantsResultAsDataKey")));
    v33 = (unsigned int)objc_msgSend(v32, "boolValue");
    objc_release(v32);
    v64 = v31;
    v65 = v13;
    if ( v33 )
    {
      v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "URLByAppendingPathComponent:", v73));
      v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v34, "URLByAppendingPathExtension:", CFSTR("mov")));
      objc_release(v34);
      v36 = objc_retainAutoreleasedReturnValue(
              +[PAMediaConversionServiceResourceURLCollection collectionWithMainResourceURL:](
                &OBJC_CLASS___PAMediaConversionServiceResourceURLCollection,
                "collectionWithMainResourceURL:",
                v35));
    }
    else
    {
      v75 = v30;
      v35 = objc_retainAutoreleasedReturnValue(
              objc_msgSend(
                (id)objc_opt_class(self),
                "resourceURLCollectionForDestinationBookmarkDictionary:error:",
                v71,
                &v75));
      v39 = (__CFString *)objc_retain(v75);
      objc_release(v30);
      if ( !v35 )
      {
        v41 = objc_retainAutoreleasedReturnValue(-[__CFString domain](v39, "domain"));
        if ( (unsigned int)objc_msgSend(v41, "isEqualToString:", NSCocoaErrorDomain) )
        {
          v42 = -[__CFString code](v39, "code");
          objc_release(v41);
          v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))v66;
          if ( v42 == (void *)4 )
          {
            objc_msgSend(v19, "setRequiresDeduplicationAgainstOriginalWithIdenticalOutput:", 1LL);
            v35 = 0LL;
            v36 = 0LL;
            v30 = v39;
            v13 = v65;
LABEL_22:
            v38 = v72;
            objc_release(v35);
            v43 = objc_alloc(v62);
            v63 = (Class)v36;
            v44 = objc_msgSend(
                    v43,
                    "initWithSourceBookmarkDictionary:outputURLCollection:options:requestTracker:",
                    v13,
                    v36,
                    v14,
                    v72);
            v45 = objc_retainAutoreleasedReturnValue(objc_msgSend(v44, "sourceURLCollection"));
            objc_msgSend(v27, "setSourceURLCollection:", v45);
            objc_release(v45);
            v46 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "identifier"));
            objc_msgSend(v44, "setIdentifier:", v46);
            objc_release(v46);
            objc_msgSend(v27, "setVideoConversionTask:", v44);
            objc_msgSend(v44, "setProgressObserver:", v27);
            objc_msgSend(v44, "didEnqueue");
            requestQueue = self->_requestQueue;
            v74 = 0LL;
            LOBYTE(v46) = -[MediaConversionQueue enqueueEntry:clientRequest:isDuplicateOfOriginalQueueEntry:](
                            requestQueue,
                            "enqueueEntry:clientRequest:isDuplicateOfOriginalQueueEntry:",
                            v27,
                            v19,
                            &v74);
            v48 = objc_retain(v74);
            v49 = v48;
            if ( ((unsigned __int8)v46 & 1) != 0 )
            {
              if ( !v48 )
                v48 = v27;
              v50 = objc_retain(v48);
              if ( !v49 )
                objc_msgSend(v44, "startProgressUpdateTimerAndMarkStartTime");
              v51 = objc_retainAutoreleasedReturnValue(
                      objc_msgSend(
                        v14,
                        "objectForKeyedSubscript:",
                        CFSTR("PAMediaConversionServiceOptionRequestReasonKey")));
              if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
              {
                v52 = v37;
                v53 = objc_retainAutoreleasedReturnValue(objc_msgSend(v50, "identifier"));
                *(_DWORD *)buf = 134219266;
                v78 = (__CFString *)v61;
                v79 = 2114;
                v80 = v73;
                v81 = 2114;
                v82 = v53;
                v83 = 1024;
                v84 = v49 != 0LL;
                v85 = 2114;
                v86 = v51;
                v87 = 2114;
                v88 = v70;
                _os_log_impl(
                  (void *)&_mh_execute_header,
                  (os_log_t)&_os_log_default,
                  OS_LOG_TYPE_INFO,
                  "Received conversion request #%lu %{public}@, attached to conversion task %{public}@, isDuplicate = %d,"
                  " reason '%{public}@', connection %{public}@",
                  buf,
                  0x3Au);
                v54 = v53;
                v37 = v52;
                v38 = v72;
                objc_release(v54);
              }
              objc_release(v51);
              objc_release(v50);
            }
            else
            {
              v55 = (unsigned int)objc_msgSend(v19, "requiresDeduplicationAgainstOriginalWithIdenticalOutput");
              v56 = os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR);
              if ( v55 )
              {
                if ( v56 )
                {
                  *(_WORD *)buf = 0;
                  _os_log_error_impl(
                    (void *)&_mh_execute_header,
                    (os_log_t)&_os_log_default,
                    OS_LOG_TYPE_ERROR,
                    "Unable to enqueue new request, required deduplication failed",
                    buf,
                    2u);
                }
                v91 = NSDebugDescriptionErrorKey;
                v92 = CFSTR("Unable to enqueue new request, required deduplication failed");
                v57 = objc_retainAutoreleasedReturnValue(
                        +[NSDictionary dictionaryWithObjects:forKeys:count:](
                          &OBJC_CLASS___NSDictionary,
                          "dictionaryWithObjects:forKeys:count:",
                          &v92,
                          &v91,
                          1LL));
                v58 = 4LL;
              }
              else
              {
                if ( v56 )
                {
                  *(_WORD *)buf = 0;
                  _os_log_error_impl(
                    (void *)&_mh_execute_header,
                    (os_log_t)&_os_log_default,
                    OS_LOG_TYPE_ERROR,
                    "Unable to enqueue new request, unknown reason",
                    buf,
                    2u);
                }
                v89 = NSDebugDescriptionErrorKey;
                v90 = CFSTR("Unable to enqueue new request, unknown reason");
                v57 = objc_retainAutoreleasedReturnValue(
                        +[NSDictionary dictionaryWithObjects:forKeys:count:](
                          &OBJC_CLASS___NSDictionary,
                          "dictionaryWithObjects:forKeys:count:",
                          &v90,
                          &v89,
                          1LL));
                v58 = 0LL;
              }
              v59 = objc_retainAutoreleasedReturnValue(
                      +[NSError errorWithDomain:code:userInfo:](
                        &OBJC_CLASS___NSError,
                        "errorWithDomain:code:userInfo:",
                        CFSTR("PAMediaConversionServiceErrorDomain"),
                        v58,
                        v57));
              objc_release(v30);
              objc_release(v57);
              ((void (__fastcall **)(_QWORD, __int64, _QWORD, NSError *))v37)[2](v37, 2LL, 0LL, v59);
              v30 = (__CFString *)v59;
            }
            objc_release(v49);
            objc_release(v44);
            objc_release(v63);
LABEL_39:
            v29 = v64;
            v13 = v65;
            goto LABEL_40;
          }
        }
        else
        {
          objc_release(v41);
          v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))v66;
        }
        v38 = v72;
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 138543618;
          v78 = v73;
          v79 = 2112;
          v80 = v39;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_ERROR,
            "Unable to resolve final destination URLs for %{public}@: %@",
            buf,
            0x16u);
        }
        ((void (__fastcall **)(_QWORD, __int64, _QWORD, __CFString *))v37)[2](v37, 2LL, 0LL, v39);
        v30 = v39;
        goto LABEL_39;
      }
      -[MediaConversionRequestTracker setDestinationURLCollection:](v72, "setDestinationURLCollection:", v35);
      if ( (unsigned int)objc_msgSend(v27, "taskTypeSupportsDeduplication") )
      {
        v40 = (PAMediaConversionServiceResourceURLCollection *)objc_retainAutoreleasedReturnValue(
                                                                 +[PAMediaConversionServiceSharedUtilitiesServiceSide temporaryDestinationURLCollectionForFinalDestinationURLCollection:inParentDirectoryURL:](
                                                                   &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
                                                                   "temporaryDestinationURLCollectionForFinalDestinationU"
                                                                   "RLCollection:inParentDirectoryURL:",
                                                                   v35,
                                                                   v31));
      }
      else
      {
        v40 = objc_retain(v35);
        v35 = v40;
      }
      v36 = v40;
      v30 = v39;
      v13 = v65;
    }
    v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))v66;
    goto LABEL_22;
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 138543618;
    v78 = v73;
    v79 = 2112;
    v80 = v30;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Unable to create temporary files directory for request %{public}@: %@",
      buf,
      0x16u);
  }
  v37 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))v66;
  (*((void (__fastcall **)(id, __int64, _QWORD, __CFString *))v66 + 2))(v66, 2LL, 0LL, v30);
  v38 = v72;
LABEL_40:
  objc_release(v29);
  objc_release(v27);
  objc_release(v38);
  objc_release(v67);
  objc_release(v30);
  objc_release(v19);
  objc_release(v70);
  objc_release(v68);
  objc_release(v69);
  objc_release(v73);
  objc_release(v37);
  objc_release(v14);
  objc_release(v71);
  objc_release(v13);
}