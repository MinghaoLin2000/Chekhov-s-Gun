-[DeviceUIServiceViewController canShowUserInteractionForDeviceWithIdentifier:withReply:]
void __cdecl -[DeviceUIServiceViewController canShowUserInteractionForDeviceWithIdentifier:withReply:](
        DeviceUIServiceViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  void (__fastcall **v7)(id, void *, void *); // x20
  DeviceUIServiceViewController *v8; // x21
  DeviceViewController *v9; // x22
  AMPDevice *v10; // x23
  void *v11; // x24
  unsigned int v12; // w25
  DeviceViewController *v13; // x23
  _BOOL8 v14; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, void *, void *))objc_retain(a4);
  v8 = objc_retain(self);
  objc_sync_enter(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController currentController](v8, "currentController"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](v9, "device"));
  v11 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v10, "deviceIdentifier"));
  v12 = (unsigned int)objc_msgSend(v11, "isEqualToString:", v6);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  if ( v12 )
  {
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController currentController](v8, "currentController"));
    v14 = -[DeviceViewController canPresentDevicesClientEventsUI](v13, "canPresentDevicesClientEventsUI");
    objc_release(v13);
  }
  else
  {
    v14 = 0LL;
  }
  v7[2](
    v7,
    (void *)v14,
    (void *)-[NSString isEqualToString:](v8->_currentMode, "isEqualToString:", AMPDeviceViewModeDefault));
  objc_sync_exit(v8);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}