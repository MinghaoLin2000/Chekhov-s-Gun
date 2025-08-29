-[MediaConversionQueueEntry description]
id __cdecl -[MediaConversionQueueEntry description](MediaConversionQueueEntry *self, SEL a2)
{
  os_unfair_lock_s *p_queueEntryStateLock; // x20
  NSString *identifier; // x24
  void *v5; // x22
  void *v6; // x23
  NSString *v7; // x19
  __int64 vars8; // [xsp+58h] [xbp+8h]

  p_queueEntryStateLock = &self->_queueEntryStateLock;
  os_unfair_lock_lock(&self->_queueEntryStateLock);
  identifier = self->_identifier;
  v5 = objc_retainAutoreleasedReturnValue(-[NSMutableArray valueForKey:](self->_clientRequests, "valueForKey:", CFSTR("description")));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "componentsJoinedByString:", CFSTR(" ")));
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("<MediaConversionQueueEntry %@ (%p) for requests [%@]>"),
           identifier,
           self,
           v6));
  objc_release(v6);
  objc_release(v5);
  os_unfair_lock_unlock(p_queueEntryStateLock);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}