-[MediaConversionQueueEntry clientRequestIsDuplicate:identicalDestination:]
bool __cdecl -[MediaConversionQueueEntry clientRequestIsDuplicate:identicalDestination:](
        MediaConversionQueueEntry *self,
        SEL a2,
        id a3,
        bool *a4)
{
  id v6; // x19
  os_unfair_lock_s *p_queueEntryStateLock; // x20
  void *v8; // x0
  void *v9; // x21
  void *v10; // x23
  void *v11; // x24
  unsigned __int8 v12; // w22

  v6 = objc_retain(a3);
  p_queueEntryStateLock = &self->_queueEntryStateLock;
  os_unfair_lock_lock(&self->_queueEntryStateLock);
  v8 = objc_retainAutoreleasedReturnValue(-[NSMutableArray firstObject](self->_clientRequests, "firstObject"));
  v9 = v8;
  if ( v8 )
  {
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "requestTracker"));
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "requestTracker"));
    v12 = (unsigned __int8)objc_msgSend(v10, "isDuplicateOfRequestWithRequestTracker:identicalDestinationURL:", v11, a4);
    objc_release(v11);
    objc_release(v10);
  }
  else
  {
    v12 = 0;
  }
  os_unfair_lock_unlock(p_queueEntryStateLock);
  objc_release(v9);
  objc_release(v6);
  return v12;
}