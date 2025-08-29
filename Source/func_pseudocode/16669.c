-[EAAccessoryUpdater consentRequired]
bool __cdecl -[EAAccessoryUpdater consentRequired](EAAccessoryUpdater *self, SEL a2)
{
  void *v3; // x20
  NSMutableSet *seedLocations; // x0
  bool v5; // w19
  _QWORD v7[7]; // [xsp+18h] [xbp-68h] BYREF
  __int64 v8; // [xsp+50h] [xbp-30h] BYREF
  __int64 *v9; // [xsp+58h] [xbp-28h]
  __int64 v10; // [xsp+60h] [xbp-20h]
  char v11; // [xsp+68h] [xbp-18h]

  v8 = 0LL;
  v9 = &v8;
  v10 = 0x2020000000LL;
  v11 = 0;
  v3 = -[EAFirmwareUpdater assetLocation](self->firmwareUpdater, "assetLocation");
  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    7LL,
    CFSTR("%s: asset Location %@"),
    "-[EAAccessoryUpdater consentRequired]",
    v3);
  if ( v3 && -[NSMutableSet count](self->seedLocations, "count") )
  {
    seedLocations = self->seedLocations;
    v7[0] = _NSConcreteStackBlock;
    v7[1] = 3254779904LL;
    v7[2] = sub_10001A73C;
    v7[3] = &unk_100031C20;
    v7[4] = v3;
    v7[5] = self;
    v7[6] = &v8;
    -[NSMutableSet enumerateObjectsUsingBlock:](seedLocations, "enumerateObjectsUsingBlock:", v7);
    v5 = *((_BYTE *)v9 + 24) != 0;
  }
  else
  {
    v5 = 0;
    *((_BYTE *)v9 + 24) = 0;
  }
  _Block_object_dispose(&v8, 8);
  return v5;
}