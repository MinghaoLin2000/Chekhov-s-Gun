-[AUDeveloperSettingsDatabase accessoryNameForIdentifier:name:serialNumber:fusingType:]
void __cdecl -[AUDeveloperSettingsDatabase accessoryNameForIdentifier:name:serialNumber:fusingType:](
        AUDeveloperSettingsDatabase *self,
        SEL a2,
        id a3,
        id *a4,
        id *a5,
        unsigned __int64 *a6)
{
  void *v9; // x20
  void *v10; // x23
  void *v11; // x22
  void *v12; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "componentsSeparatedByString:", CFSTR("+")));
  if ( objc_msgSend(v9, "count") == (void *)3 )
  {
    if ( a6 )
    {
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectAtIndexedSubscript:", 0LL));
      *a6 = AUDeveloperSettingsAccessoryFusingStringToType();
      objc_release(v10);
    }
    if ( a5 )
    {
      v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectAtIndexedSubscript:", 1LL));
      *a5 = objc_autorelease(objc_msgSend(v11, "copy"));
      objc_release(v11);
    }
    if ( a4 )
    {
      v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectAtIndexedSubscript:", 2LL));
      *a4 = objc_autorelease(objc_msgSend(v12, "copy"));
      objc_release(v12);
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}