-[DeviceStorageManagementViewController deleteTracksForMediaItems:]
void __cdecl -[DeviceStorageManagementViewController deleteTracksForMediaItems:](
        DeviceStorageManagementViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  ITLibrary *v5; // x21
  _UNKNOWN **v6; // x22
  _UNKNOWN **v7; // x21
  void *v8; // x22
  void *v9; // x0
  void *v10; // x24
  __int64 v11; // x27
  __int64 v12; // x28
  __int64 v13; // x20
  void *i; // x23
  void *v15; // x26
  NSDictionary *v16; // x25
  AMPDevicesClient *v17; // x23
  AMPDevice *v18; // x20
  DeviceStorageManagementViewController *v19; // [xsp+28h] [xbp-138h]
  id obj; // [xsp+38h] [xbp-128h]
  __int128 v21; // [xsp+40h] [xbp-120h] BYREF
  __int128 v22; // [xsp+50h] [xbp-110h]
  __int128 v23; // [xsp+60h] [xbp-100h]
  __int128 v24; // [xsp+70h] [xbp-F0h]
  _BYTE v25[128]; // [xsp+80h] [xbp-E0h] BYREF

  v4 = objc_retain(a3);
  if ( objc_msgSend(v4, "count") )
  {
    v19 = self;
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itDeviceLibrary](self, "itDeviceLibrary"));
    v6 = objc_retainAutoreleasedReturnValue(-[ITLibrary persistentID](v5, "persistentID"));
    objc_release(v5);
    if ( v6 )
      v7 = v6;
    else
      v7 = &off_1000BEFD0;
    v8 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    v21 = 0u;
    v22 = 0u;
    v23 = 0u;
    v24 = 0u;
    obj = objc_retain(v4);
    v9 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v21, v25, 16LL);
    if ( v9 )
    {
      v10 = v9;
      v11 = *(_QWORD *)v22;
      v12 = AMPDeviceObjectLibraryIDKey;
      v13 = AMPDeviceObjectTrackIDKey;
      do
      {
        for ( i = 0LL; i != v10; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v22 != v11 )
            objc_enumerationMutation(obj);
          v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v21 + 1) + 8LL * (_QWORD)i), "persistentID"));
          v16 = objc_retainAutoreleasedReturnValue(
                  +[NSDictionary dictionaryWithObjectsAndKeys:](
                    &OBJC_CLASS___NSDictionary,
                    "dictionaryWithObjectsAndKeys:",
                    v7,
                    v12,
                    v15,
                    v13,
                    0LL));
          objc_msgSend(v8, "addObject:", v16);
          objc_release(v16);
          objc_release(v15);
        }
        v10 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v21, v25, 16LL);
      }
      while ( v10 );
    }
    objc_release(obj);
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](v19, "devicesClient"));
    v18 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](v19, "device"));
    -[AMPDevicesClient deleteObjects:fromDevice:withReply:](
      v17,
      "deleteObjects:fromDevice:withReply:",
      v8,
      v18,
      &stru_1000B9240);
    objc_release(v18);
    objc_release(v17);
    objc_release(v8);
    objc_release(v7);
  }
  objc_release(v4);
}