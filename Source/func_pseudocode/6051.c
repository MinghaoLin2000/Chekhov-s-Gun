-[PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy initWithCoder:]
PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy *__cdecl -[PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy initWithCoder:](
        PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  void *v5; // x21

  v4 = objc_retain(a3);
  if ( (unsigned int)objc_msgSend(v4, "containsValueForKey:", CFSTR("accessibilityDescription")) )
  {
    v5 = objc_retainAutoreleasedReturnValue(
           objc_msgSend(
             v4,
             "decodeObjectOfClass:forKey:",
             objc_opt_class(&OBJC_CLASS___NSString),
             CFSTR("accessibilityDescription")));
    -[PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy setAccessibilityDescription:](
      self,
      "setAccessibilityDescription:",
      v5);
    objc_release(v5);
  }
  objc_release(v4);
  return self;
}