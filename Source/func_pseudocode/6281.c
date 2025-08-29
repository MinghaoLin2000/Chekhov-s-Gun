-[PAMediaConversionServiceImageConversionJob sourceImageSize]
CGSize __cdecl -[PAMediaConversionServiceImageConversionJob sourceImageSize](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  NSDictionary *v3; // x19
  double v4; // d0
  double v5; // d8
  double v6; // d1
  double v7; // d9
  double v8; // d0
  double Height; // d1
  CGImage *v10; // x19
  double Width; // d8
  CGSize result; // 0:d0.8,8:d1.8

  if ( -[PAMediaConversionServiceImageConversionJob canAccessSourceImageProperties](
         self,
         "canAccessSourceImageProperties") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob sourceImageProperties](self, "sourceImageProperties"));
    +[PFMediaUtilities maximumImageSizeFromProperties:](
      &OBJC_CLASS___PFMediaUtilities,
      "maximumImageSizeFromProperties:",
      v3);
    v5 = v4;
    v7 = v6;
    objc_release(v3);
    v8 = v5;
    Height = v7;
  }
  else
  {
    v10 = -[PAMediaConversionServiceImageConversionJob sourceImageRef](self, "sourceImageRef");
    Width = (double)CGImageGetWidth(v10);
    Height = (double)CGImageGetHeight(v10);
    v8 = Width;
  }
  result.height = Height;
  result.width = v8;
  return result;
}