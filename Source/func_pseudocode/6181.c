-[MediaConversionQueueEntry withLockEnumerateClientRequests:]
void __cdecl -[MediaConversionQueueEntry withLockEnumerateClientRequests:](
        MediaConversionQueueEntry *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  os_unfair_lock_s *p_queueEntryStateLock; // x21
  NSMutableArray *clientRequests; // x19
  id v7; // x20
  _QWORD v8[4]; // [xsp+8h] [xbp-48h] BYREF
  id v9; // [xsp+28h] [xbp-28h]

  v4 = objc_retain(a3);
  p_queueEntryStateLock = &self->_queueEntryStateLock;
  os_unfair_lock_lock(&self->_queueEntryStateLock);
  clientRequests = self->_clientRequests;
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_10000D61C;
  v8[3] = &unk_100041040;
  v9 = v4;
  v7 = objc_retain(v4);
  -[NSMutableArray enumerateObjectsUsingBlock:](clientRequests, "enumerateObjectsUsingBlock:", v8);
  os_unfair_lock_unlock(p_queueEntryStateLock);
  objc_release(v9);
  objc_release(v7);
}