-[MediaConversionQueue optimizeQueueAndDequeueNextRequestQueueEntry]
id __cdecl -[MediaConversionQueue optimizeQueueAndDequeueNextRequestQueueEntry](MediaConversionQueue *self, SEL a2)
{
  void *v4; // x20
  id v5; // x21
  NSMutableArray *v6; // x0
  NSMutableArray *queuedRequests; // x8
  id v8; // x23
  id v9; // x24
  void *v10; // x23
  NSAssertionHandler *v12; // x24
  int v13; // [xsp+0h] [xbp-50h] BYREF
  id v14; // [xsp+4h] [xbp-4Ch]
  __int16 v15; // [xsp+Ch] [xbp-44h]
  id v16; // [xsp+Eh] [xbp-42h]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  os_unfair_lock_assert_owner(&self->_queueStateLock);
  if ( -[NSMutableArray count](self->_queuedRequests, "count") )
  {
    v4 = -[NSMutableArray copy](self->_queuedRequests, "copy");
    v5 = objc_retainAutoreleasedReturnValue(
           -[MediaConversionQueue entriesSortedByExecutionOrderForPendingEntries:](
             self,
             "entriesSortedByExecutionOrderForPendingEntries:",
             v4));
    v6 = (NSMutableArray *)objc_msgSend(v5, "mutableCopy");
    queuedRequests = self->_queuedRequests;
    self->_queuedRequests = v6;
    objc_release(queuedRequests);
    if ( ((unsigned int)objc_msgSend(v4, "isEqualToArray:", v5) & 1) == 0
      && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v8 = objc_retainAutoreleasedReturnValue(-[MediaConversionQueue orderingSummaryForRequestList:](self, "orderingSummaryForRequestList:", v4));
      v9 = objc_retainAutoreleasedReturnValue(-[MediaConversionQueue orderingSummaryForRequestList:](self, "orderingSummaryForRequestList:", v5));
      v13 = 138543618;
      v14 = v8;
      v15 = 2114;
      v16 = v9;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "Queue reordered from %{public}@ to %{public}@",
        (uint8_t *)&v13,
        0x16u);
      objc_release(v9);
      objc_release(v8);
    }
    v10 = objc_retainAutoreleasedReturnValue(-[NSMutableArray firstObject](self->_queuedRequests, "firstObject"));
    if ( !v10 )
    {
      v12 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v12,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        self,
        CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
        576LL,
        CFSTR("Unexpected empty queue"));
      objc_release(v12);
    }
    -[NSMutableArray removeObjectAtIndex:](self->_queuedRequests, "removeObjectAtIndex:", 0LL);
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v13 = 138543362;
      v14 = v10;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "Processing queue, dequeued %{public}@",
        (uint8_t *)&v13,
        0xCu);
    }
    if ( -[MediaConversionQueue cancelForCameraIfPossibleAndRequiredForNextQueueEntry:](
           self,
           "cancelForCameraIfPossibleAndRequiredForNextQueueEntry:",
           v10) )
    {
      objc_release(v10);
      -[MediaConversionQueue scheduleQueueProcessing](self, "scheduleQueueProcessing");
      v10 = 0LL;
    }
    else
    {
      objc_msgSend(v10, "didDequeueAndStartProcessingQueueEntry");
    }
    objc_release(v5);
    objc_release(v4);
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      LOWORD(v13) = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "Processing queue is empty",
        (uint8_t *)&v13,
        2u);
    }
    v10 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}