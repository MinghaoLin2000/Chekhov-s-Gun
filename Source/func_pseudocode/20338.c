-[PKiCloudDataController addPrinterToiCloudWithInfo:]
void __cdecl -[PKiCloudDataController addPrinterToiCloudWithInfo:](PKiCloudDataController *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  id v6; // x23
  void *v7; // x21
  id v8; // x23
  void *v9; // x25
  void *v10; // x24
  id v11; // x25
  _QWORD v12[4]; // [xsp+8h] [xbp-68h] BYREF
  id v13; // [xsp+28h] [xbp-48h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", PKPrinterUUIDKey));
  v6 = objc_retainAutoreleasedReturnValue(-[PKiCloudDataController getiCloudPrintersList](self, "getiCloudPrintersList"));
  v7 = objc_msgSend(v6, "mutableCopy");
  objc_release(v6);
  if ( !v7 )
    v7 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_100045068;
  v12[3] = &unk_10009EEA8;
  v8 = objc_retain(v5);
  v13 = v8;
  v9 = objc_msgSend(v7, "indexOfObjectPassingTest:", v12);
  if ( v9 == (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectAtIndex:", v9));
    objc_msgSend(v7, "removeObjectAtIndex:", v9);
  }
  v11 = objc_retainAutoreleasedReturnValue(
          -[PKiCloudDataController createiCloudPrinterInfo:newPrinterInfo:](
            self,
            "createiCloudPrinterInfo:newPrinterInfo:",
            v10,
            v4));
  if ( v11 )
    objc_msgSend(v7, "insertObject:atIndex:", v11, 0LL);
  -[PKiCloudDataController setiCloudPrintersList:](self, "setiCloudPrintersList:", v7);
  objc_release(v11);
  objc_release(v10);
  objc_release(v13);
  objc_release(v7);
  objc_release(v8);
  objc_release(v4);
}