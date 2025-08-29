-[PAMediaConversionServiceImageConversionJob sourceRequiresRasterization]
bool __cdecl -[PAMediaConversionServiceImageConversionJob sourceRequiresRasterization](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  NSString *v2; // x21
  void *v3; // x20
  unsigned __int8 v4; // w19

  v2 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob sourceUTI](self, "sourceUTI"));
  v3 = objc_retainAutoreleasedReturnValue(+[PFUniformTypeUtilities typeWithIdentifier:](&OBJC_CLASS___PFUniformTypeUtilities, "typeWithIdentifier:", v2));
  v4 = (unsigned __int8)+[PFMediaUtilities typeRequiresRasterizationDPI:](
                          &OBJC_CLASS___PFMediaUtilities,
                          "typeRequiresRasterizationDPI:",
                          v3);
  objc_release(v3);
  objc_release(v2);
  return v4;
}