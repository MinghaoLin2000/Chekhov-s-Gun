-[NSSet tsu_setBySubtractingSet:]
id __cdecl -[NSSet tsu_setBySubtractingSet:](NSSet *self, SEL a2, id a3)
{
  id v4; // x19
  NSMutableSet *v5; // x21
  NSSet *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( objc_msgSend(v4, "count") )
  {
    v5 = objc_retainAutoreleasedReturnValue(+[NSMutableSet setWithSet:](&OBJC_CLASS___NSMutableSet, "setWithSet:", self));
    -[NSMutableSet minusSet:](v5, "minusSet:", v4);
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "setWithSet:", v5));
    objc_release(v5);
  }
  else
  {
    v6 = objc_retain(self);
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}