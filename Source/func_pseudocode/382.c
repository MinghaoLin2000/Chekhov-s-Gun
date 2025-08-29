-[DeviceUIServiceViewController setCurrentController:]
void __cdecl -[DeviceUIServiceViewController setCurrentController:](DeviceUIServiceViewController *self, SEL a2, id a3)
{
  DeviceViewController *v4; // x20
  void *v5; // x21
  DeviceViewController *currentController; // x21
  DeviceViewController *v7; // x20
  void *v8; // x21
  void *v9; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (DeviceViewController *)objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController view](self->_currentController, "view"));
  objc_msgSend(v5, "removeFromSuperview");
  objc_release(v5);
  currentController = self->_currentController;
  self->_currentController = v4;
  v7 = objc_retain(v4);
  objc_release(currentController);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController view](self->_currentController, "view"));
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController view](self, "view"));
  sub_10002ABA4((int)v8, v9);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}