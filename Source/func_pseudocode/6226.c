-[MediaConversionQueue nextRequestNumber]
unsigned __int64 __cdecl -[MediaConversionQueue nextRequestNumber](MediaConversionQueue *self, SEL a2)
{
  os_unfair_lock_s *p_queueStateLock; // x20
  unsigned __int64 v4; // x21

  p_queueStateLock = &self->_queueStateLock;
  os_unfair_lock_lock(&self->_queueStateLock);
  v4 = self->_requestCounter + 1;
  self->_requestCounter = v4;
  os_unfair_lock_unlock(p_queueStateLock);
  return v4;
}