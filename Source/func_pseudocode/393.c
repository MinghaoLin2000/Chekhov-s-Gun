-[DeviceUIServiceViewController performDragOperation:]
bool __cdecl -[DeviceUIServiceViewController performDragOperation:](DeviceUIServiceViewController *self, SEL a2, id a3)
{
  id v4; // x19
  AMPDevicesClient *v5; // x21
  AMPDevice *v6; // x20

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController fileURLsForDrag:](self, "fileURLsForDrag:", a3));
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController devicesClient](self, "devicesClient"));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController device](self, "device"));
    -[AMPDevicesClient copyFiles:toDevice:withReply:](v5, "copyFiles:toDevice:withReply:", v4, v6, &stru_1000B8A38);
    objc_release(v6);
    objc_release(v5);
  }
  objc_release(v4);
  return v4 != 0LL;
}