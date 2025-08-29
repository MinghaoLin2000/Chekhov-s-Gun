-[VideoConversionService conversionQueue:didCancelQueuedEntry:clientRequests:]
void __cdecl -[VideoConversionService conversionQueue:didCancelQueuedEntry:clientRequests:](
        VideoConversionService *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v9; // x21
  id v10; // x22
  void *v11; // x20
  void *v12; // x0
  id v13; // x21
  id v14; // x22
  void *v15; // x0
  void *v16; // x23
  __int64 v17; // x28
  void *v18; // x19
  void *v19; // x24
  void *v20; // x25
  void *v21; // x26
  void (__fastcall **v22)(void *, __int64, _QWORD, void *); // x24
  void *v23; // x27
  unsigned __int64 v24; // x26
  NSAssertionHandler *v25; // x25
  __CFString *v26; // x0
  __CFString *v27; // x26
  id v28; // [xsp+8h] [xbp-158h]
  __int128 v29; // [xsp+10h] [xbp-150h] BYREF
  __int128 v30; // [xsp+20h] [xbp-140h]
  __int128 v31; // [xsp+30h] [xbp-130h]
  __int128 v32; // [xsp+40h] [xbp-120h]
  _QWORD v33[4]; // [xsp+58h] [xbp-108h] BYREF
  id v34; // [xsp+78h] [xbp-E8h]
  _BYTE v35[128]; // [xsp+80h] [xbp-E0h] BYREF

  v28 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "videoConversionTask"));
  v12 = objc_msgSend(v11, "status");
  if ( v12 != (void *)5 )
  {
    v24 = (unsigned __int64)v12;
    v25 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    if ( v24 > 6 )
      v26 = 0LL;
    else
      v26 = off_100041470[v24];
    v27 = objc_retain(v26);
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v25,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("VideoConversionService.m"),
      1684LL,
      CFSTR("Unexpected conversion task status %@ during cancellation of queued task"),
      v27,
      v28);
    objc_release(v27);
    objc_release(v25);
  }
  v33[0] = _NSConcreteStackBlock;
  v33[1] = 3254779904LL;
  v33[2] = sub_100022A2C;
  v33[3] = &unk_100041770;
  v13 = objc_retain(v9);
  v34 = v13;
  objc_msgSend(v11, "setCompletionHandler:", v33);
  objc_msgSend(v11, "cancel");
  v31 = 0u;
  v32 = 0u;
  v29 = 0u;
  v30 = 0u;
  v14 = objc_retain(v10);
  v15 = objc_msgSend(v14, "countByEnumeratingWithState:objects:count:", &v29, v35, 16LL);
  if ( v15 )
  {
    v16 = v15;
    v17 = *(_QWORD *)v30;
    do
    {
      v18 = 0LL;
      do
      {
        if ( *(_QWORD *)v30 != v17 )
          objc_enumerationMutation(v14);
        v19 = *(void **)(*((_QWORD *)&v29 + 1) + 8LL * (_QWORD)v18);
        v20 = objc_autoreleasePoolPush();
        v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "requestTracker"));
        v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "videoClientReplyHandler"));
        v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "error"));
        v22[2](v22, 4LL, 0LL, v23);
        objc_release(v23);
        objc_release(v22);
        objc_release(v21);
        objc_autoreleasePoolPop(v20);
        v18 = (char *)v18 + 1;
      }
      while ( v16 != v18 );
      v16 = objc_msgSend(v14, "countByEnumeratingWithState:objects:count:", &v29, v35, 16LL);
    }
    while ( v16 );
  }
  objc_release(v14);
  objc_release(v34);
  objc_release(v11);
  objc_release(v14);
  objc_release(v13);
  objc_release(v28);
}