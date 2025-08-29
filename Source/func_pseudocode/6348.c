-[VideoConversionHangDetector updateCurrentProgress:]
void __cdecl -[VideoConversionHangDetector updateCurrentProgress:](
        VideoConversionHangDetector *self,
        SEL a2,
        double a3)
{
  NSDate *v5; // x0
  NSDate *v6; // x20
  NSDate *lastProgressTimestamp; // x2
  double v8; // d0

  v5 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
  v6 = v5;
  lastProgressTimestamp = self->_lastProgressTimestamp;
  if ( lastProgressTimestamp && self->_lastProgress >= a3 )
  {
    -[NSDate timeIntervalSinceDate:](v5, "timeIntervalSinceDate:");
    self->_progressUnchangedTimeInterval = v8 + self->_progressUnchangedTimeInterval;
    lastProgressTimestamp = self->_lastProgressTimestamp;
  }
  else
  {
    self->_progressUnchangedTimeInterval = 0.0;
  }
  self->_lastProgressTimestamp = v6;
  objc_release(lastProgressTimestamp);
  self->_lastProgress = a3;
}