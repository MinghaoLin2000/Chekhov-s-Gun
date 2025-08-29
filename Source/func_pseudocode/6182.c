-[MediaConversionQueueEntry addClientRequest:]
void __cdecl -[MediaConversionQueueEntry addClientRequest:](MediaConversionQueueEntry *self, SEL a2, id a3)
{
  id v5; // x19
  NSAssertionHandler *v6; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v6,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      194LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("clientRequest"));
    objc_release(v6);
  }
  os_unfair_lock_lock(&self->_queueEntryStateLock);
  -[NSMutableArray addObject:](self->_clientRequests, "addObject:", v5);
  objc_msgSend(v5, "setRequestQueueEntry:", self);
  os_unfair_lock_unlock(&self->_queueEntryStateLock);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}