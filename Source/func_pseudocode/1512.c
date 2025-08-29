-[DeviceFooterViewController updateCapacityBar]
void __cdecl -[DeviceFooterViewController updateCapacityBar](DeviceFooterViewController *self, SEL a2)
{
  AMPDevice *v3; // x19
  AMPDevice *v4; // x21
  AMPDevice *v5; // x22
  void *v6; // x23
  AMPDevicesClient *v7; // x19
  AMPDevice *v8; // x21
  _QWORD v9[4]; // [xsp+0h] [xbp-60h] BYREF
  id v10; // [xsp+20h] [xbp-40h] BYREF
  id location; // [xsp+28h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  if ( (unsigned int)-[AMPDevice needsUnlock](v3, "needsUnlock") )
  {
LABEL_4:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v3);
    return;
  }
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  if ( (unsigned int)-[AMPDevice needsPairing](v4, "needsPairing") )
  {
    objc_release(v4);
    goto LABEL_4;
  }
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v6 = -[AMPDevice deviceMode](v5, "deviceMode");
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  if ( v6 == (void *)1 )
  {
    objc_initWeak(&location, self);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v9[0] = _NSConcreteStackBlock;
    v9[1] = 3254779904LL;
    v9[2] = sub_1000334BC;
    v9[3] = &unk_1000B94C0;
    objc_copyWeak(&v10, &location);
    -[AMPDevicesClient fetchTotalsForDevice:withReply:](v7, "fetchTotalsForDevice:withReply:", v8, v9);
    objc_release(v8);
    objc_release(v7);
    objc_destroyWeak(&v10);
    objc_destroyWeak(&location);
  }
}