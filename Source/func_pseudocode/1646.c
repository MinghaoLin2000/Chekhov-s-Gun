-[DeviceFinderTabContainerViewController setupTabBarView]
void __cdecl -[DeviceFinderTabContainerViewController setupTabBarView](
        DeviceFinderTabContainerViewController *self,
        SEL a2)
{
  id v3; // x21
  NSStackView *v4; // x20
  void *v5; // x20
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x21
  double v9; // d8
  void *v10; // x23
  __int64 v11; // x27
  NSBundle *v12; // x26
  NSString *v13; // x25
  BarChoice *v14; // x26
  NSButton *v15; // x27
  NSStackView *v16; // x28
  NSStackView *v17; // x28
  double v18; // d0
  void *v19; // x22
  void *v20; // x23
  NSPopUpButton *v21; // x19
  id obj; // [xsp+8h] [xbp-138h]
  __int128 v23; // [xsp+10h] [xbp-130h] BYREF
  __int128 v24; // [xsp+20h] [xbp-120h]
  __int128 v25; // [xsp+30h] [xbp-110h]
  __int128 v26; // [xsp+40h] [xbp-100h]
  _BYTE v27[128]; // [xsp+50h] [xbp-F0h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController tabIdentifiers](self, "tabIdentifiers"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController buttonBarStackView](self, "buttonBarStackView"));
  -[NSStackView setDelegate:](v4, "setDelegate:", self);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v23 = 0u;
  v24 = 0u;
  v25 = 0u;
  v26 = 0u;
  obj = objc_retain(v3);
  v6 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v23, v27, 16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v24;
    v9 = 0.0;
    do
    {
      v10 = 0LL;
      do
      {
        if ( *(_QWORD *)v24 != v8 )
          objc_enumerationMutation(obj);
        v11 = *(_QWORD *)(*((_QWORD *)&v23 + 1) + 8LL * (_QWORD)v10);
        v12 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v13 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v12,
                  "localizedStringForKey:value:table:",
                  v11,
                  &stru_1000BA220,
                  0LL));
        objc_release(v12);
        v14 = -[BarChoice initWithTitle:](objc_alloc(&OBJC_CLASS___BarChoice), "initWithTitle:", v13);
        -[BarChoice setIdentifier:](v14, "setIdentifier:", v11);
        v15 = objc_retainAutoreleasedReturnValue(-[BarChoice buttonRepresentation](v14, "buttonRepresentation"));
        -[NSButton setTarget:](v15, "setTarget:", self);
        -[NSButton setAction:](v15, "setAction:", "didSelectButtonBarItem:");
        v16 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController buttonBarStackView](self, "buttonBarStackView"));
        -[NSStackView insertView:atIndex:inGravity:](
          v16,
          "insertView:atIndex:inGravity:",
          v15,
          (unsigned __int64)v9,
          2LL);
        objc_release(v16);
        v17 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController buttonBarStackView](self, "buttonBarStackView"));
        v18 = 400.0 - v9;
        *(float *)&v18 = 400.0 - v9;
        -[NSStackView setVisibilityPriority:forView:](v17, "setVisibilityPriority:forView:", v15, v18);
        objc_release(v17);
        objc_msgSend(v5, "addObject:", v14);
        v9 = v9 + 1.0;
        objc_release(v15);
        objc_release(v14);
        objc_release(v13);
        v10 = (char *)v10 + 1;
      }
      while ( v7 != v10 );
      v7 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v23, v27, 16LL);
    }
    while ( v7 );
  }
  objc_release(obj);
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectAtIndexedSubscript:", 0LL));
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "buttonRepresentation"));
  objc_msgSend(v20, "setState:", 1LL);
  objc_release(v20);
  objc_release(v19);
  -[DeviceFinderTabContainerViewController setBarChoices:](self, "setBarChoices:", v5);
  v21 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController overflowPulldown](self, "overflowPulldown"));
  -[NSPopUpButton setHidden:](v21, "setHidden:", 1LL);
  objc_release(v21);
  objc_release(v5);
  objc_release(obj);
}