-[DeviceUIServiceViewController setMode:]
void __cdecl -[DeviceUIServiceViewController setMode:](DeviceUIServiceViewController *self, SEL a2, id a3)
{
  id v5; // x19
  DeviceUIServiceViewController *v6; // x20
  AMPDevicesClient *v7; // x21
  __int64 v8; // x1
  void *v9; // x21
  AMPDevicesClient *v10; // x21
  NSString *v11; // x21
  objc_class *v12; // x22
  __int64 v13; // x1
  void *v14; // x21
  AMPDevice *v15; // x22
  AMPDevicesClient *v16; // x22
  NSString *v17; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( !-[NSString isEqualToString:](self->_currentMode, "isEqualToString:", v5) )
  {
    objc_storeStrong((id *)&self->_currentMode, a3);
    v6 = objc_retain(self);
    objc_sync_enter(v6);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController devicesClient](v6, "devicesClient"));
    objc_release(v7);
    if ( !v7 )
    {
      v9 = (void *)objc_opt_new(&OBJC_CLASS___AMPDevicesClient, v8);
      -[DeviceUIServiceViewController setDevicesClient:](v6, "setDevicesClient:", v9);
      objc_release(v9);
      v10 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController devicesClient](v6, "devicesClient"));
      -[AMPDevicesClient addListener:](v10, "addListener:", v6);
      objc_release(v10);
    }
    objc_sync_exit(v6);
    objc_release(v6);
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController currentMode](v6, "currentMode"));
    v12 = -[DeviceUIServiceViewController classForViewMode:](v6, "classForViewMode:", v11);
    objc_release(v11);
    v14 = (void *)objc_opt_new(v12, v13);
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController device](v6, "device"));
    objc_msgSend(v14, "setDevice:", v15);
    objc_release(v15);
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController devicesClient](v6, "devicesClient"));
    objc_msgSend(v14, "setDevicesClient:", v16);
    objc_release(v16);
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController currentMode](v6, "currentMode"));
    objc_msgSend(v14, "setViewMode:", v17);
    objc_release(v17);
    -[DeviceUIServiceViewController setCurrentController:](v6, "setCurrentController:", v14);
    objc_release(v14);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}