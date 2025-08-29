-[PAMediaConversionServiceCompositeImageMetadataPolicy initWithCoder:]
PAMediaConversionServiceCompositeImageMetadataPolicy *__cdecl -[PAMediaConversionServiceCompositeImageMetadataPolicy initWithCoder:](
        PAMediaConversionServiceCompositeImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  void *v5; // x21

  v4 = objc_retain(a3);
  if ( (unsigned int)objc_msgSend(v4, "containsValueForKey:", CFSTR("policyList")) )
  {
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "decodeObjectForKey:", CFSTR("policyList")));
    -[PAMediaConversionServiceCompositeImageMetadataPolicy setPolicies:](self, "setPolicies:", v5);
    objc_release(v5);
  }
  objc_release(v4);
  return self;
}