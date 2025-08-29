-[EAAccessoryUpdater finishWithOptions:]
void __cdecl -[EAAccessoryUpdater finishWithOptions:](EAAccessoryUpdater *self, SEL a2, id a3)
{
  _BOOL8 v4; // x21
  _BOOL8 v5; // x20
  _BOOL8 v6; // x22
  NSDictionary *v7; // x20
  NSDictionary *v8; // x3
  _QWORD v9[6]; // [xsp+18h] [xbp-98h] BYREF
  _QWORD v10[6]; // [xsp+48h] [xbp-68h] BYREF

  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater finishWithOptions:]",
    1241LL);
  v4 = -[EAFirmwareUpdater isRestartRequired](self->firmwareUpdater, "isRestartRequired");
  v5 = -[EAFirmwareUpdater isSleepWakeRequired](self->firmwareUpdater, "isSleepWakeRequired");
  v6 = -[EAFirmwareUpdater isUrgentUpdate](self->firmwareUpdater, "isUrgentUpdate");
  v9[0] = CFSTR("DeviceClassName");
  v10[0] = -[NSDictionary objectForKey:](self->deviceOptions, "objectForKey:");
  v9[1] = CFSTR("SilentUpdateNoUI");
  v10[1] = +[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", (unsigned int)v4 ^ 1);
  v9[2] = CFSTR("RebootRequiredMandatory");
  v10[2] = +[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v4);
  v9[3] = CFSTR("UpdateRequiresRestartOnly");
  v10[3] = +[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", 1LL);
  v9[4] = CFSTR("UrgentUpdate");
  v10[4] = +[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v6);
  v9[5] = CFSTR("SleepWakeRequired");
  v10[5] = +[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v5);
  v7 = +[NSDictionary dictionaryWithObjects:forKeys:count:](
         &OBJC_CLASS___NSDictionary,
         "dictionaryWithObjects:forKeys:count:",
         v10,
         v9,
         6LL);
  if ( -[EAAccessoryUpdater consentRequired](self, "consentRequired") )
    -[EAFirmwareUpdater purgeAsset](self->firmwareUpdater, "purgeAsset");
  if ( self->restartOnlyUI )
    v8 = v7;
  else
    v8 = 0LL;
  -[FudPluginDelegate didFinish:info:error:](self->delegate, "didFinish:info:error:", 1LL, v8, 0LL);
}