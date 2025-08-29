-[PAMediaConversionServiceResourceURLCollection init]
PAMediaConversionServiceResourceURLCollection *__cdecl -[PAMediaConversionServiceResourceURLCollection init](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2)
{
  PAMediaConversionServiceResourceURLCollection *v2; // x19
  NSMutableDictionary *v3; // x0
  NSMutableDictionary *urlReferencesByRole; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___PAMediaConversionServiceResourceURLCollection;
  v2 = -[PAMediaConversionServiceResourceURLCollection init](&v6, "init");
  if ( v2 )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    urlReferencesByRole = v2->_urlReferencesByRole;
    v2->_urlReferencesByRole = v3;
    objc_release(urlReferencesByRole);
  }
  return v2;
}