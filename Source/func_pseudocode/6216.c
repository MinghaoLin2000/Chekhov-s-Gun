-[MediaConversionQueue entriesSortedByExecutionOrderForPendingEntries:]
id __cdecl -[MediaConversionQueue entriesSortedByExecutionOrderForPendingEntries:](
        MediaConversionQueue *self,
        SEL a2,
        id a3)
{
  os_unfair_lock_s *p_queueStateLock; // x19
  id v4; // x20
  void *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  p_queueStateLock = &self->_queueStateLock;
  v4 = objc_retain(a3);
  os_unfair_lock_assert_owner(p_queueStateLock);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "sortedArrayUsingComparator:", &stru_100041230));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}