-[DeviceFinderTabContainerViewController updateBarChoiceForIdentifier:forceUpdate:]
void __cdecl -[DeviceFinderTabContainerViewController updateBarChoiceForIdentifier:forceUpdate:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3,
        bool a4)
{
  id v6; // x19
  id v7; // x0
  void *v8; // x20
  void *v9; // x21
  id v10; // x0
  void *v11; // x24
  void *v12; // x23
  unsigned __int8 v13; // w24
  NSTabView *v14; // x23
  NSTabViewItem *v15; // x24
  id v16; // x25
  unsigned int v17; // w26
  NSTabView *v18; // x22
  void *v19; // x23
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController barChoiceForIdentifier:](self, "barChoiceForIdentifier:", v6));
  v8 = v7;
  if ( v7 )
  {
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "identifier"));
    if ( -[DeviceFinderTabContainerViewController isCloudEnabledForIdentifier:](
           self,
           "isCloudEnabledForIdentifier:",
           v6) )
    {
      v10 = objc_retainAutoreleasedReturnValue(
              -[DeviceFinderTabContainerViewController cloudIdentifierForIdentifier:](
                self,
                "cloudIdentifierForIdentifier:",
                v6));
    }
    else
    {
      if ( !-[DeviceFinderTabContainerViewController hasErrorStateForIdentifier:](
              self,
              "hasErrorStateForIdentifier:",
              v6) )
      {
        objc_msgSend(v8, "setIdentifier:", v6);
        if ( a4 )
          goto LABEL_10;
LABEL_9:
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "identifier"));
        v13 = (unsigned __int8)objc_msgSend(v9, "isEqualToString:", v12);
        objc_release(v12);
        if ( (v13 & 1) != 0 )
        {
LABEL_12:
          objc_release(v9);
          goto LABEL_13;
        }
LABEL_10:
        v14 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController tabView](self, "tabView"));
        v15 = objc_retainAutoreleasedReturnValue(-[NSTabView selectedTabViewItem](v14, "selectedTabViewItem"));
        v16 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem identifier](v15, "identifier"));
        v17 = (unsigned int)objc_msgSend(v16, "isEqualToString:", v9);
        objc_release(v16);
        objc_release(v15);
        objc_release(v14);
        if ( v17 )
        {
          v18 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController tabView](self, "tabView"));
          v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "identifier"));
          -[NSTabView selectTabViewItemWithIdentifier:](v18, "selectTabViewItemWithIdentifier:", v19);
          objc_release(v19);
          objc_release(v18);
        }
        goto LABEL_12;
      }
      v10 = objc_retainAutoreleasedReturnValue(
              -[DeviceFinderTabContainerViewController errorIdentifierForIdentifier:](
                self,
                "errorIdentifierForIdentifier:",
                v6));
    }
    v11 = v10;
    objc_msgSend(v8, "setIdentifier:", v10);
    objc_release(v11);
    if ( a4 )
      goto LABEL_10;
    goto LABEL_9;
  }
LABEL_13:
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}