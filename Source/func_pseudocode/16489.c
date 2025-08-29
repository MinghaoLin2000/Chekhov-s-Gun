_isOTAUpdateDisabledForAccessoryID
void *__fastcall isOTAUpdateDisabledForAccessoryID(void *a1)
{
  id v1; // x19
  id v2; // x20
  void *v3; // x21
  void *v4; // x22
  void *v5; // x23
  void *v6; // x21

  v1 = objc_retainAutoreleasedReturnValue(getAccessoryDatabaseKeyForAccessoryID(a1));
  if ( v1 )
  {
    v2 = objc_retainAutoreleasedReturnValue(+[AUDeveloperSettingsDatabase sharedDatabase](&OBJC_CLASS___AUDeveloperSettingsDatabase, "sharedDatabase"));
    v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "accessoriesDictionary"));
    v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKey:", v1));
    objc_release(v3);
    if ( v4 )
    {
      v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("isOTADisabled")));
      v6 = objc_msgSend(v5, "boolValue");
      objc_release(v5);
      objc_release(v4);
    }
    else
    {
      v6 = 0LL;
    }
    objc_release(v2);
  }
  else
  {
    v6 = 0LL;
  }
  objc_release(v1);
  return v6;
}