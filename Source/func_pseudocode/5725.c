_CFPreferencesGetAppIntegerValue
CFIndex __cdecl CFPreferencesGetAppIntegerValue(
        CFStringRef key,
        CFStringRef applicationID,
        Boolean *keyExistsAndHasValidFormat)
{
  return _CFPreferencesGetAppIntegerValue(key, applicationID, keyExistsAndHasValidFormat);
}