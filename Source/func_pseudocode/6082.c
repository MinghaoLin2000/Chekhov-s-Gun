-[PAMediaConversionServiceResourceURLReference getPathHash:lastPathComponent:]
void __cdecl -[PAMediaConversionServiceResourceURLReference getPathHash:lastPathComponent:](
        PAMediaConversionServiceResourceURLReference *self,
        SEL a2,
        unsigned __int64 *a3,
        id *a4)
{
  NSURL *url; // x0
  NSString *v8; // x0
  NSString *v9; // x21
  NSAssertionHandler *v11; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  url = self->_url;
  if ( !url )
  {
    v11 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v11,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      82LL,
      CFSTR("Unexpected nil resource reference URL"));
    objc_release(v11);
    url = self->_url;
  }
  v8 = objc_retainAutoreleasedReturnValue(-[NSURL path](url, "path"));
  v9 = v8;
  if ( a3 )
    *a3 = -[NSString hash](v8, "hash");
  if ( a4 )
    *a4 = objc_autorelease(objc_retainAutoreleasedReturnValue(-[NSString lastPathComponent](v9, "lastPathComponent")));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}