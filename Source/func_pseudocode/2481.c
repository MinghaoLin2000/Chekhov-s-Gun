-[DeviceBackUpSettingsViewController clickEncryptBackupCheckBox:]
void __cdecl -[DeviceBackUpSettingsViewController clickEncryptBackupCheckBox:](
        DeviceBackUpSettingsViewController *self,
        SEL a2,
        id a3)
{
  NSButton *v4; // x20
  void *v5; // x21
  _QWORD v6[5]; // [xsp+0h] [xbp-70h] BYREF
  _QWORD v7[5]; // [xsp+28h] [xbp-48h] BYREF

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController encryptBackupCheckBox](self, "encryptBackupCheckBox", a3));
  v5 = -[NSButton state](v4, "state");
  objc_release(v4);
  if ( v5 == (void *)1 )
  {
    v7[0] = _NSConcreteStackBlock;
    v7[1] = 3254779904LL;
    v7[2] = sub_10005B268;
    v7[3] = &unk_1000B9B88;
    v7[4] = self;
    -[DeviceBackUpSettingsViewController presentSheetToEnterNewPasswordWithReply:](
      self,
      "presentSheetToEnterNewPasswordWithReply:",
      v7);
  }
  else
  {
    v6[0] = _NSConcreteStackBlock;
    v6[1] = 3254779904LL;
    v6[2] = sub_10005B59C;
    v6[3] = &unk_1000B9BB8;
    v6[4] = self;
    -[DeviceBackUpSettingsViewController presentSheetToEnterCurrentPasswordWithReply:](
      self,
      "presentSheetToEnterCurrentPasswordWithReply:",
      v6);
  }
}