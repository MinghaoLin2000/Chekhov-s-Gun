-[NSURL tsu_UTI]
NSString *__cdecl -[NSURL tsu_UTI](NSURL *self, SEL a2)
{
  NSString *v2; // x19
  NSString *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[NSURL path](self, "path"));
  v3 = objc_retainAutoreleasedReturnValue(-[NSString tsu_pathUTI](v2, "tsu_pathUTI"));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}