-[DeviceSoftwareUpdatesViewController refreshView]
void __cdecl -[DeviceSoftwareUpdatesViewController refreshView](DeviceSoftwareUpdatesViewController *self, SEL a2)
{
  _QWORD block[5]; // [xsp+8h] [xbp-48h] BYREF
  id v4; // [xsp+30h] [xbp-20h] BYREF
  id location; // [xsp+38h] [xbp-18h] BYREF

  objc_initWeak(&location, self);
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100058900;
  block[3] = &unk_1000B8EA8;
  objc_copyWeak(&v4, &location);
  block[4] = self;
  dispatch_async(&_dispatch_main_q, block);
  objc_destroyWeak(&v4);
  objc_destroyWeak(&location);
}