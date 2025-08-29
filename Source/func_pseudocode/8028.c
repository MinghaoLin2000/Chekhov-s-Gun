-[SPCloudStorageHelper optimizeServicesWithIdentifiers:completionHandler:]
void __cdecl -[SPCloudStorageHelper optimizeServicesWithIdentifiers:completionHandler:](
        SPCloudStorageHelper *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x20
  id v7; // x21
  void *v8; // x0
  void *v9; // x25
  __int64 v10; // x27
  void *i; // x21
  void *v12; // x19
  id v13; // x20
  void *v14; // x28
  unsigned __int8 v15; // w0
  const __CFString *v16; // x3
  unsigned int v17; // w0
  dispatch_time_t v18; // x19
  dispatch_queue_global_s *v19; // x20
  void *v20; // x19
  id v21; // [xsp+0h] [xbp-170h]
  id v22; // [xsp+8h] [xbp-168h]
  id obj; // [xsp+18h] [xbp-158h]
  id v24; // [xsp+20h] [xbp-150h]
  _QWORD block[4]; // [xsp+28h] [xbp-148h] BYREF
  id v26; // [xsp+48h] [xbp-128h]
  __int128 v27; // [xsp+50h] [xbp-120h] BYREF
  __int128 v28; // [xsp+60h] [xbp-110h]
  __int128 v29; // [xsp+70h] [xbp-100h]
  __int128 v30; // [xsp+80h] [xbp-F0h]
  _BYTE v31[128]; // [xsp+90h] [xbp-E0h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v24 = objc_retainAutoreleasedReturnValue(-[SPCloudStorageHelper currentiCloudAccount](self, "currentiCloudAccount"));
  if ( v24 )
  {
    v21 = v7;
    v22 = v6;
    v29 = 0u;
    v30 = 0u;
    v27 = 0u;
    v28 = 0u;
    obj = objc_retain(v6);
    v8 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v27, v31, 16LL);
    if ( v8 )
    {
      v9 = v8;
      v10 = *(_QWORD *)v28;
      do
      {
        for ( i = 0LL; i != v9; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v28 != v10 )
            objc_enumerationMutation(obj);
          v12 = *(void **)(*((_QWORD *)&v27 + 1) + 8LL * (_QWORD)i);
          v13 = objc_retainAutoreleasedReturnValue(
                  -[SPCloudStorageHelper underlyingServiceIdentifierForServiceIdentifier:](
                    self,
                    "underlyingServiceIdentifierForServiceIdentifier:",
                    v12,
                    v21));
          v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "serviceWithID:", v13));
          objc_release(v13);
          v15 = (unsigned __int8)objc_msgSend(
                                   v12,
                                   "isEqualToString:",
                                   CFSTR("SPCloudServiceIdentifieriCloudPhotoLibrary"));
          v16 = CFSTR("MSHasThunbnailsOnly");
          if ( (v15 & 1) != 0
            || (v17 = (unsigned int)objc_msgSend(
                                      v12,
                                      "isEqualToString:",
                                      CFSTR("SPCloudServiceIdentifieriCloudDesktopAndDocuments"),
                                      CFSTR("MSHasThunbnailsOnly")),
                v16 = CFSTR("OptimzeStorage"),
                v17) )
          {
            objc_msgSend(v14, "setValue:forProperty:", &__kCFBooleanTrue, v16);
          }
          objc_release(v14);
        }
        v9 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v27, v31, 16LL);
      }
      while ( v9 );
    }
    objc_release(obj);
    v18 = dispatch_time(0LL, 2000000000LL);
    v19 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(21LL, 0LL));
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100002B34;
    block[3] = &unk_100004208;
    v7 = v21;
    v26 = objc_retain(v21);
    dispatch_after(v18, v19, block);
    objc_release(v19);
    objc_release(v26);
    v6 = v22;
  }
  else
  {
    v20 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___NSError),
            "initWithDomain:code:userInfo:",
            CFSTR("SPCloudStorageHelperErrorDomain"),
            1LL,
            0LL);
    (*((void (__fastcall **)(id, void *))v7 + 2))(v7, v20);
    objc_release(v20);
  }
  objc_release(v24);
  objc_release(v7);
  objc_release(v6);
}