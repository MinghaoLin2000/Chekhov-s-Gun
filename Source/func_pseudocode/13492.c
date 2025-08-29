-[NSString tsu_stringWithRealpath]
id __cdecl -[NSString tsu_stringWithRealpath](NSString *self, SEL a2)
{
  char *v2; // x0
  char *v3; // x19
  NSString *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = realpath_DARWIN_EXTSN(
         -[NSString fileSystemRepresentation](objc_retainAutorelease(self), "fileSystemRepresentation"),
         0LL);
  if ( v2 )
  {
    v3 = v2;
    v4 = objc_retainAutoreleasedReturnValue(+[NSString stringWithCString:encoding:](&OBJC_CLASS___NSString, "stringWithCString:encoding:", v2, 4LL));
    free(v3);
  }
  else
  {
    v4 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}