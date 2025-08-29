-[DeviceModeUnpairedViewController clickPairDeviceButton:]
void __cdecl -[DeviceModeUnpairedViewController clickPairDeviceButton:](
        DeviceModeUnpairedViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  id v5; // x20
  AMPDevice *v6; // x21
  void *v7; // x22
  _QWORD v8[4]; // [xsp+0h] [xbp-60h] BYREF
  id v9; // [xsp+20h] [xbp-40h] BYREF
  id location; // [xsp+28h] [xbp-38h] BYREF

  v4 = objc_retain(a3);
  -[DeviceModeUnpairedViewController startedPairing](self, "startedPairing");
  objc_initWeak(&location, self);
  v5 = objc_retainAutoreleasedReturnValue(+[DeviceServiceSideConnection sharedConnection](&OBJC_CLASS___DeviceServiceSideConnection, "sharedConnection"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v7 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v6, "deviceIdentifier"));
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_100013168;
  v8[3] = &unk_1000B8ED8;
  objc_copyWeak(&v9, &location);
  objc_msgSend(v5, "pairDeviceWithIdentifier:withReply:", v7, v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  objc_destroyWeak(&v9);
  objc_destroyWeak(&location);
  objc_release(v4);
}