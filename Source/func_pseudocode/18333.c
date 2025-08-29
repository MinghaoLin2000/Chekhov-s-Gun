+[ATKeychainStore _readDataFromKeychain:error:]
id __cdecl +[ATKeychainStore _readDataFromKeychain:error:](id a1, SEL a2, id a3, id *a4)
{
  id v6; // x19
  void *v7; // x21
  OSStatus v8; // w22
  void *v9; // x23
  _BOOL4 v10; // w0
  const char *v11; // x3
  uint32_t v12; // w5
  CFTypeRef result; // [xsp+8h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-50h] BYREF
  id v16; // [xsp+14h] [xbp-4Ch]
  __int16 v17; // [xsp+1Ch] [xbp-44h]
  id v18; // [xsp+1Eh] [xbp-42h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "_keychainQuery:", v6));
  objc_msgSend(v7, "setObject:forKeyedSubscript:", kCFBooleanTrue, kSecReturnData);
  result = 0LL;
  v8 = SecItemCopyMatching((CFDictionaryRef)v7, &result);
  if ( !v8 )
  {
    v9 = (void *)result;
    if ( result )
      goto LABEL_11;
  }
  v10 = os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT);
  if ( v8 == -25300 )
  {
    if ( !v10 )
      goto LABEL_9;
    *(_DWORD *)buf = 138412290;
    v16 = v6;
    v11 = "No previous keychain records found for key %@.";
    v12 = 12;
  }
  else
  {
    if ( !v10 )
      goto LABEL_9;
    *(_DWORD *)buf = 134218242;
    v16 = (id)v8;
    v17 = 2112;
    v18 = v6;
    v11 = "Error %ld retrieving secure data for key %@";
    v12 = 22;
  }
  _os_log_impl((void *)&_mh_execute_header, (os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT, v11, buf, v12);
LABEL_9:
  v9 = 0LL;
  if ( a4 )
    *a4 = objc_autorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("ATKeychainStoreErrorDomain"),
                v8,
                0LL)));
LABEL_11:
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}