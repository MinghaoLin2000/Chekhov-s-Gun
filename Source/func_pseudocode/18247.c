-[INHService loadSchemaURLsWithCompletion:]
void __cdecl -[INHService loadSchemaURLsWithCompletion:](INHService *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x21
  void *v6; // x22
  id v7; // x21
  void *v8; // x22
  id v9; // x21
  void *v10; // x23
  NSSet *v11; // x24
  void *v12; // x22
  void *v13; // x23
  void **v14; // [xsp+0h] [xbp-90h] BYREF
  __int64 v15; // [xsp+8h] [xbp-88h]
  __int64 (__fastcall *v16)(int, id); // [xsp+10h] [xbp-80h]
  void *v17; // [xsp+18h] [xbp-78h]
  id v18; // [xsp+20h] [xbp-70h]
  _QWORD v19[4]; // [xsp+28h] [xbp-68h] BYREF
  id v20; // [xsp+48h] [xbp-48h]

  v4 = objc_retain(a3);
  v5 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
  v6 = objc_retainAutoreleasedReturnValue(+[LSApplicationWorkspace defaultWorkspace](&OBJC_CLASS___LSApplicationWorkspace, "defaultWorkspace"));
  v19[0] = _NSConcreteStackBlock;
  v19[1] = 3254779904LL;
  v19[2] = sub_1000054B4;
  v19[3] = &unk_100008250;
  v7 = objc_retain(v5);
  v20 = v7;
  objc_msgSend(v6, "enumerateBundlesOfType:block:", 1LL, v19);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(+[LSApplicationWorkspace defaultWorkspace](&OBJC_CLASS___LSApplicationWorkspace, "defaultWorkspace"));
  v14 = _NSConcreteStackBlock;
  v15 = 3254779904LL;
  v16 = sub_1000054C0;
  v17 = &unk_100008250;
  v9 = objc_retain(v7);
  v18 = v9;
  objc_msgSend(v8, "enumerateBundlesOfType:block:", 6LL, &v14);
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "if_compactMap:", &stru_1000082A0, v14, v15, v16, v17));
  v11 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v10));
  v12 = -[NSSet mutableCopy](v11, "mutableCopy");
  objc_release(v11);
  objc_release(v10);
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)_INVCIntentDefinitionManagerClass(), "allBundleIdentifiers"));
  if ( v13 )
    objc_msgSend(v12, "addObjectsFromArray:", v13);
  -[INHService loadSchemaURLsForBundleIdentifiers:completion:](
    self,
    "loadSchemaURLsForBundleIdentifiers:completion:",
    v12,
    v4);
  objc_release(v13);
  objc_release(v12);
  objc_release(v18);
  objc_release(v20);
  objc_release(v9);
  objc_release(v4);
}