-[PAMediaConversionServiceSetLocationImageMetadataPolicy initWithCoder:]
PAMediaConversionServiceSetLocationImageMetadataPolicy *__cdecl -[PAMediaConversionServiceSetLocationImageMetadataPolicy initWithCoder:](
        PAMediaConversionServiceSetLocationImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  void *v5; // x21

  v4 = objc_retain(a3);
  if ( (unsigned int)objc_msgSend(v4, "containsValueForKey:", CFSTR("location")) )
  {
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "decodeObjectOfClass:forKey:", objc_opt_class(&OBJC_CLASS___CLLocation), CFSTR("location")));
    -[PAMediaConversionServiceSetLocationImageMetadataPolicy setLocation:](self, "setLocation:", v5);
    objc_release(v5);
  }
  objc_release(v4);
  return self;
}