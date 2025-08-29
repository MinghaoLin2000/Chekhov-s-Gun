-[MediaConversionQueue currentlyProcessingRequestQueueEntry]
MediaConversionQueueEntry *__cdecl -[MediaConversionQueue currentlyProcessingRequestQueueEntry](
        MediaConversionQueue *self,
        SEL a2)
{
  return (MediaConversionQueueEntry *)objc_getProperty(self, a2, 56LL, 1);
}