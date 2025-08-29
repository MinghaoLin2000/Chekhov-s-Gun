-[EAAccessoryUpdater downloadFirmwareWithOptions:]
void __cdecl -[EAAccessoryUpdater downloadFirmwareWithOptions:](EAAccessoryUpdater *self, SEL a2, id a3)
{
  unsigned __int8 v4; // w20
  EAFirmwareUpdater *firmwareUpdater; // x0
  _QWORD v6[6]; // [xsp+18h] [xbp-88h] BYREF
  unsigned __int8 v7; // [xsp+48h] [xbp-58h]
  _QWORD v8[6]; // [xsp+50h] [xbp-50h] BYREF

  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater downloadFirmwareWithOptions:]",
    1118LL);
  v8[0] = 0LL;
  v8[1] = v8;
  v8[2] = 0x3052000000LL;
  v8[3] = sub_100019E14;
  v8[4] = sub_100019E24;
  v8[5] = 0LL;
  v4 = -[EAAccessoryUpdater consentRequired](self, "consentRequired");
  if ( -[EAFirmwareUpdater isMultiAssetSession](self->firmwareUpdater, "isMultiAssetSession") )
  {
    -[FudPluginDelegate log:format:](
      self->delegate,
      "log:format:",
      3LL,
      CFSTR("%s: multi asset session - download NOP %@"),
      "-[EAAccessoryUpdater downloadFirmwareWithOptions:]",
      self->deviceClass);
    -[FudPluginDelegate didDownload:info:error:](self->delegate, "didDownload:info:error:", 1LL, 0LL, 0LL);
  }
  else
  {
    firmwareUpdater = self->firmwareUpdater;
    v6[0] = _NSConcreteStackBlock;
    v6[1] = 3254779904LL;
    v6[2] = sub_100019E30;
    v6[3] = &unk_100031B30;
    v7 = v4;
    v6[4] = self;
    v6[5] = v8;
    -[EAFirmwareUpdater downloadAsset:](firmwareUpdater, "downloadAsset:", v6);
  }
  _Block_object_dispose(v8, 8);
}