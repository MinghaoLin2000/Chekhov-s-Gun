-[DeviceSettingsViewController loadModelAndUpdateUIAsync]
void __cdecl -[DeviceSettingsViewController loadModelAndUpdateUIAsync](DeviceSettingsViewController *self, SEL a2)
{
  _QWORD v3[4]; // [xsp+0h] [xbp-40h] BYREF
  id v4; // [xsp+20h] [xbp-20h] BYREF
  id location; // [xsp+28h] [xbp-18h] BYREF

  objc_initWeak(&location, self);
  v3[0] = _NSConcreteStackBlock;
  v3[1] = 3254779904LL;
  v3[2] = sub_100017674;
  v3[3] = &unk_1000B9040;
  objc_copyWeak(&v4, &location);
  -[DeviceSettingsViewController dispatchWithBlock:](self, "dispatchWithBlock:", v3);
  objc_destroyWeak(&v4);
  objc_destroyWeak(&location);
}