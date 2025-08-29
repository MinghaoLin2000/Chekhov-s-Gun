-[MediaConversionQueue queueEntryWithConversionOptions:]
id __cdecl -[MediaConversionQueue queueEntryWithConversionOptions:](MediaConversionQueue *self, SEL a2, id a3)
{
  id v5; // x19
  unsigned __int64 v6; // x22
  MediaConversionQueueEntry *v7; // x20
  NSString *v8; // x21
  MediaConversionQueueEntry *v9; // x20
  NSAssertionHandler *v11; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v11 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v11,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      400LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("conversionOptions"));
    objc_release(v11);
  }
  os_unfair_lock_lock(&self->_queueStateLock);
  v6 = self->_queueEntryCounter + 1;
  self->_queueEntryCounter = v6;
  os_unfair_lock_unlock(&self->_queueStateLock);
  v7 = objc_alloc(&OBJC_CLASS___MediaConversionQueueEntry);
  v8 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("QE-%lu"), v6));
  v9 = -[MediaConversionQueueEntry initWithIdentifier:initialConversionOptions:](
         v7,
         "initWithIdentifier:initialConversionOptions:",
         v8,
         v5);
  objc_release(v8);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}