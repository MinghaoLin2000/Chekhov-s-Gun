-[DeviceSettingsCalendarsViewController loadModel]
void __cdecl -[DeviceSettingsCalendarsViewController loadModel](DeviceSettingsCalendarsViewController *self, SEL a2)
{
  void *v3; // x20
  void *v4; // x21
  AMPDeviceSyncPrefs *v5; // x23
  void *v6; // x19
  void *v7; // x0
  void *v8; // x23
  __int64 v9; // x27
  __int64 v10; // x28
  void *i; // x22
  __int64 v12; // x24
  NSNumber *v13; // x25
  DeviceSettingsNode *v14; // x24
  id v15; // x23
  NSMutableDictionary *v16; // x22
  NSMutableDictionary *v17; // x22
  DeviceSettingsCalendarsViewController *v18; // [xsp+8h] [xbp-138h]
  __int128 v19; // [xsp+10h] [xbp-130h] BYREF
  __int128 v20; // [xsp+20h] [xbp-120h]
  __int128 v21; // [xsp+30h] [xbp-110h]
  __int128 v22; // [xsp+40h] [xbp-100h]
  objc_super v23; // [xsp+50h] [xbp-F0h] BYREF
  _BYTE v24[128]; // [xsp+60h] [xbp-E0h] BYREF

  v23.receiver = self;
  v23.super_class = (Class)&OBJC_CLASS___DeviceSettingsCalendarsViewController;
  -[DeviceSettingsViewController loadModel](&v23, "loadModel");
  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v19 = 0u;
  v20 = 0u;
  v21 = 0u;
  v22 = 0u;
  v18 = self;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v6 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs calendarNames](v5, "calendarNames"));
  objc_release(v5);
  v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v19, v24, 16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = 0LL;
    v10 = *(_QWORD *)v20;
    do
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v20 != v10 )
          objc_enumerationMutation(v6);
        v12 = *(_QWORD *)(*((_QWORD *)&v19 + 1) + 8LL * (_QWORD)i);
        v13 = objc_retainAutoreleasedReturnValue(
                +[NSNumber numberWithUnsignedLongLong:](
                  &OBJC_CLASS___NSNumber,
                  "numberWithUnsignedLongLong:",
                  (char *)i + v9));
        v14 = objc_retainAutoreleasedReturnValue(
                +[DeviceSettingsNode nodeWithName:children:persistentID:](
                  &OBJC_CLASS___DeviceSettingsNode,
                  "nodeWithName:children:persistentID:",
                  v12,
                  0LL,
                  v13));
        objc_msgSend(v3, "addObject:", v14);
        objc_msgSend(v4, "setObject:forKeyedSubscript:", v14, v13);
        objc_release(v14);
        objc_release(v13);
      }
      v8 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v19, v24, 16LL);
      v9 += (__int64)i;
    }
    while ( v8 );
  }
  objc_release(v6);
  v15 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode defaultNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "defaultNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v15,
    v3);
  objc_release(v15);
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](v18, "dataNodes"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v16, "setObject:forKeyedSubscript:", v3, CFSTR("Calendars"));
  objc_release(v16);
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](v18, "dataNodesLookup"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v17, "setObject:forKeyedSubscript:", v4, CFSTR("Calendars"));
  objc_release(v17);
  -[DeviceSettingsCalendarsViewController loadCheckedItemsModel](v18, "loadCheckedItemsModel");
  objc_release(v4);
  objc_release(v3);
}