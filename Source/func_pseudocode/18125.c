_CFPreferencesSetValue
void __cdecl CFPreferencesSetValue(
        CFStringRef key,
        CFPropertyListRef value,
        CFStringRef applicationID,
        CFStringRef userName,
        CFStringRef hostName)
{
  _CFPreferencesSetValue(key, value, applicationID, userName, hostName);
}