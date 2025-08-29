-[NSDictionary tsu_allKeysAsSet]
NSSet *__cdecl -[NSDictionary tsu_allKeysAsSet](NSDictionary *self, SEL a2)
{
  NSArray *v2; // x20
  NSSet *v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[NSDictionary allKeys](self, "allKeys"));
  v3 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v2));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}