-[MediaConversionQueue assertDelegate:respondsToSelector:]
void __cdecl -[MediaConversionQueue assertDelegate:respondsToSelector:](
        MediaConversionQueue *self,
        SEL a2,
        id a3,
        SEL a4)
{
  id v7; // x19
  NSAssertionHandler *v8; // x23
  NSAssertionHandler *v9; // x23
  NSString *v10; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v7 = objc_retain(a3);
  if ( !v7 )
  {
    v8 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v8,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      884LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("strongDelegate"));
    objc_release(v8);
  }
  if ( (objc_opt_respondsToSelector(v7, a4) & 1) == 0 )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    v10 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a4));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v9,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      885LL,
      CFSTR("Delegate %@ doesn't implement %@"),
      v7,
      v10);
    objc_release(v10);
    objc_release(v9);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}