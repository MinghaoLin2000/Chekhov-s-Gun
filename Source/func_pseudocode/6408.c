-[VideoTranscodingTask startProgressUpdateTimerAndMarkStartTime]
void __cdecl -[VideoTranscodingTask startProgressUpdateTimerAndMarkStartTime](VideoTranscodingTask *self, SEL a2)
{
  VideoTranscodingTask *v2; // x19
  dispatch_queue_global_s *v3; // x20
  dispatch_source_t v4; // x21
  dispatch_source_s *v5; // x20
  NSMutableDictionary *v6; // x21
  _UNKNOWN **v7; // x0
  void *v8; // x22
  _UNKNOWN **v9; // x20
  double v10; // d0
  double v11; // d8
  dispatch_source_s *v12; // x21
  NSMutableDictionary *v13; // x21
  void *v14; // x23
  unsigned int v15; // w22
  VideoConversionHangDetector *v16; // x0
  double v17; // d0
  VideoConversionHangDetector *v18; // x21
  dispatch_object_s *v19; // x21
  NSDate *v20; // x21
  _QWORD handler[5]; // [xsp+8h] [xbp-68h] BYREF

  v2 = objc_retain(self);
  objc_sync_enter(v2);
  if ( !-[VideoConversionTask timerStatus](v2, "timerStatus") )
  {
    -[VideoConversionTask setTimerStatus:](v2, "setTimerStatus:", 1LL);
    v3 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
    v4 = dispatch_source_create((dispatch_source_type_t)&_dispatch_source_type_timer, 0LL, 0LL, v3);
    -[VideoConversionTask setProgressUpdateTimerSource:](v2, "setProgressUpdateTimerSource:", v4);
    objc_release(v4);
    objc_release(v3);
    v5 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask progressUpdateTimerSource](v2, "progressUpdateTimerSource"));
    handler[0] = _NSConcreteStackBlock;
    handler[1] = 3254779904LL;
    handler[2] = sub_10001A0F0;
    handler[3] = &unk_100041570;
    handler[4] = v2;
    dispatch_source_set_event_handler(v5, handler);
    objc_release(v5);
    v6 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](v2, "options"));
    v7 = objc_retainAutoreleasedReturnValue(
           -[NSMutableDictionary objectForKeyedSubscript:](
             v6,
             "objectForKeyedSubscript:",
             CFSTR("PAMediaConversionServiceOptionProgressUpdateTimeIntervalKey")));
    v8 = v7;
    if ( !v7 )
      v7 = &off_100043E70;
    v9 = objc_retain(v7);
    objc_release(v8);
    objc_release(v6);
    objc_msgSend(v9, "doubleValue");
    v11 = v10;
    v12 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask progressUpdateTimerSource](v2, "progressUpdateTimerSource"));
    dispatch_source_set_timer(v12, 0LL, (unsigned __int64)(v11 * 1000000000.0), 0x5F5E100uLL);
    objc_release(v12);
    v13 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](v2, "options"));
    v14 = objc_retainAutoreleasedReturnValue(
            -[NSMutableDictionary objectForKeyedSubscript:](
              v13,
              "objectForKeyedSubscript:",
              CFSTR("PAMediaConversionServiceOptionUnitTestSupportServiceShouldSimulateConversionHangKey")));
    v15 = (unsigned int)objc_msgSend(v14, "boolValue");
    objc_release(v14);
    objc_release(v13);
    v16 = objc_alloc(&OBJC_CLASS___VideoConversionHangDetector);
    v17 = 3600.0;
    if ( v15 )
      v17 = 5.0;
    v18 = -[VideoConversionHangDetector initWithThresholdTimeInterval:](v16, "initWithThresholdTimeInterval:", v17);
    -[VideoTranscodingTask setHangDetector:](v2, "setHangDetector:", v18);
    objc_release(v18);
    -[VideoTranscodingTask determineAndNotifyProgress](v2, "determineAndNotifyProgress");
    v19 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask progressUpdateTimerSource](v2, "progressUpdateTimerSource"));
    dispatch_resume(v19);
    objc_release(v19);
    v20 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
    -[VideoConversionTask setConversionStartTime:](v2, "setConversionStartTime:", v20);
    objc_release(v20);
    objc_release(v9);
  }
  objc_sync_exit(v2);
  objc_release(v2);
}