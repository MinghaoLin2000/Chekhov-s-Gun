-[SPCloudStorageHelper fetchStatesForServicesWithIdentifiers:completionHandler:]
void __cdecl -[SPCloudStorageHelper fetchStatesForServicesWithIdentifiers:completionHandler:](
        SPCloudStorageHelper *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x20
  void (__fastcall **v7)(id, _QWORD, void *); // x21
  id v8; // x23
  void *v9; // x0
  void *v10; // x26
  __int64 v11; // x19
  void *i; // x21
  void *v13; // x20
  id v14; // x24
  void *v15; // x28
  id v16; // x24
  unsigned __int8 v17; // w27
  const __CFString *v18; // x2
  __int64 v19; // x24
  void *v20; // x24
  unsigned int v21; // w27
  bool v22; // zf
  void *v23; // x27
  NSNumber *v24; // x24
  void *v25; // x19
  void (__fastcall **v26)(id, _QWORD, void *); // [xsp+8h] [xbp-168h]
  id v27; // [xsp+10h] [xbp-160h]
  __int64 v28; // [xsp+30h] [xbp-140h]
  id obj; // [xsp+40h] [xbp-130h]
  id v30; // [xsp+48h] [xbp-128h]
  __int128 v31; // [xsp+50h] [xbp-120h] BYREF
  __int128 v32; // [xsp+60h] [xbp-110h]
  __int128 v33; // [xsp+70h] [xbp-100h]
  __int128 v34; // [xsp+80h] [xbp-F0h]
  _BYTE v35[128]; // [xsp+90h] [xbp-E0h] BYREF

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, _QWORD, void *))objc_retain(a4);
  v30 = objc_retainAutoreleasedReturnValue(-[SPCloudStorageHelper currentiCloudAccount](self, "currentiCloudAccount"));
  if ( !v30 )
  {
    v25 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___NSError),
            "initWithDomain:code:userInfo:",
            CFSTR("SPCloudStorageHelperErrorDomain"),
            1LL,
            0LL);
    v7[2](v7, 0LL, v25);
    objc_release(v25);
    goto LABEL_27;
  }
  v26 = v7;
  v8 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
  v31 = 0u;
  v32 = 0u;
  v33 = 0u;
  v34 = 0u;
  v27 = v6;
  obj = objc_retain(v6);
  v9 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v31, v35, 16LL);
  if ( !v9 )
    goto LABEL_25;
  v10 = v9;
  v11 = *(_QWORD *)v32;
  v28 = ACAccountDataclassCloudPhotos;
  do
  {
    for ( i = 0LL; i != v10; i = (char *)i + 1 )
    {
      if ( *(_QWORD *)v32 != v11 )
        objc_enumerationMutation(obj);
      v13 = *(void **)(*((_QWORD *)&v31 + 1) + 8LL * (_QWORD)i);
      v14 = objc_retainAutoreleasedReturnValue(
              -[SPCloudStorageHelper underlyingServiceIdentifierForServiceIdentifier:](
                self,
                "underlyingServiceIdentifierForServiceIdentifier:",
                v13));
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v30, "serviceWithID:", v14));
      objc_release(v14);
      if ( !(unsigned int)objc_msgSend(v13, "isEqualToString:", CFSTR("SPCloudServiceIdentifieriCloudPhotoLibrary")) )
      {
        if ( !(unsigned int)objc_msgSend(
                              v13,
                              "isEqualToString:",
                              CFSTR("SPCloudServiceIdentifieriCloudDesktopAndDocuments")) )
        {
          v19 = 0LL;
          goto LABEL_23;
        }
        v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "valueForProperty:", CFSTR("iCloudHomeEnabled")));
        v21 = (unsigned int)objc_msgSend(v20, "boolValue");
        objc_release(v20);
        if ( (unsigned int)objc_msgSend(v15, "isEnabled") )
          v22 = v21 == 0;
        else
          v22 = 1;
        v18 = CFSTR("OptimzeStorage");
        if ( v22 )
        {
LABEL_17:
          v19 = 1LL;
          goto LABEL_23;
        }
LABEL_18:
        v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "valueForProperty:", v18));
        if ( (unsigned int)objc_msgSend(v23, "boolValue") )
          v19 = 3LL;
        else
          v19 = 2LL;
        objc_release(v23);
        goto LABEL_23;
      }
      v16 = objc_retainAutoreleasedReturnValue(-[SPCloudStorageHelper acAccount](self, "acAccount"));
      v17 = (unsigned __int8)objc_msgSend(v16, "isEnabledForDataclass:", v28);
      objc_release(v16);
      if ( !(unsigned int)objc_msgSend(v15, "isEnabled") )
        goto LABEL_17;
      v18 = CFSTR("MSHasThunbnailsOnly");
      v19 = 1LL;
      if ( (v17 & 1) != 0 )
        goto LABEL_18;
LABEL_23:
      v24 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", v19));
      objc_msgSend(v8, "setObject:forKeyedSubscript:", v24, v13);
      objc_release(v24);
      objc_release(v15);
    }
    v10 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v31, v35, 16LL);
  }
  while ( v10 );
LABEL_25:
  objc_release(obj);
  v7 = v26;
  ((void (__fastcall **)(id, id, void *))v26)[2](v26, v8, 0LL);
  objc_release(v8);
  v6 = v27;
LABEL_27:
  objc_release(v30);
  objc_release(v7);
  objc_release(v6);
}