+[ATKeychainStore _removeObjectForKey:]
void __cdecl +[ATKeychainStore _removeObjectForKey:](id a1, SEL a2, id a3)
{
  void *v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "_keychainQuery:", a3));
  objc_msgSend(v3, "removeObjectForKey:", kSecAttrAccessible);
  SecItemDelete((CFDictionaryRef)v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}