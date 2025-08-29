-[DisplayMobileAssetUpdater build:isGreaterThan:]
bool __cdecl -[DisplayMobileAssetUpdater build:isGreaterThan:](DisplayMobileAssetUpdater *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  NSCharacterSet *v7; // x22
  void *v8; // x23
  void *v9; // x21
  NSCharacterSet *v10; // x23
  void *v11; // x24
  void *v12; // x22
  NSCharacterSet *v13; // x24
  void *v14; // x25
  void *v15; // x23
  NSCharacterSet *v16; // x25
  void *v17; // x26
  void *v18; // x24
  unsigned __int64 i; // x25
  void *v20; // x26
  void *v21; // x27
  void *v22; // x26
  void *v23; // x28
  void *v24; // x26
  void *v25; // x27
  void *v26; // x0
  bool v27; // w25

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet letterCharacterSet](&OBJC_CLASS___NSCharacterSet, "letterCharacterSet"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "componentsSeparatedByCharactersInSet:", v7));
  v9 = objc_msgSend(v8, "mutableCopy");
  objc_release(v8);
  objc_release(v7);
  v10 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet decimalDigitCharacterSet](&OBJC_CLASS___NSCharacterSet, "decimalDigitCharacterSet"));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "componentsSeparatedByCharactersInSet:", v10));
  v12 = objc_msgSend(v11, "mutableCopy");
  objc_release(v11);
  objc_release(v10);
  objc_msgSend(v9, "removeObjectsInArray:", &off_100021868);
  objc_msgSend(v12, "removeObjectsInArray:", &off_100021880);
  v13 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet letterCharacterSet](&OBJC_CLASS___NSCharacterSet, "letterCharacterSet"));
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "componentsSeparatedByCharactersInSet:", v13));
  v15 = objc_msgSend(v14, "mutableCopy");
  objc_release(v14);
  objc_release(v13);
  v16 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet decimalDigitCharacterSet](&OBJC_CLASS___NSCharacterSet, "decimalDigitCharacterSet"));
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "componentsSeparatedByCharactersInSet:", v16));
  v18 = objc_msgSend(v17, "mutableCopy");
  objc_release(v17);
  objc_release(v16);
  objc_msgSend(v15, "removeObjectsInArray:", &off_100021898);
  objc_msgSend(v18, "removeObjectsInArray:", &off_1000218B0);
  for ( i = 0LL; ; ++i )
  {
    if ( (unsigned __int64)objc_msgSend(v9, "count") <= i && (unsigned __int64)objc_msgSend(v15, "count") <= i
      || (unsigned __int64)objc_msgSend(v9, "count") <= i )
    {
LABEL_13:
      v27 = 0;
      goto LABEL_18;
    }
    if ( (unsigned __int64)objc_msgSend(v15, "count") <= i
      || (v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectAtIndexedSubscript:", i)),
          v21 = objc_msgSend(v20, "integerValue"),
          objc_release(v20),
          v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "objectAtIndexedSubscript:", i)),
          v23 = objc_msgSend(v22, "integerValue"),
          objc_release(v22),
          (__int64)v21 > (__int64)v23) )
    {
LABEL_14:
      v27 = 1;
      goto LABEL_18;
    }
    if ( (__int64)v21 < (__int64)v23 || (unsigned __int64)objc_msgSend(v12, "count") <= i )
      goto LABEL_13;
    if ( (unsigned __int64)objc_msgSend(v18, "count") <= i )
      goto LABEL_14;
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectAtIndexedSubscript:", i));
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "objectAtIndexedSubscript:", i));
    v26 = objc_msgSend(v24, "caseInsensitiveCompare:", v25);
    if ( v26 == (void *)1 )
    {
      v27 = 1;
      goto LABEL_17;
    }
    if ( v26 == (void *)-1LL )
      break;
    objc_release(v25);
    objc_release(v24);
  }
  v27 = 0;
LABEL_17:
  objc_release(v25);
  objc_release(v24);
LABEL_18:
  objc_release(v18);
  objc_release(v15);
  objc_release(v12);
  objc_release(v9);
  objc_release(v6);
  objc_release(v5);
  return v27;
}