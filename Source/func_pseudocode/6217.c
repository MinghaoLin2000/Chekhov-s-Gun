-[MediaConversionQueue cancelForCameraIfPossibleAndRequiredForNextQueueEntry:]
bool __cdecl -[MediaConversionQueue cancelForCameraIfPossibleAndRequiredForNextQueueEntry:](
        MediaConversionQueue *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x21
  void *v6; // x22
  unsigned __int8 v7; // w23
  unsigned int v8; // w19
  id WeakRetained; // x21
  bool v10; // w20
  void *v11; // x0
  void *v12; // x23
  __int64 v13; // x22
  void *i; // x24
  void *v15; // x27
  void *v16; // x26
  void *v17; // x27
  NSString *v18; // x21
  NSDictionary *v19; // x20
  NSError *v20; // x28
  void *v21; // x20
  void *v23; // [xsp+10h] [xbp-160h]
  MediaConversionQueue *v24; // [xsp+18h] [xbp-158h]
  id obj; // [xsp+20h] [xbp-150h]
  id v26; // [xsp+28h] [xbp-148h]
  __int128 v27; // [xsp+30h] [xbp-140h] BYREF
  __int128 v28; // [xsp+40h] [xbp-130h]
  __int128 v29; // [xsp+50h] [xbp-120h]
  __int128 v30; // [xsp+60h] [xbp-110h]
  NSErrorUserInfoKey v31; // [xsp+70h] [xbp-100h] BYREF
  NSString *v32; // [xsp+78h] [xbp-F8h] BYREF
  uint8_t v33[128]; // [xsp+80h] [xbp-F0h] BYREF
  uint8_t buf[4]; // [xsp+100h] [xbp-70h] BYREF
  id v35; // [xsp+104h] [xbp-6Ch]

  v4 = objc_retain(a3);
  os_unfair_lock_assert_owner(&self->_queueStateLock);
  v26 = v4;
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "initialRequestConversionOptions"));
  v6 = objc_retainAutoreleasedReturnValue(
         objc_msgSend(
           v5,
           "objectForKeyedSubscript:",
           CFSTR("PAMediaConversionServiceOptionUnitTestSupportServiceShouldSimulateCameraActiveKey")));
  v7 = (unsigned __int8)objc_msgSend(v6, "boolValue");
  objc_release(v6);
  objc_release(v5);
  if ( (v7 & 1) != 0 )
    v8 = 0;
  else
    v8 = (unsigned int)-[PFCameraViewfinderSessionWatcher isCameraRunning](self->_cameraWatcher, "isCameraRunning") ^ 1;
  WeakRetained = objc_loadWeakRetained((id *)&self->_delegate);
  if ( (objc_opt_respondsToSelector(WeakRetained, "conversionQueue:didCancelQueuedEntry:clientRequests:") & 1) != 0
    && (((unsigned int)objc_msgSend(v26, "allRequestsAreOptional") ^ 1 | v8) & 1) == 0 )
  {
    v23 = WeakRetained;
    v24 = self;
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 138543362;
      v35 = v26;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "Cancelling next queue entry %{public}@ because it is optional and camera viewfinder is running",
        buf,
        0xCu);
    }
    v27 = 0u;
    v28 = 0u;
    v29 = 0u;
    v30 = 0u;
    obj = objc_retainAutoreleasedReturnValue(objc_msgSend(v26, "clientRequestsSnapshot"));
    v11 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v27, v33, 16LL);
    if ( v11 )
    {
      v12 = v11;
      v13 = *(_QWORD *)v28;
      do
      {
        for ( i = 0LL; i != v12; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v28 != v13 )
            objc_enumerationMutation(obj);
          v15 = *(void **)(*((_QWORD *)&v27 + 1) + 8LL * (_QWORD)i);
          v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "requestTracker"));
          v31 = NSDebugDescriptionErrorKey;
          v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "identifier"));
          v18 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithFormat:](
                    &OBJC_CLASS___NSString,
                    "stringWithFormat:",
                    CFSTR("Queued request %@ cancelled for camera"),
                    v17));
          v32 = v18;
          v19 = objc_retainAutoreleasedReturnValue(
                  +[NSDictionary dictionaryWithObjects:forKeys:count:](
                    &OBJC_CLASS___NSDictionary,
                    "dictionaryWithObjects:forKeys:count:",
                    &v32,
                    &v31,
                    1LL));
          v20 = objc_retainAutoreleasedReturnValue(
                  +[NSError errorWithDomain:code:userInfo:](
                    &OBJC_CLASS___NSError,
                    "errorWithDomain:code:userInfo:",
                    CFSTR("PAMediaConversionServiceErrorDomain"),
                    5LL,
                    v19));
          objc_release(v19);
          objc_release(v18);
          objc_release(v17);
          objc_msgSend(v16, "setError:", v20);
          v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v26, "initialRequestIdentifier"));
          objc_msgSend(v16, "markAsCompletedWithInitialRequestIdentifier:", v21);
          objc_release(v21);
          objc_release(v20);
          objc_release(v16);
        }
        v12 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v27, v33, 16LL);
      }
      while ( v12 );
    }
    WeakRetained = v23;
    objc_msgSend(v23, "conversionQueue:didCancelQueuedEntry:clientRequests:", v24, v26, obj);
    objc_release(obj);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  objc_release(WeakRetained);
  objc_release(v26);
  return v10;
}