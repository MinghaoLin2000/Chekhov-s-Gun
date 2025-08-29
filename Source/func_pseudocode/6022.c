-[PAMediaConversionServiceAddPFMetadataPolicy initWithCoder:]
PAMediaConversionServiceAddPFMetadataPolicy *__cdecl -[PAMediaConversionServiceAddPFMetadataPolicy initWithCoder:](
        PAMediaConversionServiceAddPFMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  void *v5; // x21
  void *v6; // x21

  v4 = objc_retain(a3);
  if ( (unsigned int)objc_msgSend(v4, "containsValueForKey:", CFSTR("mediaMetadataType")) )
  {
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "decodeObjectForKey:", CFSTR("mediaMetadataType")));
    -[PAMediaConversionServiceAddPFMetadataPolicy setKey:](self, "setKey:", v5);
    objc_release(v5);
  }
  if ( (unsigned int)objc_msgSend(v4, "containsValueForKey:", CFSTR("mediaMetadataValue")) )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "decodeObjectForKey:", CFSTR("mediaMetadataValue")));
    -[PAMediaConversionServiceAddPFMetadataPolicy setValue:](self, "setValue:", v6);
    objc_release(v6);
  }
  objc_release(v4);
  return self;
}