+[ATKeychainStore _keychainQuery:]
id __cdecl +[ATKeychainStore _keychainQuery:](id a1, SEL a2, id a3)
{
  id v3; // x20
  id v4; // x19
  void *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", CFSTR("apple"), kSecAttrAccessGroup);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", kSecClassGenericPassword, kSecClass);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", CFSTR("com.apple.AppTrackingTransparencyService"), kSecAttrService);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", kSecAttrAccessibleAfterFirstUnlock, kSecAttrAccessible);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "dataUsingEncoding:", 4LL));
  objc_release(v3);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", v5, kSecAttrGeneric);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", v5, kSecAttrAccount);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, kSecUseDataProtectionKeychain);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}