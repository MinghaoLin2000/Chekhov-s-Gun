-[ImageConversionService incrementPendingRequestCountWithRequestIdentifier:]
signed __int64 __cdecl -[ImageConversionService incrementPendingRequestCountWithRequestIdentifier:](
        ImageConversionService *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  ImageConversionService *v6; // x20
  signed __int64 pendingRequestCount; // x8
  signed __int64 v8; // x21
  NSAssertionHandler *v10; // x22

  v5 = objc_retain(a3);
  v6 = objc_retain(self);
  objc_sync_enter(v6);
  pendingRequestCount = v6->_pendingRequestCount;
  if ( pendingRequestCount < 0 )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v10,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      v6,
      CFSTR("ImageConversionService.m"),
      264LL,
      CFSTR("Pending request count underflow"));
    objc_release(v10);
    pendingRequestCount = v6->_pendingRequestCount;
  }
  v8 = pendingRequestCount + 1;
  v6->_pendingRequestCount = pendingRequestCount + 1;
  objc_sync_exit(v6);
  objc_release(v6);
  objc_release(v5);
  return v8;
}