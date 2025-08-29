-[DeviceFileSharingViewController deleteItems:]
void __cdecl -[DeviceFileSharingViewController deleteItems:](DeviceFileSharingViewController *self, SEL a2, id a3)
{
  id v3; // x21
  NSProgress *v4; // x19
  AMPDevicesClient *v5; // x22
  AMPDevice *v6; // x23
  void *v7; // x24
  void *v8; // x22
  void *i; // x20
  void *v10; // x28
  void *v11; // x27
  NSBundle *v12; // x25
  NSString *v13; // x26
  void *v14; // x24
  NSString *v15; // x21
  AMPDevicesClient *v16; // x21
  AMPDevicesClient *v17; // x22
  AMPDevice *v18; // x20
  void *v19; // x21
  id obj; // [xsp+8h] [xbp-198h]
  __int64 v21; // [xsp+18h] [xbp-188h]
  __int64 v22; // [xsp+20h] [xbp-180h]
  _QWORD v24[5]; // [xsp+30h] [xbp-170h] BYREF
  id v25; // [xsp+58h] [xbp-148h]
  id v26; // [xsp+60h] [xbp-140h] BYREF
  id location; // [xsp+68h] [xbp-138h] BYREF
  __int128 v28; // [xsp+70h] [xbp-130h] BYREF
  __int128 v29; // [xsp+80h] [xbp-120h]
  __int128 v30; // [xsp+90h] [xbp-110h]
  __int128 v31; // [xsp+A0h] [xbp-100h]
  _BYTE v32[128]; // [xsp+B0h] [xbp-F0h] BYREF

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSProgress progressWithTotalUnitCount:](
           &OBJC_CLASS___NSProgress,
           "progressWithTotalUnitCount:",
           objc_msgSend(v3, "count")));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v7 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v6, "deviceIdentifier"));
  -[AMPDevicesClient didStartFileSharingOperationForDeviceWithIdentifier:withProgress:](
    v5,
    "didStartFileSharingOperationForDeviceWithIdentifier:withProgress:",
    v7,
    v4);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  v30 = 0u;
  v31 = 0u;
  v28 = 0u;
  v29 = 0u;
  obj = objc_retain(v3);
  v8 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v28, v32, 16LL);
  if ( v8 )
  {
    v22 = *(_QWORD *)v29;
    v21 = _NSProgressRemoteLocalizedDescriptionKey;
    do
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v29 != v22 )
          objc_enumerationMutation(obj);
        v10 = *(void **)(*((_QWORD *)&v28 + 1) + 8LL * (_QWORD)i);
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "url"));
        if ( v11 )
        {
          v12 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
          v13 = objc_retainAutoreleasedReturnValue(
                  -[NSBundle localizedStringForKey:value:table:](
                    v12,
                    "localizedStringForKey:value:table:",
                    CFSTR("Deleting “%@”…"),
                    &stru_1000BA220,
                    0LL));
          v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "name"));
          v15 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v13, v14));
          -[NSProgress setUserInfoObject:forKey:](v4, "setUserInfoObject:forKey:", v15, v21);
          objc_release(v15);
          objc_release(v14);
          objc_release(v13);
          objc_release(v12);
          objc_initWeak(&location, self);
          v16 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
          v24[0] = _NSConcreteStackBlock;
          v24[1] = 3254779904LL;
          v24[2] = sub_1000128AC;
          v24[3] = &unk_1000B8E78;
          objc_copyWeak(&v26, &location);
          v24[4] = v10;
          v25 = objc_retain(v11);
          -[AMPDevicesClient deleteItemAtURL:withReply:](v16, "deleteItemAtURL:withReply:", v25, v24);
          objc_release(v16);
          objc_release(v25);
          objc_destroyWeak(&v26);
          objc_destroyWeak(&location);
        }
        -[NSProgress setCompletedUnitCount:](
          v4,
          "setCompletedUnitCount:",
          (char *)-[NSProgress completedUnitCount](v4, "completedUnitCount") + 1);
        objc_release(v11);
      }
      v8 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v28, v32, 16LL);
    }
    while ( v8 );
  }
  objc_release(obj);
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v19 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v18, "deviceIdentifier"));
  -[AMPDevicesClient didCompleteFileSharingOperationForDeviceWithIdentifier:withError:](
    v17,
    "didCompleteFileSharingOperationForDeviceWithIdentifier:withError:",
    v19,
    0LL);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v4);
  objc_release(obj);
}