-[SPCloudStorageHelper preflightEnableServicesWithIdentifiers:completionHandler:]
void __cdecl -[SPCloudStorageHelper preflightEnableServicesWithIdentifiers:completionHandler:](
        SPCloudStorageHelper *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  id v8; // x21
  void *v9; // x23
  id v10; // x23
  id v11; // x24
  void *v12; // x0
  void *v13; // x25
  __int64 v14; // x27
  void *i; // x28
  id v16; // x26
  id v17; // x24
  void *v18; // x0
  void *v19; // x22
  _QWORD v20[5]; // [xsp+0h] [xbp-150h] BYREF
  id v21; // [xsp+28h] [xbp-128h]
  __int128 v22; // [xsp+30h] [xbp-120h] BYREF
  __int128 v23; // [xsp+40h] [xbp-110h]
  __int128 v24; // [xsp+50h] [xbp-100h]
  __int128 v25; // [xsp+60h] [xbp-F0h]
  _BYTE v26[128]; // [xsp+70h] [xbp-E0h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[SPCloudStorageHelper currentiCloudAccount](self, "currentiCloudAccount"));
  if ( v8 )
  {
    if ( (unsigned int)objc_msgSend(v6, "containsObject:", CFSTR("SPCloudServiceIdentifieriCloudPhotoLibrary")) )
    {
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "serviceWithID:", CFSTR("com.apple.Dataclass.Photos")));
      objc_msgSend(v9, "setValue:forProperty:", &__kCFBooleanTrue, CFSTR("MSHasThunbnailsOnly"));
      objc_release(v9);
    }
    v10 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
    v22 = 0u;
    v23 = 0u;
    v24 = 0u;
    v25 = 0u;
    v11 = objc_retain(v6);
    v12 = objc_msgSend(v11, "countByEnumeratingWithState:objects:count:", &v22, v26, 16LL);
    if ( v12 )
    {
      v13 = v12;
      v14 = *(_QWORD *)v23;
      do
      {
        for ( i = 0LL; i != v13; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v23 != v14 )
            objc_enumerationMutation(v11);
          v16 = objc_retainAutoreleasedReturnValue(
                  -[SPCloudStorageHelper underlyingServiceIdentifierForServiceIdentifier:](
                    self,
                    "underlyingServiceIdentifierForServiceIdentifier:",
                    *(_QWORD *)(*((_QWORD *)&v22 + 1) + 8LL * (_QWORD)i)));
          objc_msgSend(v10, "addObject:", v16);
          objc_release(v16);
        }
        v13 = objc_msgSend(v11, "countByEnumeratingWithState:objects:count:", &v22, v26, 16LL);
      }
      while ( v13 );
    }
    objc_release(v11);
    v17 = objc_retainAutoreleasedReturnValue(-[SPCloudStorageHelper currentiCloudAccount](self, "currentiCloudAccount"));
    v20[0] = _NSConcreteStackBlock;
    v20[1] = 3254779904LL;
    v20[2] = sub_100001F3C;
    v20[3] = &unk_1000041A8;
    v20[4] = self;
    v21 = objc_retain(v7);
    objc_msgSend(v17, "preflightDSEEnable:withCompletionHandler:", v10, v20);
    objc_release(v17);
    objc_release(v21);
    v18 = v10;
  }
  else
  {
    v19 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___NSError),
            "initWithDomain:code:userInfo:",
            CFSTR("SPCloudStorageHelperErrorDomain"),
            1LL,
            0LL);
    (*((void (__fastcall **)(id, _QWORD, void *))v7 + 2))(v7, 0LL, v19);
    v18 = v19;
  }
  objc_release(v18);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
}