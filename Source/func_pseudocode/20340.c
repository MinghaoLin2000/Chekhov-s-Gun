-[PKiCloudDataController updateiCloudPrinter:newDisplayName:]
void __cdecl -[PKiCloudDataController updateiCloudPrinter:newDisplayName:](
        PKiCloudDataController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  void *v8; // x21
  id v9; // x24
  void *v10; // x22
  id v11; // x24
  void *v12; // x26
  void *v13; // x27
  void *v14; // x25
  _QWORD v15[4]; // [xsp+8h] [xbp-78h] BYREF
  id v16; // [xsp+28h] [xbp-58h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", PKPrinterUUIDKey));
  v9 = objc_retainAutoreleasedReturnValue(-[PKiCloudDataController getiCloudPrintersList](self, "getiCloudPrintersList"));
  v10 = objc_msgSend(v9, "mutableCopy");
  objc_release(v9);
  if ( !v10 )
    v10 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 3254779904LL;
  v15[2] = sub_10004551C;
  v15[3] = &unk_10009EEA8;
  v11 = objc_retain(v8);
  v16 = v11;
  v12 = objc_msgSend(v10, "indexOfObjectPassingTest:", v15);
  if ( v12 != (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectAtIndex:", v12));
    v14 = objc_msgSend(v13, "mutableCopy");
    objc_release(v13);
    objc_msgSend(v10, "removeObjectAtIndex:", v12);
    objc_msgSend(v14, "setObject:forKeyedSubscript:", v7, PKPrinterDisplayNameKey);
    objc_msgSend(v10, "insertObject:atIndex:", v14, 0LL);
    -[PKiCloudDataController setiCloudPrintersList:](self, "setiCloudPrintersList:", v10);
    objc_release(v14);
  }
  objc_release(v16);
  objc_release(v10);
  objc_release(v11);
  objc_release(v7);
  objc_release(v6);
}