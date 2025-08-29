-[VideoConversionHangDetector didDetectHang]
bool __cdecl -[VideoConversionHangDetector didDetectHang](VideoConversionHangDetector *self, SEL a2)
{
  return self->_progressUnchangedTimeInterval > self->_hangDetectionThresholdTimeInterval;
}