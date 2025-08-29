-[PAMediaConversionServiceImageConversionJob outputImageSize]
CGSize __cdecl -[PAMediaConversionServiceImageConversionJob outputImageSize](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  double v2; // d0
  double v3; // d1
  _QWORD v4[2]; // [xsp+0h] [xbp-10h] BYREF
  CGSize result; // 0:d0.8,8:d1.8

  objc_copyStruct(v4, &self->_outputImageSize, 16LL, 1, 0);
  v2 = *(double *)v4;
  v3 = *(double *)&v4[1];
  result.height = v3;
  result.width = v2;
  return result;
}