-[VideoTranscodingTask didDetectHang]
bool __cdecl -[VideoTranscodingTask didDetectHang](VideoTranscodingTask *self, SEL a2)
{
  VideoConversionHangDetector *v2; // x19
  unsigned __int8 v3; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[VideoTranscodingTask hangDetector](self, "hangDetector"));
  v3 = -[VideoConversionHangDetector didDetectHang](v2, "didDetectHang");
  objc_release(v2);
  return v3;
}