-[MediaConversionQueueEntry didDequeueAndStartProcessingQueueEntry]
void __cdecl -[MediaConversionQueueEntry didDequeueAndStartProcessingQueueEntry](
        MediaConversionQueueEntry *self,
        SEL a2)
{
  -[MediaConversionQueueEntry withLockEnumerateClientRequests:](
    self,
    "withLockEnumerateClientRequests:",
    &stru_100041090);
}