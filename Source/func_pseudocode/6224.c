-[MediaConversionQueue enqueueEntry:clientRequest:isDuplicateOfOriginalQueueEntry:]
bool __cdecl -[MediaConversionQueue enqueueEntry:clientRequest:isDuplicateOfOriginalQueueEntry:](
        MediaConversionQueue *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v8; // x20
  id v9; // x21
  void *v10; // x22
  id v11; // x20
  id v12; // x21
  bool v13; // w24
  id v14; // x0
  MediaConversionQueueDelegate *v15; // x25
  MediaConversionQueueEntry *v16; // x26
  __int64 v17; // x8
  MediaConversionQueueEntry *v18; // x25
  MediaConversionQueueDelegate *v19; // x23
  void *v21; // x26
  _QWORD v22[4]; // [xsp+8h] [xbp-148h] BYREF
  id v23; // [xsp+28h] [xbp-128h]
  id v24; // [xsp+30h] [xbp-120h]
  __int64 *v25; // [xsp+38h] [xbp-118h]
  __int64 *v26; // [xsp+40h] [xbp-110h]
  __int64 *v27; // [xsp+48h] [xbp-108h]
  __int64 v28; // [xsp+50h] [xbp-100h] BYREF
  __int64 *v29; // [xsp+58h] [xbp-F8h]
  __int64 v30; // [xsp+60h] [xbp-F0h]
  __int64 (__fastcall *v31)(); // [xsp+68h] [xbp-E8h]
  __int64 (__fastcall *v32)(); // [xsp+70h] [xbp-E0h]
  id v33; // [xsp+78h] [xbp-D8h]
  __int64 v34; // [xsp+80h] [xbp-D0h] BYREF
  __int64 *v35; // [xsp+88h] [xbp-C8h]
  __int64 v36; // [xsp+90h] [xbp-C0h]
  char v37; // [xsp+98h] [xbp-B8h]
  __int64 v38; // [xsp+A0h] [xbp-B0h] BYREF
  __int64 *v39; // [xsp+A8h] [xbp-A8h]
  __int64 v40; // [xsp+B0h] [xbp-A0h]
  char v41; // [xsp+B8h] [xbp-98h]
  uint8_t buf[4]; // [xsp+C0h] [xbp-90h] BYREF
  MediaConversionQueueDelegate *v43; // [xsp+C4h] [xbp-8Ch]
  __int16 v44; // [xsp+CCh] [xbp-84h]
  MediaConversionQueueEntry *v45; // [xsp+CEh] [xbp-82h]
  __int16 v46; // [xsp+D6h] [xbp-7Ah]
  __int64 v47; // [xsp+D8h] [xbp-78h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v38 = 0LL;
  v39 = &v38;
  v40 = 0x2020000000LL;
  v41 = 0;
  v34 = 0LL;
  v35 = &v34;
  v36 = 0x2020000000LL;
  v37 = 0;
  v28 = 0LL;
  v29 = &v28;
  v30 = 0x3032000000LL;
  v31 = sub_10000D020;
  v32 = sub_10000D030;
  v33 = 0LL;
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "requestTracker"));
  os_unfair_lock_lock(&self->_queueStateLock);
  v22[0] = _NSConcreteStackBlock;
  v22[1] = 3254779904LL;
  v22[2] = sub_100010A58;
  v22[3] = &unk_1000411B0;
  v11 = objc_retain(v8);
  v23 = v11;
  v25 = &v38;
  v12 = objc_retain(v9);
  v24 = v12;
  v26 = &v34;
  v27 = &v28;
  -[MediaConversionQueue enumerateCurrentlyProcessingAndQueuedEntries:](
    self,
    "enumerateCurrentlyProcessingAndQueuedEntries:",
    v22);
  v13 = *((_BYTE *)v35 + 24) == 0;
  if ( *((_BYTE *)v35 + 24) )
  {
    v14 = objc_retain(&_os_log_default);
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "identifier"));
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "identifier"));
      v17 = v29[5];
      *(_DWORD *)buf = 138543874;
      v43 = v15;
      v44 = 2114;
      v45 = v16;
      v46 = 2114;
      v47 = v17;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "New queue entry %{public}@ for request %{public}@ is duplicate of existing entry %{public}@ but identical output"
        " is required but not present",
        buf,
        0x20u);
      objc_release(v16);
      objc_release(v15);
    }
    objc_release(&_os_log_default);
LABEL_5:
    v18 = 0LL;
    goto LABEL_6;
  }
  if ( *((_BYTE *)v39 + 24) )
  {
    if ( (MediaConversionQueueEntry *)v29[5] == self->_currentlyProcessingRequestQueueEntry )
      objc_msgSend(v10, "didDequeueAndStartProcessingRequest");
    if ( !a5 )
      goto LABEL_5;
    v18 = 0LL;
    *a5 = objc_retainAutorelease((id)v29[5]);
  }
  else
  {
    v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "identifier"));
    objc_msgSend(v11, "setInitialRequestIdentifier:", v21);
    objc_release(v21);
    objc_msgSend(v11, "addClientRequest:", v12);
    -[NSMutableArray addObject:](self->_queuedRequests, "addObject:", v11);
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 138543362;
      v43 = (MediaConversionQueueDelegate *)v11;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "Enqueued new queue entry %{public}@",
        buf,
        0xCu);
    }
    if ( -[MediaConversionQueue delegateCanCancelCurrentlyProcessingRequestQueueEntry](
           self,
           "delegateCanCancelCurrentlyProcessingRequestQueueEntry")
      && ((unsigned int)objc_msgSend(v11, "allRequestsAreBackground") & 1) == 0 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
      {
        *(_WORD *)buf = 0;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_INFO,
          "Currently processing queue entry is optional, cancelling because non-optional non-background work was enqueued",
          buf,
          2u);
      }
      v18 = objc_retain(self->_currentlyProcessingRequestQueueEntry);
    }
    else
    {
      v18 = 0LL;
    }
    -[MediaConversionQueue scheduleQueueProcessing](self, "scheduleQueueProcessing");
  }
LABEL_6:
  objc_release(v24);
  objc_release(v23);
  os_unfair_lock_unlock(&self->_queueStateLock);
  if ( v18 )
  {
    v19 = objc_retainAutoreleasedReturnValue(-[MediaConversionQueue delegate](self, "delegate"));
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 138412546;
      v43 = v19;
      v44 = 2114;
      v45 = v18;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "Enqueued new request while currently processing queue entry is optional, requesting delegate %@ to cancel %{public}@",
        buf,
        0x16u);
    }
    if ( v19 )
    {
      -[MediaConversionQueue assertDelegate:respondsToSelector:](
        self,
        "assertDelegate:respondsToSelector:",
        v19,
        "conversionQueue:cancelCurrentlyProcessingEntry:");
      -[MediaConversionQueueDelegate conversionQueue:cancelCurrentlyProcessingEntry:](
        v19,
        "conversionQueue:cancelCurrentlyProcessingEntry:",
        self,
        v18);
    }
    objc_release(v19);
  }
  objc_release(v10);
  objc_release(v18);
  _Block_object_dispose(&v28, 8);
  objc_release(v33);
  _Block_object_dispose(&v34, 8);
  _Block_object_dispose(&v38, 8);
  objc_release(v12);
  objc_release(v11);
  return v13;
}