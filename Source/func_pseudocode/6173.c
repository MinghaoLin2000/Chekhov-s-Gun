-[MediaConversionQueueEntry clientRequestsSnapshot]
NSArray *__cdecl -[MediaConversionQueueEntry clientRequestsSnapshot](MediaConversionQueueEntry *self, SEL a2)
{
  os_unfair_lock_s *p_queueEntryStateLock; // x20
  void *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  p_queueEntryStateLock = &self->_queueEntryStateLock;
  os_unfair_lock_lock(&self->_queueEntryStateLock);
  v4 = -[NSMutableArray copy](self->_clientRequests, "copy");
  os_unfair_lock_unlock(p_queueEntryStateLock);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSArray *)objc_autoreleaseReturnValue(v4);
}