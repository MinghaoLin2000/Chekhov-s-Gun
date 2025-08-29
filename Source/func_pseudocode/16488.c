_getAccessoryDatabaseKeyForAccessoryID
id __fastcall getAccessoryDatabaseKeyForAccessoryID(void *a1)
{
  id v1; // x19
  void *v2; // x21
  void *v3; // x20
  void *v4; // x21
  id v5; // x21
  void *v6; // x23
  void *v7; // x24
  void *v8; // x22
  id v9; // x24
  id v10; // x23
  id v11; // x23
  void *v12; // x24
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "modelNumber"));
  v3 = objc_retainAutoreleasedReturnValue(
         +[UARPSupportedAccessory findByAppleModelNumber:](
           &OBJC_CLASS___UARPSupportedAccessory,
           "findByAppleModelNumber:",
           v2));
  objc_release(v2);
  if ( (unsigned int)objc_msgSend(v3, "supportsInternalSettings")
    && (v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "serialNumber")), objc_release(v4), v4) )
  {
    v5 = objc_retainAutoreleasedReturnValue(+[AUDeveloperSettingsDatabase sharedDatabase](&OBJC_CLASS___AUDeveloperSettingsDatabase, "sharedDatabase"));
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "accessoriesDictionary"));
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "serialNumber"));
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKey:", v7));
    objc_release(v7);
    objc_release(v6);
    if ( v8 )
    {
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "serialNumber"));
    }
    else
    {
      v11 = objc_retainAutoreleasedReturnValue(findPartnerSerialNumberForAccessory(v1));
      v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "accessoriesDictionary"));
      v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectForKey:", v11));
      objc_release(v12);
      if ( v8 )
        v9 = objc_retain(v11);
      else
        v9 = 0LL;
      objc_release(v11);
    }
    v10 = objc_retain(v9);
    objc_release(v8);
    objc_release(v5);
    objc_release(v10);
  }
  else
  {
    v10 = 0LL;
  }
  objc_release(v3);
  objc_release(v1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}