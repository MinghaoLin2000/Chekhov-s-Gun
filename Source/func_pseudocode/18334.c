+[ATKeychainStore _writeDataToKeychain:andData:]
void __cdecl +[ATKeychainStore _writeDataToKeychain:andData:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  const __CFDictionary *v8; // x22
  void *v9; // x21
  OSStatus v10; // w0
  OSStatus v11; // w24
  void *v12; // x24
  const __CFDictionary *v13; // x23
  OSStatus v14; // w0
  OSStatus v15; // w22
  int v16; // [xsp+0h] [xbp-60h] BYREF
  _BYTE v17[14]; // [xsp+4h] [xbp-5Ch]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "_keychainQuery:", v6));
  -[__CFDictionary removeObjectForKey:](v8, "removeObjectForKey:", kSecAttrAccessible);
  SecItemDelete(v8);
  if ( v7 )
  {
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "_keychainQuery:", v6));
    objc_msgSend(v9, "setObject:forKeyedSubscript:", v7, kSecValueData);
    v10 = SecItemAdd((CFDictionaryRef)v9, 0LL);
    if ( v10 )
    {
      v11 = v10;
      if ( v10 == -25299 )
      {
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "_keychainQuery:", v6));
        objc_msgSend(v12, "removeObjectForKey:", kSecClass);
        objc_msgSend(v12, "setObject:forKeyedSubscript:", v7, kSecValueData);
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "_keychainQuery:", v6));
        objc_release(v8);
        v14 = SecItemUpdate(v13, (CFDictionaryRef)v12);
        if ( v14 )
        {
          v15 = v14;
          if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
          {
            v16 = 138412546;
            *(_QWORD *)v17 = v6;
            *(_WORD *)&v17[8] = 1024;
            *(_DWORD *)&v17[10] = v15;
            _os_log_impl(
              (void *)&_mh_execute_header,
              (os_log_t)&_os_log_default,
              OS_LOG_TYPE_DEFAULT,
              "Failed to update keychain item %@. Error %d",
              (uint8_t *)&v16,
              0x12u);
          }
        }
        objc_release(v12);
        v8 = v13;
      }
      else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
      {
        v16 = 67109378;
        *(_DWORD *)v17 = v11;
        *(_WORD *)&v17[4] = 2112;
        *(_QWORD *)&v17[6] = v6;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_DEFAULT,
          "Error %d checking for existence of keychain item %@",
          (uint8_t *)&v16,
          0x12u);
      }
    }
    objc_release(v9);
  }
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
}