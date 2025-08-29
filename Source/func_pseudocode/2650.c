-[DeviceAutofillPlacardViewController appendToAutofillPopUpNode:withIndentLevel:]
void __cdecl -[DeviceAutofillPlacardViewController appendToAutofillPopUpNode:withIndentLevel:](
        DeviceAutofillPlacardViewController *self,
        SEL a2,
        id a3,
        signed __int64 a4)
{
  id v6; // x19
  AutofillMenuItem *v7; // x21
  void *v8; // x23
  AutofillMenuItem *v9; // x21
  void *v10; // x23
  NSPopUpButton *v11; // x23
  NSMenu *v12; // x24
  AMPDeviceAutoFillPrefs *v13; // x23
  void *v14; // x24
  void *v15; // x25
  void *v16; // x26
  NSPopUpButton *v17; // x23
  void *v18; // x23
  void *v19; // x0
  void *v20; // x24
  __int64 v21; // x25
  signed __int64 v22; // x22
  void *v23; // x26
  __int128 v24; // [xsp+0h] [xbp-120h] BYREF
  __int128 v25; // [xsp+10h] [xbp-110h]
  __int128 v26; // [xsp+20h] [xbp-100h]
  __int128 v27; // [xsp+30h] [xbp-F0h]
  _BYTE v28[128]; // [xsp+48h] [xbp-D8h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_alloc(&OBJC_CLASS___AutofillMenuItem);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "name"));
  v9 = -[AutofillMenuItem initWithTitle:action:keyEquivalent:](
         v7,
         "initWithTitle:action:keyEquivalent:",
         v8,
         0LL,
         &stru_1000BA220);
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "image"));
  -[AutofillMenuItem setImage:](v9, "setImage:", v10);
  objc_release(v10);
  -[AutofillMenuItem setIndentationLevel:](v9, "setIndentationLevel:", a4);
  -[AutofillMenuItem setNode:](v9, "setNode:", v6);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController autofillPopUpButton](self, "autofillPopUpButton"));
  v12 = objc_retainAutoreleasedReturnValue(-[NSPopUpButton menu](v11, "menu"));
  -[NSMenu addItem:](v12, "addItem:", v9);
  objc_release(v12);
  objc_release(v11);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController autoFillPrefs](self, "autoFillPrefs"));
  v14 = -[AMPDeviceAutoFillPrefs autoFillSourcePlaylistID](v13, "autoFillSourcePlaylistID");
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "persistentID"));
  v16 = objc_msgSend(v15, "unsignedLongLongValue");
  objc_release(v15);
  objc_release(v13);
  if ( v14 == v16 )
  {
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController autofillPopUpButton](self, "autofillPopUpButton"));
    -[NSPopUpButton selectItem:](v17, "selectItem:", v9);
    objc_release(v17);
  }
  if ( (unsigned int)objc_msgSend(v6, "isFolder") )
  {
    v26 = 0u;
    v27 = 0u;
    v24 = 0u;
    v25 = 0u;
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "children", 0LL));
    v19 = objc_msgSend(v18, "countByEnumeratingWithState:objects:count:", &v24, v28, 16LL);
    if ( v19 )
    {
      v20 = v19;
      v21 = *(_QWORD *)v25;
      v22 = a4 + 1;
      do
      {
        v23 = 0LL;
        do
        {
          if ( *(_QWORD *)v25 != v21 )
            objc_enumerationMutation(v18);
          -[DeviceAutofillPlacardViewController appendToAutofillPopUpNode:withIndentLevel:](
            self,
            "appendToAutofillPopUpNode:withIndentLevel:",
            *(_QWORD *)(*((_QWORD *)&v24 + 1) + 8LL * (_QWORD)v23),
            v22);
          v23 = (char *)v23 + 1;
        }
        while ( v20 != v23 );
        v20 = objc_msgSend(v18, "countByEnumeratingWithState:objects:count:", &v24, v28, 16LL);
      }
      while ( v20 );
    }
    objc_release(v18);
  }
  objc_release(v9);
  objc_release(v6);
}