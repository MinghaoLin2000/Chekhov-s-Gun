-[DeviceSettingsBooksViewController loadBookAndPDFProperties]
void __cdecl -[DeviceSettingsBooksViewController loadBookAndPDFProperties](
        DeviceSettingsBooksViewController *self,
        SEL a2)
{
  void *v3; // x19
  void *v4; // x20
  void *v5; // x22
  void *v6; // x23
  void *v7; // x25
  void *v8; // x0
  void *v9; // x26
  __int64 v10; // x24
  void *i; // x21
  void *v12; // x27
  void *v13; // x28
  void *v14; // x0
  void *v15; // x27
  void *v16; // x28
  void *v17; // x0
  id v18; // x27
  id v19; // x27
  ITLibrary *v20; // [xsp+0h] [xbp-130h]
  DeviceSettingsBooksViewController *v21; // [xsp+8h] [xbp-128h]
  __int128 v22; // [xsp+10h] [xbp-120h] BYREF
  __int128 v23; // [xsp+20h] [xbp-110h]
  __int128 v24; // [xsp+30h] [xbp-100h]
  __int128 v25; // [xsp+40h] [xbp-F0h]
  _BYTE v26[128]; // [xsp+50h] [xbp-E0h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v6 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v21 = self;
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
  v7 = objc_retainAutoreleasedReturnValue(
         -[ITLibrary allMediaItemsForMediaDomains:forMediaKinds:forDeviceCapabilities:](
           v20,
           "allMediaItemsForMediaDomains:forMediaKinds:forDeviceCapabilities:",
           8LL,
           98304LL,
           -[DeviceSettingsViewController deviceCapabilities](self, "deviceCapabilities")));
  v22 = 0u;
  v23 = 0u;
  v24 = 0u;
  v25 = 0u;
  v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v22, v26, 16LL);
  if ( v8 )
  {
    v9 = v8;
    v10 = *(_QWORD *)v23;
    do
    {
      for ( i = 0LL; i != v9; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v23 != v10 )
          objc_enumerationMutation(v7);
        v12 = *(void **)(*((_QWORD *)&v22 + 1) + 8LL * (_QWORD)i);
        v13 = objc_msgSend(v12, "mediaKind");
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "deviceSettingsNode"));
        v15 = v14;
        if ( v13 == (void *)20 )
        {
          objc_msgSend(v14, "setIsPDFBookMediaKind:", 1LL);
          objc_msgSend(v5, "addObject:", v15);
          v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "persistentID"));
          v17 = v6;
        }
        else
        {
          if ( v13 != (void *)19 )
            goto LABEL_11;
          objc_msgSend(v14, "setIsBookMediaKind:", 1LL);
          objc_msgSend(v3, "addObject:", v15);
          v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "persistentID"));
          v17 = v4;
        }
        objc_msgSend(v17, "setObject:forKeyedSubscript:", v15, v16);
        objc_release(v16);
LABEL_11:
        objc_release(v15);
      }
      v9 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v22, v26, 16LL);
    }
    while ( v9 );
  }
  v18 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode defaultNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "defaultNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v18,
    v3);
  objc_release(v18);
  v19 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode defaultNodeComparator](&OBJC_CLASS___DeviceSettingsNode, "defaultNodeComparator"));
  +[DeviceSettingsNode sortUsingComparator:nodes:](
    &OBJC_CLASS___DeviceSettingsNode,
    "sortUsingComparator:nodes:",
    v19,
    v5);
  objc_release(v19);
  -[DeviceSettingsBooksViewController setBookNodes:](v21, "setBookNodes:", v3);
  -[DeviceSettingsBooksViewController setBookNodesLookup:](v21, "setBookNodesLookup:", v4);
  -[DeviceSettingsBooksViewController setPdfNodes:](v21, "setPdfNodes:", v5);
  -[DeviceSettingsBooksViewController setPdfNodesLookup:](v21, "setPdfNodesLookup:", v6);
  objc_release(v7);
  objc_release(v20);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
}