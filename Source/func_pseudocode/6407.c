-[VideoTranscodingTask cancelProgressUpdateTimerAndMarkEndTime]
void __cdecl -[VideoTranscodingTask cancelProgressUpdateTimerAndMarkEndTime](VideoTranscodingTask *self, SEL a2)
{
  VideoTranscodingTask *v2; // x19
  NSDate *v3; // x20
  OS_dispatch_source *v4; // x20
  dispatch_source_s *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retain(self);
  objc_sync_enter(v2);
  if ( (void *)-[VideoConversionTask timerStatus](v2, "timerStatus") != (void *)2 )
  {
    -[VideoConversionTask setTimerStatus:](v2, "setTimerStatus:", 2LL);
    v3 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
    -[VideoConversionTask setConversionEndTime:](v2, "setConversionEndTime:", v3);
    objc_release(v3);
    v4 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask progressUpdateTimerSource](v2, "progressUpdateTimerSource"));
    objc_release(v4);
    if ( v4 )
    {
      v5 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask progressUpdateTimerSource](v2, "progressUpdateTimerSource"));
      dispatch_source_cancel(v5);
      objc_release(v5);
      -[VideoConversionTask setProgressUpdateTimerSource:](v2, "setProgressUpdateTimerSource:", 0LL);
    }
  }
  objc_sync_exit(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}