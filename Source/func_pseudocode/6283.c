-[PAMediaConversionServiceImageConversionJob isRAWSourceUTI]
bool __cdecl -[PAMediaConversionServiceImageConversionJob isRAWSourceUTI](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  NSString *v2; // x20
  void *v3; // x19
  unsigned __int8 v4; // w21

  v2 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob sourceUTI](self, "sourceUTI"));
  v3 = objc_retainAutoreleasedReturnValue(+[PFUniformTypeUtilities typeWithIdentifier:](&OBJC_CLASS___PFUniformTypeUtilities, "typeWithIdentifier:", v2));
  v4 = (unsigned __int8)objc_msgSend(v3, "conformsToType:", UTTypeRAWImage);
  objc_release(v3);
  objc_release(v2);
  return v4;
}