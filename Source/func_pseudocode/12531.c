-[NSURL tsu_pathExceptPrivate]
id __cdecl -[NSURL tsu_pathExceptPrivate](NSURL *self, SEL a2)
{
  NSString *v2; // x19
  id v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[NSURL path](self, "path"));
  v3 = objc_retainAutoreleasedReturnValue(-[NSString tsu_pathExceptPrivate](v2, "tsu_pathExceptPrivate"));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}