-[DeviceStorageManagementViewController clickDeleteButton:]
void __cdecl -[DeviceStorageManagementViewController clickDeleteButton:](
        DeviceStorageManagementViewController *self,
        SEL a2,
        id a3)
{
  _QWORD v3[5]; // [xsp+8h] [xbp-28h] BYREF

  v3[0] = _NSConcreteStackBlock;
  v3[1] = 3254779904LL;
  v3[2] = sub_100020164;
  v3[3] = &unk_1000B8FB0;
  v3[4] = self;
  -[DeviceStorageManagementViewController promptForRemoveWithCompletionHandler:](
    self,
    "promptForRemoveWithCompletionHandler:",
    v3);
}