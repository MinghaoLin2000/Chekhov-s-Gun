-[DeviceModeFinderViewController deviceConfigureDidComplete:]
void __cdecl -[DeviceModeFinderViewController deviceConfigureDidComplete:](
        DeviceModeFinderViewController *self,
        SEL a2,
        id a3)
{
  ITLibrary *v4; // x20
  DeviceFinderTabContainerViewController *v5; // x21
  DeviceFinderTabContainerViewController *v6; // x20
  void *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  -[DeviceModeFinderViewController loadingCompleteBootedOSMode](self, "loadingCompleteBootedOSMode", a3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController finderTabContainerViewController](self, "finderTabContainerViewController"));
  -[DeviceViewController setItLibrary:](v5, "setItLibrary:", v4);
  objc_release(v5);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController finderTabContainerViewController](self, "finderTabContainerViewController"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController view](v6, "view"));
  -[DeviceModeFinderViewController setContentView:](self, "setContentView:", v7);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}