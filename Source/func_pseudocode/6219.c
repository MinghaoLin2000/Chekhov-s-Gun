-[MediaConversionQueue processQueue]
void __cdecl -[MediaConversionQueue processQueue](MediaConversionQueue *self, SEL a2)
{
  void *v4; // x19
  MediaConversionQueueEntry *v5; // x0
  MediaConversionQueueEntry *currentlyProcessingRequestQueueEntry; // x8
  MediaConversionQueueEntry *v7; // x23
  id WeakRetained; // x22
  void *v9; // x23
  NSAssertionHandler *v10; // x23
  NSAssertionHandler *v11; // x23
  NSString *v12; // x24
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = (void *)os_transaction_create("com.apple.photos.mediaconversion.conversion-task-processing");
  dispatch_assert_queue_V2((dispatch_queue_t)self->_requestProcessingQueue);
  os_unfair_lock_lock(&self->_queueStateLock);
  if ( self->_currentlyProcessingRequestQueueEntry )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v10,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      531LL,
      CFSTR("Unexpected current request"));
    objc_release(v10);
  }
  v5 = (MediaConversionQueueEntry *)objc_retainAutoreleasedReturnValue(
                                      -[MediaConversionQueue optimizeQueueAndDequeueNextRequestQueueEntry](
                                        self,
                                        "optimizeQueueAndDequeueNextRequestQueueEntry"));
  currentlyProcessingRequestQueueEntry = self->_currentlyProcessingRequestQueueEntry;
  self->_currentlyProcessingRequestQueueEntry = v5;
  objc_release(currentlyProcessingRequestQueueEntry);
  v7 = self->_currentlyProcessingRequestQueueEntry;
  os_unfair_lock_unlock(&self->_queueStateLock);
  if ( v7 )
  {
    WeakRetained = objc_loadWeakRetained((id *)&self->_delegate);
    if ( WeakRetained )
    {
      v9 = objc_autoreleasePoolPush();
      objc_msgSend(WeakRetained, "conversionQueue:processNextEntry:", self, self->_currentlyProcessingRequestQueueEntry);
      objc_autoreleasePoolPop(v9);
      if ( self->_currentlyProcessingRequestQueueEntry )
      {
        v11 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
        v12 = objc_retainAutoreleasedReturnValue(
                NSStringFromSelector(
                  "markCompletionAndRetrieveClientRequestsForQueueEntry:resultURLCollection:didConvertSuccessfully:conver"
                  "sionOutputInformation:conversionOutputData:conversionOutputFileType:conversionError:"));
        -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
          v11,
          "handleFailureInMethod:object:file:lineNumber:description:",
          a2,
          self,
          CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
          548LL,
          CFSTR("Delegate failed to call %@ during processing"),
          v12);
        objc_release(v12);
        objc_release(v11);
      }
      if ( (objc_opt_respondsToSelector(WeakRetained, "conversionQueueDidFinishProcessingEntry:") & 1) != 0 )
        objc_msgSend(WeakRetained, "conversionQueueDidFinishProcessingEntry:", self);
    }
    objc_release(WeakRetained);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}