-[DeviceFinderTabContainerViewController updateOverflowVisibility]
void __cdecl -[DeviceFinderTabContainerViewController updateOverflowVisibility](
        DeviceFinderTabContainerViewController *self,
        SEL a2)
{
  NSPopUpButton *v3; // x20
  _BOOL8 v4; // x21
  NSPopUpButton *v5; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController overflowPulldown](self, "overflowPulldown"));
  v4 = -[NSPopUpButton numberOfItems](v3, "numberOfItems") < 2;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController overflowPulldown](self, "overflowPulldown"));
  -[NSPopUpButton setHidden:](v5, "setHidden:", v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}