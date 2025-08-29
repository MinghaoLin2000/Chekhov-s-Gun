-[DeviceUIServiceViewController loadView]
void __cdecl -[DeviceUIServiceViewController loadView](DeviceUIServiceViewController *self, SEL a2)
{
  void *v3; // x20
  void *v4; // x21
  double v5; // d2
  double v6; // d8
  double v7; // d3
  DeviceUIServiceView *v8; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = (void *)objc_opt_new(&OBJC_CLASS___DeviceModeFinderViewController, a2);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "view"));
  objc_release(v3);
  objc_msgSend(v4, "frame");
  v6 = v5;
  objc_msgSend(v4, "frame");
  v8 = -[DeviceUIServiceView initWithFrame:](
         objc_alloc(&OBJC_CLASS___DeviceUIServiceView),
         "initWithFrame:",
         0.0,
         0.0,
         v6,
         v7);
  -[DeviceUIServiceViewController setView:](self, "setView:", v8);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}