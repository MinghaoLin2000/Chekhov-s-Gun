-[DeviceModeFinderViewController didChangeSyncErrorState:forDeviceWithIdentifier:]
void __cdecl -[DeviceModeFinderViewController didChangeSyncErrorState:forDeviceWithIdentifier:](
        DeviceModeFinderViewController *self,
        SEL a2,
        bool a3,
        id a4)
{
  _BOOL4 v4; // w20
  id v6; // x21
  AMPDevice *v7; // x22
  void *v8; // x23
  unsigned int v9; // w24
  id v10; // x20
  AMPDevice *v11; // x21
  _QWORD v12[5]; // [xsp+8h] [xbp-58h] BYREF

  v4 = a3;
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v8 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v7, "deviceIdentifier"));
  v9 = (unsigned int)objc_msgSend(v6, "isEqualToString:", v8);
  objc_release(v6);
  objc_release(v8);
  objc_release(v7);
  if ( v9 )
  {
    if ( v4 )
    {
      v10 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
      v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
      v12[0] = _NSConcreteStackBlock;
      v12[1] = 3254779904LL;
      v12[2] = sub_1000574F0;
      v12[3] = &unk_1000B91E0;
      v12[4] = self;
      objc_msgSend(v10, "fetchSyncErrorsForDevice:withReply:", v11, v12);
      objc_release(v11);
      objc_release(v10);
    }
  }
}