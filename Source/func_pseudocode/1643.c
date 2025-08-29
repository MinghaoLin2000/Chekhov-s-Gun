-[DeviceFinderTabContainerViewController hideButtonBar]
void __cdecl -[DeviceFinderTabContainerViewController hideButtonBar](
        DeviceFinderTabContainerViewController *self,
        SEL a2)
{
  NSStackView *v3; // x20
  NSBox *v4; // x20
  NSView *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController buttonBarStackView](self, "buttonBarStackView"));
  -[NSStackView setHidden:](v3, "setHidden:", 1LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController buttonBarHorizontalLine](self, "buttonBarHorizontalLine"));
  -[NSBox setHidden:](v4, "setHidden:", 1LL);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController buttonBarViewContainer](self, "buttonBarViewContainer"));
  -[NSView setHidden:](v5, "setHidden:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}