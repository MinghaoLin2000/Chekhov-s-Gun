-[DeviceFinderTabContainerViewController stackView:didReattachViews:]
void __cdecl -[DeviceFinderTabContainerViewController stackView:didReattachViews:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x21
  NSPopUpButton *v6; // x22
  NSMenu *v7; // x20
  id v8; // x21
  void *v9; // x0
  void *v10; // x22
  __int64 v11; // x25
  void *v12; // x26
  id v13; // x23
  void *v14; // x24
  __int128 v15; // [xsp+0h] [xbp-120h] BYREF
  __int128 v16; // [xsp+10h] [xbp-110h]
  __int128 v17; // [xsp+20h] [xbp-100h]
  __int128 v18; // [xsp+30h] [xbp-F0h]
  _BYTE v19[128]; // [xsp+48h] [xbp-D8h] BYREF

  v5 = objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController overflowPulldown](self, "overflowPulldown"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSPopUpButton menu](v6, "menu"));
  objc_release(v6);
  v17 = 0u;
  v18 = 0u;
  v15 = 0u;
  v16 = 0u;
  v8 = objc_retain(v5);
  v9 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v15, v19, 16LL);
  if ( v9 )
  {
    v10 = v9;
    v11 = *(_QWORD *)v16;
    do
    {
      v12 = 0LL;
      do
      {
        if ( *(_QWORD *)v16 != v11 )
          objc_enumerationMutation(v8);
        v13 = objc_retainAutoreleasedReturnValue(
                -[DeviceFinderTabContainerViewController barChoiceForButton:](
                  self,
                  "barChoiceForButton:",
                  *(_QWORD *)(*((_QWORD *)&v15 + 1) + 8LL * (_QWORD)v12),
                  (_QWORD)v15));
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "menuRepresentation"));
        -[NSMenu removeItem:](v7, "removeItem:", v14);
        objc_release(v14);
        objc_release(v13);
        v12 = (char *)v12 + 1;
      }
      while ( v10 != v12 );
      v10 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v15, v19, 16LL);
    }
    while ( v10 );
  }
  objc_release(v8);
  -[DeviceFinderTabContainerViewController updateOverflowVisibility](self, "updateOverflowVisibility");
  objc_release(v7);
  objc_release(v8);
}