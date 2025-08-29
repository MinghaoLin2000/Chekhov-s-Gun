-[DeviceModeFinderViewController deviceViewDirtinessDidChange:]
void __cdecl -[DeviceModeFinderViewController deviceViewDirtinessDidChange:](
        DeviceModeFinderViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x20
  unsigned int v5; // w22
  NSMutableSet *v6; // x0
  NSMutableSet *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "object"));
  v5 = (unsigned int)objc_msgSend(v4, "isDirty");
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController dirtyViewControllers](self, "dirtyViewControllers"));
  v7 = v6;
  if ( v5 )
    -[NSMutableSet addObject:](v6, "addObject:", v4);
  else
    -[NSMutableSet removeObject:](v6, "removeObject:", v4);
  objc_release(v7);
  -[DeviceModeFinderViewController updateHeaderState](self, "updateHeaderState");
  -[DeviceModeFinderViewController updateFooterButtons](self, "updateFooterButtons");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}