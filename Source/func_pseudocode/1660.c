-[DeviceFinderTabContainerViewController tabView:willSelectTabViewItem:]
void __cdecl -[DeviceFinderTabContainerViewController tabView:willSelectTabViewItem:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x19
  void *v5; // x20
  void *v6; // x21
  void *v7; // x20
  void *v8; // x21
  void *v9; // x20
  void *v10; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a4);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "viewController"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "view"));
  objc_msgSend(v6, "setNeedsLayout:", 1LL);
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "viewController"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "view"));
  objc_msgSend(v8, "setNeedsDisplay:", 1LL);
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "viewController"));
  objc_release(v4);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "view"));
  objc_msgSend(v10, "layoutSubtreeIfNeeded");
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}