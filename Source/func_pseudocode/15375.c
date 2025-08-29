-[UARPUpdaterDisplayControllerDelegate getDefaultBool:defaultValue:]
bool __cdecl -[UARPUpdaterDisplayControllerDelegate getDefaultBool:defaultValue:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        __CFString *a3,
        bool a4)
{
  int AppBooleanValue; // w0
  Boolean keyExistsAndHasValidFormat; // [xsp+Fh] [xbp-11h] BYREF

  if ( +[UARPUpdaterDisplayControllerDelegate hostIsInternal](
         &OBJC_CLASS___UARPUpdaterDisplayControllerDelegate,
         "hostIsInternal") )
  {
    keyExistsAndHasValidFormat = 0;
    AppBooleanValue = CFPreferencesGetAppBooleanValue(
                        a3,
                        CFSTR("com.apple.DarwinAccessoryUpdate.A2525"),
                        &keyExistsAndHasValidFormat);
    if ( keyExistsAndHasValidFormat )
      return AppBooleanValue != 0;
  }
  return a4;
}