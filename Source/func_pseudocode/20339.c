-[PKiCloudDataController removePrinterFromiCloudWithInfo:]
void __cdecl -[PKiCloudDataController removePrinterFromiCloudWithInfo:](PKiCloudDataController *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  id v6; // x23
  void *v7; // x22
  id v8; // x23
  void *v9; // x2
  _QWORD v10[4]; // [xsp+8h] [xbp-58h] BYREF
  id v11; // [xsp+28h] [xbp-38h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", PKPrinterUUIDKey));
  v6 = objc_retainAutoreleasedReturnValue(-[PKiCloudDataController getiCloudPrintersList](self, "getiCloudPrintersList"));
  v7 = objc_msgSend(v6, "mutableCopy");
  objc_release(v6);
  if ( !v7 )
    v7 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_10004526C;
  v10[3] = &unk_10009EEA8;
  v8 = objc_retain(v5);
  v11 = v8;
  v9 = objc_msgSend(v7, "indexOfObjectPassingTest:", v10);
  if ( v9 != (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    objc_msgSend(v7, "removeObjectAtIndex:", v9);
    -[PKiCloudDataController setiCloudPrintersList:](self, "setiCloudPrintersList:", v7);
  }
  objc_release(v11);
  objc_release(v7);
  objc_release(v8);
  objc_release(v4);
}