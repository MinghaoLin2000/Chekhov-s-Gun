-[PAMediaConversionServiceResourceURLReference dictionaryRepresentationWithError:]
id __cdecl -[PAMediaConversionServiceResourceURLReference dictionaryRepresentationWithError:](
        PAMediaConversionServiceResourceURLReference *self,
        SEL a2,
        id *a3)
{
  NSData *v3; // x0
  NSData *v4; // x19
  NSDictionary *v5; // x20
  const __CFString *v7; // [xsp+8h] [xbp-28h] BYREF
  NSData *v8; // [xsp+10h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         -[NSURL bookmarkDataWithOptions:includingResourceValuesForKeys:relativeToURL:error:](
           self->_url,
           "bookmarkDataWithOptions:includingResourceValuesForKeys:relativeToURL:error:",
           0LL,
           0LL,
           0LL,
           a3));
  v4 = v3;
  if ( v3 )
  {
    v7 = CFSTR("bookmarkData");
    v8 = v3;
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             &v8,
             &v7,
             1LL));
  }
  else
  {
    v5 = 0LL;
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}