-[DeviceAutofillPlacardViewController loadAutofillPopUpButton]
void __cdecl -[DeviceAutofillPlacardViewController loadAutofillPopUpButton](
        DeviceAutofillPlacardViewController *self,
        SEL a2)
{
  NSPopUpButton *v3; // x19
  ITLibrary *v4; // x19
  AutofillMenuItem *v5; // x21
  NSBundle *v6; // x22
  NSString *v7; // x24
  AutofillMenuItem *v8; // x21
  id v9; // x22
  NSPopUpButton *v10; // x22
  NSMenu *v11; // x23
  NSPopUpButton *v12; // x22
  NSMenu *v13; // x23
  NSMenuItem *v14; // x24
  void *v15; // x22
  AutofillNode *v16; // x23
  AMPDeviceAutoFillPrefs *v17; // x24
  void *v18; // x25
  NSNumber *v19; // x26
  void *v20; // x27
  NSPopUpButton *v21; // x24
  void *v22; // x25
  id v23; // x24
  id v24; // x24
  void *v25; // x0
  void *v26; // x25
  __int64 v27; // x26
  void *v28; // x27
  __int128 v29; // [xsp+0h] [xbp-120h] BYREF
  __int128 v30; // [xsp+10h] [xbp-110h]
  __int128 v31; // [xsp+20h] [xbp-100h]
  __int128 v32; // [xsp+30h] [xbp-F0h]
  _BYTE v33[128]; // [xsp+40h] [xbp-E0h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController autofillPopUpButton](self, "autofillPopUpButton"));
  -[NSPopUpButton removeAllItems](v3, "removeAllItems");
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController itLibrary](self, "itLibrary"));
  v5 = objc_alloc(&OBJC_CLASS___AutofillMenuItem);
  v6 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v7 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v6,
           "localizedStringForKey:value:table:",
           CFSTR("Music"),
           &stru_1000BA220,
           0LL));
  v8 = -[AutofillMenuItem initWithTitle:action:keyEquivalent:](
         v5,
         "initWithTitle:action:keyEquivalent:",
         v7,
         0LL,
         &stru_1000BA220);
  objc_release(v7);
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(+[NSImage glyphImageNamed:](&OBJC_CLASS___NSImage, "glyphImageNamed:", CFSTR("music")));
  -[AutofillMenuItem setImage:](v8, "setImage:", v9);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController autofillPopUpButton](self, "autofillPopUpButton"));
  v11 = objc_retainAutoreleasedReturnValue(-[NSPopUpButton menu](v10, "menu"));
  -[NSMenu addItem:](v11, "addItem:", v8);
  objc_release(v11);
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController autofillPopUpButton](self, "autofillPopUpButton"));
  v13 = objc_retainAutoreleasedReturnValue(-[NSPopUpButton menu](v12, "menu"));
  v14 = objc_retainAutoreleasedReturnValue(+[NSMenuItem separatorItem](&OBJC_CLASS___NSMenuItem, "separatorItem"));
  -[NSMenu addItem:](v13, "addItem:", v14);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  v15 = objc_retainAutoreleasedReturnValue(-[ITLibrary playlistWithDistinguishedKind:](v4, "playlistWithDistinguishedKind:", 3LL));
  v16 = objc_retainAutoreleasedReturnValue(+[AutofillNode nodeWithPlaylist:](&OBJC_CLASS___AutofillNode, "nodeWithPlaylist:", v15));
  -[AutofillMenuItem setNode:](v8, "setNode:", v16);
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController autoFillPrefs](self, "autoFillPrefs"));
  v18 = -[AMPDeviceAutoFillPrefs autoFillSourcePlaylistID](v17, "autoFillSourcePlaylistID");
  v19 = objc_retainAutoreleasedReturnValue(-[AutofillNode persistentID](v16, "persistentID"));
  v20 = -[NSNumber unsignedLongLongValue](v19, "unsignedLongLongValue");
  objc_release(v19);
  objc_release(v17);
  if ( v18 == v20 )
  {
    v21 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController autofillPopUpButton](self, "autofillPopUpButton"));
    -[NSPopUpButton selectItem:](v21, "selectItem:", v8);
    objc_release(v21);
  }
  v22 = objc_retainAutoreleasedReturnValue(
          -[ITLibrary allPlaylistsForMediaDomains:forMediaKinds:forDeviceCapabilities:withItems:](
            v4,
            "allPlaylistsForMediaDomains:forMediaKinds:forDeviceCapabilities:withItems:",
            1LL,
            177LL,
            13LL,
            1LL));
  v23 = objc_retainAutoreleasedReturnValue(+[AutofillNode nodesWithPlaylists:](&OBJC_CLASS___AutofillNode, "nodesWithPlaylists:", v22));
  objc_release(v22);
  v31 = 0u;
  v32 = 0u;
  v29 = 0u;
  v30 = 0u;
  v24 = objc_retain(v23);
  v25 = objc_msgSend(v24, "countByEnumeratingWithState:objects:count:", &v29, v33, 16LL);
  if ( v25 )
  {
    v26 = v25;
    v27 = *(_QWORD *)v30;
    do
    {
      v28 = 0LL;
      do
      {
        if ( *(_QWORD *)v30 != v27 )
          objc_enumerationMutation(v24);
        -[DeviceAutofillPlacardViewController appendToAutofillPopUpNode:withIndentLevel:](
          self,
          "appendToAutofillPopUpNode:withIndentLevel:",
          *(_QWORD *)(*((_QWORD *)&v29 + 1) + 8LL * (_QWORD)v28),
          0LL,
          (_QWORD)v29);
        v28 = (char *)v28 + 1;
      }
      while ( v26 != v28 );
      v26 = objc_msgSend(v24, "countByEnumeratingWithState:objects:count:", &v29, v33, 16LL);
    }
    while ( v26 );
  }
  objc_release(v24);
  objc_release(v24);
  objc_release(v16);
  objc_release(v15);
  objc_release(v8);
  objc_release(v4);
}