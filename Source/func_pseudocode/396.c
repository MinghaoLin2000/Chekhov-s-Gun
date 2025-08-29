-[DeviceUIServiceViewController askUserWithParameters:withReply:]
void __cdecl -[DeviceUIServiceViewController askUserWithParameters:withReply:](
        DeviceUIServiceViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  DeviceViewController *v8; // x22
  unsigned __int8 v9; // w23
  void *v10; // x22
  DeviceViewController *v11; // x23
  void *v12; // x24
  void *v13; // x25
  AMPDevice *v14; // x21
  void *v15; // x26
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController currentController](self, "currentController"));
  v9 = -[DeviceViewController canPresentDevicesClientEventsUI](v8, "canPresentDevicesClientEventsUI");
  objc_release(v8);
  if ( (v9 & 1) != 0 )
  {
    v10 = (void *)objc_opt_class(self);
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController currentController](self, "currentController"));
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController view](v11, "view"));
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "window"));
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController device](self, "device"));
    v15 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceImage](v14, "deviceImage"));
    objc_msgSend(v10, "askUserWithParameters:window:deviceImage:withReply:", v6, v13, v15, v7);
    objc_release(v15);
    objc_release(v14);
    objc_release(v13);
    objc_release(v12);
    objc_release(v11);
  }
  else
  {
    (*((void (__fastcall **)(id, _QWORD, _QWORD))v7 + 2))(v7, 0LL, 0LL);
  }
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}