-[MediaConversionQueue delegateCanCancelCurrentlyProcessingRequestQueueEntry]
bool __cdecl -[MediaConversionQueue delegateCanCancelCurrentlyProcessingRequestQueueEntry](
        MediaConversionQueue *self,
        SEL a2)
{
  id WeakRetained; // x19
  bool v4; // w20

  os_unfair_lock_assert_owner(&self->_queueStateLock);
  if ( !self->_currentlyProcessingRequestQueueEntry )
    return 0;
  WeakRetained = objc_loadWeakRetained((id *)&self->_delegate);
  if ( (objc_opt_respondsToSelector(WeakRetained, "conversionQueue:didCancelQueuedEntry:clientRequests:") & 1) != 0 )
    v4 = -[MediaConversionQueueEntry allRequestsAreOptional](
           self->_currentlyProcessingRequestQueueEntry,
           "allRequestsAreOptional");
  else
    v4 = 0;
  objc_release(WeakRetained);
  return v4;
}