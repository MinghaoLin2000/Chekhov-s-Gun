-[PAMediaConversionServiceResourceURLCollection setResourceURL:forRole:]
void __cdecl -[PAMediaConversionServiceResourceURLCollection setResourceURL:forRole:](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x19
  id v8; // x0
  void *v9; // x20
  void *v10; // x23
  PAMediaConversionServiceResourceURLReference *v11; // x22
  NSAssertionHandler *v12; // x23
  NSAssertionHandler *v13; // x23
  NSAssertionHandler *v14; // x23
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = v8;
  if ( v7 )
  {
    if ( v8 )
      goto LABEL_3;
  }
  else
  {
    v12 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v12,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      251LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("url"));
    objc_release(v12);
    if ( v9 )
      goto LABEL_3;
  }
  v13 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
    v13,
    "handleFailureInMethod:object:file:lineNumber:description:",
    a2,
    self,
    CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
    252LL,
    CFSTR("Invalid parameter not satisfying: %@"),
    CFSTR("role"));
  objc_release(v13);
LABEL_3:
  v10 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_urlReferencesByRole, "objectForKeyedSubscript:", v9));
  objc_release(v10);
  if ( v10 )
  {
    v14 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v14,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      253LL,
      CFSTR("This resource URL collection already has a URL for role '%@'"),
      v9);
    objc_release(v14);
  }
  v11 = objc_retainAutoreleasedReturnValue(
          +[PAMediaConversionServiceResourceURLReference referenceWithURL:](
            &OBJC_CLASS___PAMediaConversionServiceResourceURLReference,
            "referenceWithURL:",
            v7));
  -[NSMutableDictionary setObject:forKeyedSubscript:](
    self->_urlReferencesByRole,
    "setObject:forKeyedSubscript:",
    v11,
    v9);
  objc_release(v11);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}