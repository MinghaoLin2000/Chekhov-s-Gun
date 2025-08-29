-[PAMediaConversionServiceSetCreationDateImageMetadataPolicy initWithCoder:]
PAMediaConversionServiceSetCreationDateImageMetadataPolicy *__cdecl -[PAMediaConversionServiceSetCreationDateImageMetadataPolicy initWithCoder:](
        PAMediaConversionServiceSetCreationDateImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  void *v5; // x21
  void *v6; // x22

  v4 = objc_retain(a3);
  if ( (unsigned int)objc_msgSend(v4, "containsValueForKey:", CFSTR("creationDate")) )
  {
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "decodeObjectOfClass:forKey:", objc_opt_class(&OBJC_CLASS___NSDate), CFSTR("creationDate")));
    v6 = objc_retainAutoreleasedReturnValue(
           objc_msgSend(
             v4,
             "decodeObjectOfClass:forKey:",
             objc_opt_class(&OBJC_CLASS___NSTimeZone),
             CFSTR("creationDateTimeZone")));
    -[PAMediaConversionServiceSetCreationDateImageMetadataPolicy setCreationDate:](self, "setCreationDate:", v5);
    -[PAMediaConversionServiceSetCreationDateImageMetadataPolicy setTimeZone:](self, "setTimeZone:", v6);
    objc_release(v6);
    objc_release(v5);
  }
  objc_release(v4);
  return self;
}