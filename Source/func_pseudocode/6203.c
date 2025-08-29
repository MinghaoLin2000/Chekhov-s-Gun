-[MediaConversionQueue setQueueStateLock:]
void __cdecl -[MediaConversionQueue setQueueStateLock:](MediaConversionQueue *self, SEL a2, os_unfair_lock_s a3)
{
  self->_queueStateLock = a3;
}