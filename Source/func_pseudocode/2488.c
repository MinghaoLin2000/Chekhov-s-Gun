-[DeviceBackUpSettingsViewController clickChangePasswordButton:]
void __cdecl -[DeviceBackUpSettingsViewController clickChangePasswordButton:](
        DeviceBackUpSettingsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  _QWORD v5[4]; // [xsp+0h] [xbp-50h] BYREF
  id v6; // [xsp+20h] [xbp-30h] BYREF
  id location; // [xsp+28h] [xbp-28h] BYREF

  v4 = objc_retain(a3);
  objc_initWeak(&location, self);
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_10005C324;
  v5[3] = &unk_1000B9C68;
  objc_copyWeak(&v6, &location);
  -[DeviceBackUpSettingsViewController presentSheetToChangePasswordWithReply:](
    self,
    "presentSheetToChangePasswordWithReply:",
    v5);
  objc_destroyWeak(&v6);
  objc_destroyWeak(&location);
  objc_release(v4);
}