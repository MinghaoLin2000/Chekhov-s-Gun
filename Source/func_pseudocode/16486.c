_findPartnerSerialNumbersInDatabase
NSArray *__fastcall findPartnerSerialNumbersInDatabase(void *a1)
{
  id v1; // x20
  void *v2; // x21
  id v3; // x22
  void *v4; // x19
  id v5; // x21
  id v6; // x20
  NSArray *v7; // x22
  void **v9; // [xsp+0h] [xbp-50h] BYREF
  __int64 v10; // [xsp+8h] [xbp-48h]
  __int64 (__fastcall *v11)(int, id); // [xsp+10h] [xbp-40h]
  void *v12; // [xsp+18h] [xbp-38h]
  id v13; // [xsp+20h] [xbp-30h]
  id v14; // [xsp+28h] [xbp-28h]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v3 = objc_retainAutoreleasedReturnValue(+[AUDeveloperSettingsDatabase sharedDatabase](&OBJC_CLASS___AUDeveloperSettingsDatabase, "sharedDatabase"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "accessoriesDictionary"));
  objc_release(v3);
  v9 = _NSConcreteStackBlock;
  v10 = 3254779904LL;
  v11 = sub_1000105DC;
  v12 = &unk_1000317D8;
  v13 = v1;
  v14 = v2;
  v5 = objc_retain(v2);
  v6 = objc_retain(v1);
  objc_msgSend(v4, "enumerateKeysAndObjectsUsingBlock:", &v9);
  v7 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithArray:](&OBJC_CLASS___NSArray, "arrayWithArray:", v5, v9, v10, v11, v12));
  objc_release(v14);
  objc_release(v13);
  objc_release(v5);
  objc_release(v6);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}