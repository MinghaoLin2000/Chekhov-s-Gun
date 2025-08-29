-[VideoTranscodingTask determineAndNotifyProgress]
void __cdecl -[VideoTranscodingTask determineAndNotifyProgress](VideoTranscodingTask *self, SEL a2)
{
  double v3; // d0
  double v4; // d8
  VideoConversionHangDetector *v5; // x20
  VideoConversionTaskProgressUpdateObserver *v6; // x0
  VideoConversionTaskProgressUpdateObserver *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (void *)-[VideoConversionTask status](self, "status") == (void *)6
    && -[VideoTranscodingTask hasProgress](self, "hasProgress") )
  {
    -[VideoTranscodingTask currentFractionCompleted](self, "currentFractionCompleted");
    v4 = v3;
    v5 = objc_retainAutoreleasedReturnValue(-[VideoTranscodingTask hangDetector](self, "hangDetector"));
    -[VideoConversionHangDetector updateCurrentProgress:](v5, "updateCurrentProgress:", v4);
    objc_release(v5);
  }
  else
  {
    v4 = NAN;
  }
  v6 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask progressObserver](self, "progressObserver"));
  v7 = v6;
  if ( v6 )
    -[VideoConversionTaskProgressUpdateObserver videoConversionTask:didUpdateFractionCompleted:](
      v6,
      "videoConversionTask:didUpdateFractionCompleted:",
      self,
      v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}