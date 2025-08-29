-[NSURL tsu_URLExceptPrivate]
id __cdecl -[NSURL tsu_URLExceptPrivate](NSURL *self, SEL a2)
{
  id v2; // x20
  id v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[NSURL tsu_pathExceptPrivate](self, "tsu_pathExceptPrivate"));
  v3 = objc_retainAutoreleasedReturnValue(+[NSURL tsu_fileURLWithPath:](&OBJC_CLASS___NSURL, "tsu_fileURLWithPath:", v2));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}