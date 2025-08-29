-[MediaConversionQueue sendCancellationReplyForClientRequest:]
void __cdecl -[MediaConversionQueue sendCancellationReplyForClientRequest:](MediaConversionQueue *self, SEL a2, id a3)
{
  os_unfair_lock_s *p_queueStateLock; // x22
  id v6; // x19
  void *v7; // x22
  void *v8; // x23
  NSString *v9; // x21
  NSDictionary *v10; // x24
  NSError *v11; // x20
  void (__fastcall **v12)(void *, __int64, _QWORD, NSError *); // x21
  NSAssertionHandler *v13; // x22
  NSErrorUserInfoKey v14; // [xsp+18h] [xbp-48h] BYREF
  NSString *v15; // [xsp+20h] [xbp-40h] BYREF

  p_queueStateLock = &self->_queueStateLock;
  v6 = objc_retain(a3);
  os_unfair_lock_assert_not_owner(p_queueStateLock);
  if ( !v6 )
  {
    v13 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v13,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      906LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("cancelledRequest"));
    objc_release(v13);
  }
  v14 = NSDebugDescriptionErrorKey;
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "identifier"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "cancellationReasonDebugDescription"));
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("Request %@ cancelled with reason: %@"),
           v7,
           v8));
  v15 = v9;
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            &v15,
            &v14,
            1LL));
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSError errorWithDomain:code:userInfo:](
            &OBJC_CLASS___NSError,
            "errorWithDomain:code:userInfo:",
            CFSTR("PAMediaConversionServiceErrorDomain"),
            5LL,
            v10));
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "videoClientReplyHandler"));
  objc_release(v6);
  v12[2](v12, 4LL, 0LL, v11);
  objc_release(v12);
  objc_release(v11);
}