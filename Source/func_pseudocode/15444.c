_CFPreferencesGetAppBooleanValue
Boolean __cdecl CFPreferencesGetAppBooleanValue(
        CFStringRef key,
        CFStringRef applicationID,
        Boolean *keyExistsAndHasValidFormat)
{
  return _CFPreferencesGetAppBooleanValue(key, applicationID, keyExistsAndHasValidFormat);
}