-[PAMediaConversionServiceResourceURLCollection setShouldDeleteURLOnDeallocation:forRole:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[PAMediaConversionServiceResourceURLCollection setShouldDeleteURLOnDeallocation:forRole:](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2,
        bool a3,
        id a4)
{
  _BOOL8 v4; // x19
  id v7; // x20
  void *v8; // x21
  NSAssertionHandler *v9; // x24
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = a3;
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_urlReferencesByRole, "objectForKeyedSubscript:", v7));
  if ( !v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v9,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      277LL,
      CFSTR("No URL is currently set for role %@"),
      v7);
    objc_release(v9);
  }
  objc_msgSend(v8, "setShouldDeleteOnDeallocation:", v4);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}