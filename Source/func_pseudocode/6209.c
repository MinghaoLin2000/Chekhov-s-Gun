-[MediaConversionQueue findAndRemoveCancelledRequest:queueEntryWithoutRemainingClients:forRequestIdentifier:shouldCancelCurrentQueueEntry:]
bool __cdecl -[MediaConversionQueue findAndRemoveCancelledRequest:queueEntryWithoutRemainingClients:forRequestIdentifier:shouldCancelCurrentQueueEntry:](
        MediaConversionQueue *self,
        SEL a2,
        id *a3,
        id *a4,
        id a5,
        bool *a6)
{
  id v10; // x19
  MediaConversionQueueEntry *v11; // x19
  __int64 v12; // x25
  MediaConversionQueueEntry *v13; // x24
  MediaConversionQueueEntry *currentlyProcessingRequestQueueEntry; // x27
  _BOOL4 v15; // w0
  _QWORD v17[4]; // [xsp+8h] [xbp-108h] BYREF
  id v18; // [xsp+28h] [xbp-E8h]
  __int64 *v19; // [xsp+30h] [xbp-E0h]
  __int64 *v20; // [xsp+38h] [xbp-D8h]
  __int64 v21; // [xsp+40h] [xbp-D0h] BYREF
  __int64 *v22; // [xsp+48h] [xbp-C8h]
  __int64 v23; // [xsp+50h] [xbp-C0h]
  __int64 (__fastcall *v24)(); // [xsp+58h] [xbp-B8h]
  __int64 (__fastcall *v25)(); // [xsp+60h] [xbp-B0h]
  id v26; // [xsp+68h] [xbp-A8h]
  __int64 v27; // [xsp+70h] [xbp-A0h] BYREF
  __int64 *v28; // [xsp+78h] [xbp-98h]
  __int64 v29; // [xsp+80h] [xbp-90h]
  __int64 (__fastcall *v30)(); // [xsp+88h] [xbp-88h]
  __int64 (__fastcall *v31)(); // [xsp+90h] [xbp-80h]
  id v32; // [xsp+98h] [xbp-78h]
  uint8_t buf[4]; // [xsp+A0h] [xbp-70h] BYREF
  MediaConversionQueueEntry *v34; // [xsp+A4h] [xbp-6Ch]

  v10 = objc_retain(a5);
  os_unfair_lock_assert_owner(&self->_queueStateLock);
  v27 = 0LL;
  v28 = &v27;
  v29 = 0x3032000000LL;
  v30 = sub_10000D020;
  v31 = sub_10000D030;
  v32 = 0LL;
  v21 = 0LL;
  v22 = &v21;
  v23 = 0x3032000000LL;
  v24 = sub_10000D020;
  v25 = sub_10000D030;
  v26 = 0LL;
  v17[0] = _NSConcreteStackBlock;
  v17[1] = 3254779904LL;
  v17[2] = sub_10000E574;
  v17[3] = &unk_1000412B0;
  v19 = &v27;
  v11 = (MediaConversionQueueEntry *)objc_retain(v10);
  v18 = v11;
  v20 = &v21;
  -[MediaConversionQueue enumerateCurrentlyProcessingAndQueuedEntries:](
    self,
    "enumerateCurrentlyProcessingAndQueuedEntries:",
    v17);
  v12 = v28[5];
  if ( v12 )
  {
    v13 = (MediaConversionQueueEntry *)v22[5];
    if ( v13 )
    {
      currentlyProcessingRequestQueueEntry = self->_currentlyProcessingRequestQueueEntry;
      v15 = os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO);
      if ( v13 == currentlyProcessingRequestQueueEntry )
      {
        if ( v15 )
        {
          *(_DWORD *)buf = 138543362;
          v34 = v13;
          _os_log_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_INFO,
            "Cancelling currently processing request queue entry without remaining clients %{public}@",
            buf,
            0xCu);
        }
        *a6 = 1;
        if ( !a3 )
          goto LABEL_9;
LABEL_8:
        *a3 = objc_retainAutorelease((id)v28[5]);
LABEL_9:
        if ( a4 )
          *a4 = objc_retainAutorelease((id)v22[5]);
        goto LABEL_13;
      }
      if ( v15 )
      {
        *(_DWORD *)buf = 138543362;
        v34 = v13;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_INFO,
          "Dequeueing pending request queue entry without remaining clients %{public}@",
          buf,
          0xCu);
        v13 = (MediaConversionQueueEntry *)v22[5];
      }
      -[NSMutableArray removeObject:](self->_queuedRequests, "removeObject:", v13);
    }
    if ( !a3 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 138543362;
    v34 = v11;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Ignoring cancellation request for unknown request identifier %{public}@",
      buf,
      0xCu);
  }
LABEL_13:
  objc_release(v18);
  _Block_object_dispose(&v21, 8);
  objc_release(v26);
  _Block_object_dispose(&v27, 8);
  objc_release(v32);
  objc_release(v11);
  return v12 != 0;
}