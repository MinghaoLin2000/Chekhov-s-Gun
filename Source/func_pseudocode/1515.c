-[DeviceFooterViewController mouseEntered:]
void __cdecl -[DeviceFooterViewController mouseEntered:](DeviceFooterViewController *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x21
  NSProgress *v6; // x22
  objc_super v7; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___DeviceFooterViewController;
  -[DeviceFooterViewController mouseEntered:](&v7, "mouseEntered:", v4);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "trackingArea"));
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryProgress](self, "secondaryProgress"));
    objc_release(v6);
    if ( v6 )
    {
      -[DeviceFooterViewController setHoveringOverProgress:](self, "setHoveringOverProgress:", 1LL);
      -[DeviceFooterViewController updateProgressDisplay:](self, "updateProgressDisplay:", 0LL);
    }
  }
  objc_release(v5);
  objc_release(v4);
}