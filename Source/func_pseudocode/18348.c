_SecItemUpdate
OSStatus __cdecl SecItemUpdate(CFDictionaryRef query, CFDictionaryRef attributesToUpdate)
{
  return _SecItemUpdate(query, attributesToUpdate);
}