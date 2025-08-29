-[MediaConversionQueue initWithDelegate:]
MediaConversionQueue *__cdecl -[MediaConversionQueue initWithDelegate:](MediaConversionQueue *self, SEL a2, id a3)
{
  id v4; // x19
  MediaConversionQueue *v5; // x0
  MediaConversionQueue *v6; // x20
  NSMutableArray *v7; // x0
  NSMutableArray *queuedRequests; // x8
  dispatch_queue_attr_s *v9; // x21
  dispatch_queue_t v10; // x0
  OS_dispatch_queue *requestProcessingQueue; // x8
  dispatch_queue_attr_s *v12; // x21
  dispatch_queue_t v13; // x0
  OS_dispatch_queue *cameraWatcherQueue; // x8
  PFCameraViewfinderSessionWatcher *v15; // x0
  PFCameraViewfinderSessionWatcher *cameraWatcher; // x8
  objc_super v18; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v18.receiver = self;
  v18.super_class = (Class)&OBJC_CLASS___MediaConversionQueue;
  v5 = -[MediaConversionQueue init](&v18, "init");
  v6 = v5;
  if ( v5 )
  {
    objc_storeWeak((id *)&v5->_delegate, v4);
    v7 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    queuedRequests = v6->_queuedRequests;
    v6->_queuedRequests = v7;
    objc_release(queuedRequests);
    v9 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v10 = dispatch_queue_create("com.apple.photos.media-conversion.requestProcessing", v9);
    requestProcessingQueue = v6->_requestProcessingQueue;
    v6->_requestProcessingQueue = (OS_dispatch_queue *)v10;
    objc_release(requestProcessingQueue);
    objc_release(v9);
    v12 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v13 = dispatch_queue_create("com.apple.photos.media-conversion.cameraWatcher", v12);
    cameraWatcherQueue = v6->_cameraWatcherQueue;
    v6->_cameraWatcherQueue = (OS_dispatch_queue *)v13;
    objc_release(cameraWatcherQueue);
    objc_release(v12);
    v6->_queueStateLock._os_unfair_lock_opaque = 0;
    v15 = (PFCameraViewfinderSessionWatcher *)objc_msgSend(
                                                objc_alloc((Class)&OBJC_CLASS___PFCameraViewfinderSessionWatcher),
                                                "initWithDispatchQueue:delegate:",
                                                v6->_cameraWatcherQueue,
                                                v6);
    cameraWatcher = v6->_cameraWatcher;
    v6->_cameraWatcher = v15;
    objc_release(cameraWatcher);
    -[PFCameraViewfinderSessionWatcher startWatching](v6->_cameraWatcher, "startWatching");
  }
  objc_release(v4);
  return v6;
}