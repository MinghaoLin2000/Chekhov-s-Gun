_CFURLCopyResourcePropertyForKey
Boolean __cdecl CFURLCopyResourcePropertyForKey(
        CFURLRef url,
        CFStringRef key,
        void *propertyValueTypeRefPtr,
        CFErrorRef *error)
{
  return _CFURLCopyResourcePropertyForKey(url, key, propertyValueTypeRefPtr, error);
}