-[DeviceSettingsPhotosViewController isEnglishUUIDText:]
bool __cdecl -[DeviceSettingsPhotosViewController isEnglishUUIDText:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  __int64 v3; // x20
  id v4; // x19
  unsigned __int8 v5; // w20
  _QWORD block[5]; // [xsp+8h] [xbp-38h] BYREF

  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100026BB0;
  block[3] = &unk_1000B9010;
  block[4] = self;
  v3 = qword_1000DA9C0;
  v4 = objc_retain(a3);
  if ( v3 != -1 )
    dispatch_once(&qword_1000DA9C0, block);
  v5 = (unsigned __int8)objc_msgSend((id)qword_1000DA9C8, "containsObject:", v4);
  objc_release(v4);
  return v5;
}