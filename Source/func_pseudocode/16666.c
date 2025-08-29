-[EAAccessoryUpdater applyFirmwareWithOptions:]
void __cdecl -[EAAccessoryUpdater applyFirmwareWithOptions:](EAAccessoryUpdater *self, SEL a2, id a3)
{
  EAFirmwareUpdater *firmwareUpdater; // x0
  _QWORD v5[5]; // [xsp+10h] [xbp-B0h] BYREF
  _QWORD v6[5]; // [xsp+38h] [xbp-88h] BYREF
  _QWORD v7[5]; // [xsp+60h] [xbp-60h] BYREF
  _QWORD v8[5]; // [xsp+88h] [xbp-38h] BYREF

  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater applyFirmwareWithOptions:]",
    1185LL);
  firmwareUpdater = self->firmwareUpdater;
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_10001A1C8;
  v8[3] = &unk_100031B60;
  v8[4] = self;
  v6[4] = self;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_10001A238;
  v7[3] = &unk_100031B90;
  v7[4] = self;
  v5[4] = self;
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_10001A2C8;
  v6[3] = &unk_100031BC0;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_10001A38C;
  v5[3] = &unk_100031BF0;
  -[EAFirmwareUpdater applyFirmware:progress:update:personalization:](
    firmwareUpdater,
    "applyFirmware:progress:update:personalization:",
    v8,
    v7,
    v6,
    v5);
}