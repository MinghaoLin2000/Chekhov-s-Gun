-[SPCloudStorageHelper enableServicesWithIdentifiers:completionHandler:]
void __cdecl -[SPCloudStorageHelper enableServicesWithIdentifiers:completionHandler:](
        SPCloudStorageHelper *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  id v8; // x21
  id v9; // x23
  id v10; // x24
  void *v11; // x0
  void *v12; // x25
  __int64 v13; // x27
  void *i; // x28
  id v15; // x26
  id v16; // x24
  void *v17; // x0
  void *v18; // x22
  _QWORD v19[5]; // [xsp+0h] [xbp-150h] BYREF
  id v20; // [xsp+28h] [xbp-128h]
  __int128 v21; // [xsp+30h] [xbp-120h] BYREF
  __int128 v22; // [xsp+40h] [xbp-110h]
  __int128 v23; // [xsp+50h] [xbp-100h]
  __int128 v24; // [xsp+60h] [xbp-F0h]
  _BYTE v25[128]; // [xsp+70h] [xbp-E0h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[SPCloudStorageHelper currentiCloudAccount](self, "currentiCloudAccount"));
  if ( v8 )
  {
    v9 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
    v21 = 0u;
    v22 = 0u;
    v23 = 0u;
    v24 = 0u;
    v10 = objc_retain(v6);
    v11 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v21, v25, 16LL);
    if ( v11 )
    {
      v12 = v11;
      v13 = *(_QWORD *)v22;
      do
      {
        for ( i = 0LL; i != v12; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v22 != v13 )
            objc_enumerationMutation(v10);
          v15 = objc_retainAutoreleasedReturnValue(
                  -[SPCloudStorageHelper underlyingServiceIdentifierForServiceIdentifier:](
                    self,
                    "underlyingServiceIdentifierForServiceIdentifier:",
                    *(_QWORD *)(*((_QWORD *)&v21 + 1) + 8LL * (_QWORD)i)));
          objc_msgSend(v9, "addObject:", v15);
          objc_release(v15);
        }
        v12 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v21, v25, 16LL);
      }
      while ( v12 );
    }
    objc_release(v10);
    v16 = objc_retainAutoreleasedReturnValue(-[SPCloudStorageHelper currentiCloudAccount](self, "currentiCloudAccount"));
    v19[0] = _NSConcreteStackBlock;
    v19[1] = 3254779904LL;
    v19[2] = sub_100002558;
    v19[3] = &unk_1000041A8;
    v19[4] = self;
    v20 = objc_retain(v7);
    objc_msgSend(v16, "DSEEnable:withCompletionHandler:", v9, v19);
    objc_release(v16);
    objc_release(v20);
    v17 = v9;
  }
  else
  {
    v18 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___NSError),
            "initWithDomain:code:userInfo:",
            CFSTR("SPCloudStorageHelperErrorDomain"),
            1LL,
            0LL);
    (*((void (__fastcall **)(id, void *))v7 + 2))(v7, v18);
    v17 = v18;
  }
  objc_release(v17);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
}