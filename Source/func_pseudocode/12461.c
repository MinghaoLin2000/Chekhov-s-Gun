-[NSSet tsu_setByIntersectingSet:]
id __cdecl -[NSSet tsu_setByIntersectingSet:](NSSet *self, SEL a2, id a3)
{
  id v4; // x21
  NSMutableSet *v5; // x20
  void *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableSet setWithSet:](&OBJC_CLASS___NSMutableSet, "setWithSet:", self));
  -[NSMutableSet intersectSet:](v5, "intersectSet:", v4);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "setWithSet:", v5));
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}