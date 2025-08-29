-[DeviceUIServiceViewController remoteViewSizeChanged:transaction:]
bool __cdecl -[DeviceUIServiceViewController remoteViewSizeChanged:transaction:](
        DeviceUIServiceViewController *self,
        SEL a2,
        CGSize a3,
        id a4)
{
  double height; // d8
  double width; // d9
  id WeakRetained; // x20
  id v8; // x19
  objc_super v10; // [xsp+0h] [xbp-40h] BYREF

  height = a3.height;
  width = a3.width;
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___DeviceUIServiceViewController;
  -[DeviceUIServiceViewController remoteViewSizeChanged:transaction:](&v10, "remoteViewSizeChanged:transaction:", a4);
  WeakRetained = objc_loadWeakRetained((id *)&self->_widthAnchor);
  objc_msgSend(WeakRetained, "setConstant:", width);
  objc_release(WeakRetained);
  v8 = objc_loadWeakRetained((id *)&self->_heightAnchor);
  objc_msgSend(v8, "setConstant:", height);
  objc_release(v8);
  return 1;
}