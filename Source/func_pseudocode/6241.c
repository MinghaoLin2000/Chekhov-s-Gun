-[PAMediaConversionServiceImageConversionJob setOutputImageSize:]
void __cdecl -[PAMediaConversionServiceImageConversionJob setOutputImageSize:](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2,
        CGSize a3)
{
  CGSize v3; // [xsp+0h] [xbp-10h] BYREF

  v3 = a3;
  objc_copyStruct(&self->_outputImageSize, &v3, 16LL, 1, 0);
}