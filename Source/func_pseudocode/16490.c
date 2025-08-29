_dropboxFileUpdateForAccessoryID
void __fastcall dropboxFileUpdateForAccessoryID(void *a1, id a2)
{
  id v3; // x19
  id v4; // x20
  id v5; // x21
  void *v6; // x23
  void *v7; // x22
  NSMutableDictionary *v8; // x23
  NSDictionary *v9; // x24
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retain(a2);
  v4 = objc_retainAutoreleasedReturnValue(getAccessoryDatabaseKeyForAccessoryID(a1));
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(+[AUDeveloperSettingsDatabase sharedDatabase](&OBJC_CLASS___AUDeveloperSettingsDatabase, "sharedDatabase"));
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "accessoriesDictionary"));
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKey:", v4));
    objc_release(v6);
    if ( v7 )
    {
      v8 = objc_retainAutoreleasedReturnValue(
             +[NSMutableDictionary dictionaryWithDictionary:](
               &OBJC_CLASS___NSMutableDictionary,
               "dictionaryWithDictionary:",
               v7));
      -[NSMutableDictionary setObject:forKeyedSubscript:](
        v8,
        "setObject:forKeyedSubscript:",
        v3,
        CFSTR("dropboxVersion"));
      v9 = objc_retainAutoreleasedReturnValue(+[NSDictionary dictionaryWithDictionary:](&OBJC_CLASS___NSDictionary, "dictionaryWithDictionary:", v8));
      objc_msgSend(v5, "addAccessoryWithSerialNumber:info:", v4, v9);
      objc_release(v9);
      objc_release(v8);
    }
    objc_release(v7);
    objc_release(v5);
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}