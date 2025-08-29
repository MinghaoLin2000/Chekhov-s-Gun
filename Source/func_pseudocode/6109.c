-[PAMediaConversionServiceResourceURLCollection resourceURLForRole:]
id __cdecl -[PAMediaConversionServiceResourceURLCollection resourceURLForRole:](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  void *v6; // x22
  void *v7; // x21
  PAMediaConversionServiceResourceURLCollectionAccessProvider *v8; // x22
  PAMediaConversionServiceResourceURLCollectionAccessProvider *v9; // x20
  id v10; // x22
  NSAssertionHandler *v12; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v12 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v12,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      266LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("role"));
    objc_release(v12);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_urlReferencesByRole, "objectForKeyedSubscript:", v5));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "url"));
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceResourceURLCollection accessProviderDelegate](self, "accessProviderDelegate"));
  objc_release(v8);
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceResourceURLCollection accessProviderDelegate](self, "accessProviderDelegate"));
    v10 = objc_retainAutoreleasedReturnValue(
            -[PAMediaConversionServiceResourceURLCollectionAccessProvider validateAccessForURL:role:](
              v9,
              "validateAccessForURL:role:",
              v7,
              v5));
    objc_release(v7);
    objc_release(v9);
    v7 = v10;
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}