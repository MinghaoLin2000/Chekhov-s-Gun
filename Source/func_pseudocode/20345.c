-[PKiCloudDataController log_iCloudPrinters]
id __cdecl -[PKiCloudDataController log_iCloudPrinters](PKiCloudDataController *self, SEL a2)
{
  void *v3; // x21
  void *v4; // x19
  void *v5; // x23
  __int64 v6; // x24
  __int64 v7; // x25
  void *i; // x20
  void *v9; // x22
  void *v10; // x21
  void *v11; // x19
  __CFString *v12; // x21
  void *v13; // x28
  void *v14; // x26
  NSString *v15; // x22
  id v17; // [xsp+18h] [xbp-1C8h]
  id obj; // [xsp+20h] [xbp-1C0h]
  __int64 v19; // [xsp+38h] [xbp-1A8h]
  NSMutableArray *v20; // [xsp+40h] [xbp-1A0h]
  id v21; // [xsp+48h] [xbp-198h]
  _QWORD v22[6]; // [xsp+50h] [xbp-190h] BYREF
  __int64 v23; // [xsp+80h] [xbp-160h] BYREF
  __int64 *v24; // [xsp+88h] [xbp-158h]
  __int64 v25; // [xsp+90h] [xbp-150h]
  __int64 (__fastcall *v26)(); // [xsp+98h] [xbp-148h]
  __int64 (__fastcall *v27)(); // [xsp+A0h] [xbp-140h]
  id v28; // [xsp+A8h] [xbp-138h]
  __int128 v29; // [xsp+B0h] [xbp-130h] BYREF
  __int128 v30; // [xsp+C0h] [xbp-120h]
  __int128 v31; // [xsp+D0h] [xbp-110h]
  __int128 v32; // [xsp+E0h] [xbp-100h]
  _BYTE v33[128]; // [xsp+F0h] [xbp-F0h] BYREF
  __int64 vars8; // [xsp+1E8h] [xbp+8h]

  v20 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
  v21 = objc_retainAutoreleasedReturnValue((id)liteGetPrintersForCurrentNetwork());
  v17 = objc_retainAutoreleasedReturnValue(-[PKiCloudDataController getiCloudPrintersList](self, "getiCloudPrintersList"));
  v3 = objc_msgSend(v17, "count");
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "networkName"));
  NSLog(&CFSTR("************************** log_iCloudPrinters numPrinters:%ld, Network '%@'").isa, v3, v4);
  objc_release(v4);
  v31 = 0u;
  v32 = 0u;
  v29 = 0u;
  v30 = 0u;
  obj = objc_retain(v17);
  v5 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v29, v33, 16LL);
  if ( v5 )
  {
    v19 = *(_QWORD *)v30;
    v6 = PKPrinterDisplayNameKey;
    v7 = PKPrinterUUIDKey;
    do
    {
      for ( i = 0LL; i != v5; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v30 != v19 )
          objc_enumerationMutation(obj);
        v9 = *(void **)(*((_QWORD *)&v29 + 1) + 8LL * (_QWORD)i);
        v23 = 0LL;
        v24 = &v23;
        v25 = 0x3032000000LL;
        v26 = sub_1000466AC;
        v27 = sub_1000466BC;
        v28 = 0LL;
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "printers"));
        v22[0] = _NSConcreteStackBlock;
        v22[1] = 3254779904LL;
        v22[2] = sub_1000466C4;
        v22[3] = &unk_10009EF38;
        v22[4] = v9;
        v22[5] = &v23;
        objc_msgSend(v10, "enumerateObjectsUsingBlock:", v22);
        objc_release(v10);
        if ( v24[5] )
        {
          v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "networkName"));
          v12 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR(" (on '%@')"), v11));
          objc_release(v11);
        }
        else
        {
          v12 = &stru_1000A0688;
        }
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", v6));
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", v7));
        v15 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("%@ UUID:%@%@"),
                  v13,
                  v14,
                  v12));
        objc_release(v14);
        objc_release(v13);
        -[NSMutableArray addObject:](v20, "addObject:", v15);
        NSLog(&CFSTR("**************************      %@").isa, v15);
        objc_release(v15);
        objc_release(v12);
        _Block_object_dispose(&v23, 8);
        objc_release(v28);
      }
      v5 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v29, v33, 16LL);
    }
    while ( v5 );
  }
  objc_release(obj);
  objc_release(obj);
  objc_release(v21);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v20);
}