-[MediaConversionQueue markCompletionAndRetrieveClientRequestsForQueueEntry:resultURLCollection:didConvertSuccessfully:conversionOutputInformation:conversionOutputData:conversionOutputFileType:conversionError:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[MediaConversionQueue markCompletionAndRetrieveClientRequestsForQueueEntry:resultURLCollection:didConvertSuccessfully:conversionOutputInformation:conversionOutputData:conversionOutputFileType:conversionError:](
        MediaConversionQueue *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id a6,
        id a7,
        id a8,
        id a9)
{
  _BOOL8 v12; // x22
  MediaConversionQueueEntry *v16; // x19
  id v17; // x20
  id v18; // x21
  id v19; // x23
  id v20; // x25
  id v21; // x26
  MediaConversionQueueEntry *currentlyProcessingRequestQueueEntry; // x0
  NSArray *v23; // x22
  NSAssertionHandler *v25; // x28
  NSAssertionHandler *v26; // [xsp+18h] [xbp-58h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v12 = a5;
  v16 = (MediaConversionQueueEntry *)objc_retain(a3);
  v17 = objc_retain(a4);
  v18 = objc_retain(a6);
  v19 = objc_retain(a7);
  v20 = objc_retain(a8);
  v21 = objc_retain(a9);
  if ( !v16 )
  {
    v25 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v25,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      639LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("completedQueueEntry"));
    objc_release(v25);
  }
  dispatch_assert_queue_V2((dispatch_queue_t)self->_requestProcessingQueue);
  os_unfair_lock_lock(&self->_queueStateLock);
  currentlyProcessingRequestQueueEntry = v16;
  if ( self->_currentlyProcessingRequestQueueEntry != v16 )
  {
    v26 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v26,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      643LL,
      CFSTR("Completed / current request mismatch: %@ / %@"),
      v16,
      self->_currentlyProcessingRequestQueueEntry);
    objc_release(v26);
    currentlyProcessingRequestQueueEntry = self->_currentlyProcessingRequestQueueEntry;
  }
  self->_currentlyProcessingRequestQueueEntry = 0LL;
  objc_release(currentlyProcessingRequestQueueEntry);
  os_unfair_lock_unlock(&self->_queueStateLock);
  -[MediaConversionQueue processCompletedQueueEntry:resultURLCollection:didConvertSuccessfully:conversionOutputInformation:conversionOutputData:conversionOutputFileType:conversionError:](
    self,
    "processCompletedQueueEntry:resultURLCollection:didConvertSuccessfully:conversionOutputInformation:conversionOutputDa"
    "ta:conversionOutputFileType:conversionError:",
    v16,
    v17,
    v12,
    v18,
    v19,
    v20,
    v21);
  v23 = objc_retainAutoreleasedReturnValue(-[MediaConversionQueueEntry clientRequestsSnapshot](v16, "clientRequestsSnapshot"));
  objc_release(v21);
  objc_release(v20);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v23);
}