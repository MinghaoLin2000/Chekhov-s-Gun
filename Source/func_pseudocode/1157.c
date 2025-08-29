-[DeviceSettingsPhotosViewController loadPhotoKit]
void __cdecl -[DeviceSettingsPhotosViewController loadPhotoKit](DeviceSettingsPhotosViewController *self, SEL a2)
{
  void *v3; // x20
  _QWORD v4[5]; // [xsp+8h] [xbp-38h] BYREF

  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_100027C30;
  v4[3] = &unk_1000B9010;
  v4[4] = self;
  v3 = (void *)sub_10004D51C(0, v4);
  if ( v3 )
  {
    -[DeviceSettingsPhotosViewController setRootMediaGroup:](self, "setRootMediaGroup:", v3);
    -[DeviceSettingsPhotosViewController loadRootMediaGroup](self, "loadRootMediaGroup");
  }
  objc_release(v3);
}