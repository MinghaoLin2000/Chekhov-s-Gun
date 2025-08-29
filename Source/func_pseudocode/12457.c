-[NSSet tsu_sortedArray]
id __cdecl -[NSSet tsu_sortedArray](NSSet *self, SEL a2)
{
  NSArray *v2; // x19
  NSArray *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[NSSet allObjects](self, "allObjects"));
  v3 = objc_retainAutoreleasedReturnValue(-[NSArray sortedArrayUsingSelector:](v2, "sortedArrayUsingSelector:", "compare:"));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}