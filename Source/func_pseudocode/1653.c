-[DeviceFinderTabContainerViewController didSelectButtonBarItem:]
void __cdecl -[DeviceFinderTabContainerViewController didSelectButtonBarItem:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSArray *v5; // x21
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x23
  void *v9; // x24
  NSTabView *v10; // x21
  void *v11; // x22
  NSTabView *v12; // x20
  NSTabViewItem *v13; // x21
  NSView *v14; // x22
  void *v15; // x23
  __int128 v16; // [xsp+0h] [xbp-110h] BYREF
  __int128 v17; // [xsp+10h] [xbp-100h]
  __int128 v18; // [xsp+20h] [xbp-F0h]
  __int128 v19; // [xsp+30h] [xbp-E0h]
  _BYTE v20[128]; // [xsp+48h] [xbp-C8h] BYREF

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController barChoiceFor:](self, "barChoiceFor:", a3));
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v19 = 0u;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController barChoices](self, "barChoices", 0LL));
  v6 = -[NSArray countByEnumeratingWithState:objects:count:](
         v5,
         "countByEnumeratingWithState:objects:count:",
         &v16,
         v20,
         16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v17;
    do
    {
      v9 = 0LL;
      do
      {
        if ( *(_QWORD *)v17 != v8 )
          objc_enumerationMutation(v5);
        objc_msgSend(
          *(id *)(*((_QWORD *)&v16 + 1) + 8LL * (_QWORD)v9),
          "updateButtonMenuRepresentationsSelectedState:",
          *(_QWORD *)(*((_QWORD *)&v16 + 1) + 8LL * (_QWORD)v9) == (_QWORD)v4);
        v9 = (char *)v9 + 1;
      }
      while ( v7 != v9 );
      v7 = -[NSArray countByEnumeratingWithState:objects:count:](
             v5,
             "countByEnumeratingWithState:objects:count:",
             &v16,
             v20,
             16LL);
    }
    while ( v7 );
  }
  objc_release(v5);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController tabView](self, "tabView"));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  -[NSTabView selectTabViewItemWithIdentifier:](v10, "selectTabViewItemWithIdentifier:", v11);
  objc_release(v11);
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController tabView](self, "tabView"));
  v13 = objc_retainAutoreleasedReturnValue(-[NSTabView selectedTabViewItem](v12, "selectedTabViewItem"));
  v14 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem view](v13, "view"));
  v15 = objc_retainAutoreleasedReturnValue(-[NSView contentView](v14, "contentView"));
  objc_msgSend(v15, "scrollToPoint:", 0.0, 0.0);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  objc_release(v4);
}