-[MediaConversionQueueEntry initWithIdentifier:initialConversionOptions:]
MediaConversionQueueEntry *__cdecl -[MediaConversionQueueEntry initWithIdentifier:initialConversionOptions:](
        MediaConversionQueueEntry *self,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x19
  id v8; // x20
  MediaConversionQueueEntry *v9; // x21
  NSMutableArray *v10; // x0
  NSMutableArray *clientRequests; // x8
  NSString *v12; // x22
  __int64 v13; // x0
  OS_os_transaction *transaction; // x8
  objc_super v16; // [xsp+10h] [xbp-40h] BYREF

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v16.receiver = self;
  v16.super_class = (Class)&OBJC_CLASS___MediaConversionQueueEntry;
  v9 = -[MediaConversionQueueEntry init](&v16, "init");
  if ( v9 )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    clientRequests = v9->_clientRequests;
    v9->_clientRequests = v10;
    objc_release(clientRequests);
    v9->_queueEntryStateLock._os_unfair_lock_opaque = 0;
    objc_storeStrong((id *)&v9->_identifier, a3);
    objc_storeStrong((id *)&v9->_initialRequestConversionOptions, a4);
    v12 = objc_retainAutorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("com.apple.photos.media-conversion.queue-entry-%@"),
                v7)));
    v13 = os_transaction_create(-[NSString UTF8String](v12, "UTF8String"));
    transaction = v9->_transaction;
    v9->_transaction = (OS_os_transaction *)v13;
    objc_release(transaction);
    objc_release(v12);
  }
  objc_release(v8);
  objc_release(v7);
  return v9;
}