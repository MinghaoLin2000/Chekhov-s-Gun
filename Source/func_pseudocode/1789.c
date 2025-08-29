-[DeviceAccessibleTextField accessibilityPerformPress]
bool __cdecl -[DeviceAccessibleTextField accessibilityPerformPress](DeviceAccessibleTextField *self, SEL a2)
{
  void *v3; // x0
  void *v4; // x20
  void *v5; // x21
  void *v6; // x20
  objc_super v8; // [xsp+0h] [xbp-30h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceAccessibleTextField target](self, "target"));
  if ( v3 && (v4 = v3, v5 = -[DeviceAccessibleTextField action](self, "action"), objc_release(v4), v5) )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceAccessibleTextField target](self, "target"));
    objc_msgSend(
      v6,
      "performSelector:withObject:afterDelay:",
      -[DeviceAccessibleTextField action](self, "action"),
      self,
      0.0);
    objc_release(v6);
    return 1;
  }
  else
  {
    v8.receiver = self;
    v8.super_class = (Class)&OBJC_CLASS___DeviceAccessibleTextField;
    return -[DeviceAccessibleTextField accessibilityPerformPress](&v8, "accessibilityPerformPress");
  }
}