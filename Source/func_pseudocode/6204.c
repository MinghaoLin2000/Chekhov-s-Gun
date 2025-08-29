-[MediaConversionQueue queueStateLock]
os_unfair_lock_s __cdecl -[MediaConversionQueue queueStateLock](MediaConversionQueue *self, SEL a2)
{
  return self->_queueStateLock;
}