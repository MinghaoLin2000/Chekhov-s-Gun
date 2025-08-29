-[PAMediaConversionServiceSetCaptionImageMetadataPolicy initWithCoder:]
PAMediaConversionServiceSetCaptionImageMetadataPolicy *__cdecl -[PAMediaConversionServiceSetCaptionImageMetadataPolicy initWithCoder:](
        PAMediaConversionServiceSetCaptionImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  void *v5; // x21

  v4 = objc_retain(a3);
  if ( (unsigned int)objc_msgSend(v4, "containsValueForKey:", CFSTR("caption")) )
  {
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "decodeObjectOfClass:forKey:", objc_opt_class(&OBJC_CLASS___NSString), CFSTR("caption")));
    -[PAMediaConversionServiceSetCaptionImageMetadataPolicy setCaption:](self, "setCaption:", v5);
    objc_release(v5);
  }
  objc_release(v4);
  return self;
}