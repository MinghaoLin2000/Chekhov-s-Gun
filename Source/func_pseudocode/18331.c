+[ATKeychainStore setObject:forKey:]
void __cdecl +[ATKeychainStore setObject:forKey:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  NSData *v8; // x21
  id v9; // x22
  void *v10; // x25
  id v11; // x23
  void *v12; // x24
  id v13; // x23
  id v14; // [xsp+8h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  void *v16; // [xsp+14h] [xbp-7Ch]
  __int16 v17; // [xsp+1Ch] [xbp-74h]
  id v18; // [xsp+1Eh] [xbp-72h]
  __int16 v19; // [xsp+26h] [xbp-6Ah]
  id v20; // [xsp+28h] [xbp-68h]
  __int16 v21; // [xsp+30h] [xbp-60h]
  void *v22; // [xsp+32h] [xbp-5Eh]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  if ( v6 )
  {
    v14 = 0LL;
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSKeyedArchiver archivedDataWithRootObject:requiringSecureCoding:error:](
             &OBJC_CLASS___NSKeyedArchiver,
             "archivedDataWithRootObject:requiringSecureCoding:error:",
             v6,
             1LL,
             &v14));
    v9 = objc_retain(v14);
    if ( v9 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
      {
        v10 = (void *)objc_opt_class(a1);
        v11 = objc_retain(v10);
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "description"));
        *(_DWORD *)buf = 138413058;
        v16 = v10;
        v17 = 2112;
        v18 = v7;
        v19 = 2112;
        v20 = v6;
        v21 = 2112;
        v22 = v12;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_DEFAULT,
          "[%@]: Error archiving data for key: %@ and value: %@. Error: %@",
          buf,
          0x2Au);
        objc_release(v12);
        objc_release(v11);
      }
    }
    else
    {
      v13 = objc_retain(a1);
      objc_sync_enter(v13);
      +[ATKeychainStore _writeDataToKeychain:andData:](
        &OBJC_CLASS___ATKeychainStore,
        "_writeDataToKeychain:andData:",
        v7,
        v8);
      objc_sync_exit(v13);
      objc_release(v13);
    }
    objc_release(v8);
    objc_release(v9);
  }
  else
  {
    +[ATKeychainStore _removeObjectForKey:](&OBJC_CLASS___ATKeychainStore, "_removeObjectForKey:", v7);
  }
  objc_release(v7);
  objc_release(v6);
}