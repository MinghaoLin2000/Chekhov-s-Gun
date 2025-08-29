-[MediaConversionQueue cancelRequestWithIdentifier:]
void __cdecl -[MediaConversionQueue cancelRequestWithIdentifier:](MediaConversionQueue *self, SEL a2, id a3)
{
  id v5; // x19
  MediaConversionQueueDelegate *v6; // x20
  unsigned __int8 v7; // w25
  id v8; // x23
  id v9; // x24
  NSAssertionHandler *v10; // x22
  id v11; // [xsp+8h] [xbp-78h] BYREF
  id v12; // [xsp+10h] [xbp-70h] BYREF
  _BYTE v13[25]; // [xsp+1Fh] [xbp-61h] BYREF

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v10,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      792LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("requestIdentifier"));
    objc_release(v10);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[MediaConversionQueue delegate](self, "delegate"));
  if ( v6 )
  {
    v13[0] = 0;
    os_unfair_lock_lock(&self->_queueStateLock);
    v11 = 0LL;
    v12 = 0LL;
    v7 = -[MediaConversionQueue findAndRemoveCancelledRequest:queueEntryWithoutRemainingClients:forRequestIdentifier:shouldCancelCurrentQueueEntry:](
           self,
           "findAndRemoveCancelledRequest:queueEntryWithoutRemainingClients:forRequestIdentifier:shouldCancelCurrentQueueEntry:",
           &v12,
           &v11,
           v5,
           v13);
    v8 = objc_retain(v12);
    v9 = objc_retain(v11);
    os_unfair_lock_unlock(&self->_queueStateLock);
    if ( (v7 & 1) != 0 )
    {
      if ( v8 )
        -[MediaConversionQueue sendCancellationReplyForClientRequest:](
          self,
          "sendCancellationReplyForClientRequest:",
          v8);
      if ( v13[0] )
      {
        -[MediaConversionQueue assertDelegate:respondsToSelector:](
          self,
          "assertDelegate:respondsToSelector:",
          v6,
          "conversionQueue:cancelCurrentlyProcessingEntry:");
        -[MediaConversionQueueDelegate conversionQueue:cancelCurrentlyProcessingEntry:](
          v6,
          "conversionQueue:cancelCurrentlyProcessingEntry:",
          self,
          v9);
      }
    }
    objc_release(v9);
    objc_release(v8);
  }
  objc_release(v6);
  objc_release(v5);
}