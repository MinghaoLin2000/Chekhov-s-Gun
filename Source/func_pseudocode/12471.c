-[NSMapTable tsu_allKeys]
id __cdecl -[NSMapTable tsu_allKeys](NSMapTable *self, SEL a2)
{
  NSEnumerator *v2; // x19
  NSArray *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[NSMapTable keyEnumerator](self, "keyEnumerator"));
  v3 = objc_retainAutoreleasedReturnValue(-[NSEnumerator allObjects](v2, "allObjects"));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}