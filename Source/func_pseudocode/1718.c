-[DeviceSettingsTabContentViewController outlineView:viewForTableColumn:item:]
id __cdecl -[DeviceSettingsTabContentViewController outlineView:viewForTableColumn:item:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  DeviceSettingsTabContentOutlineView *v8; // x19
  id v9; // x23
  void *v10; // x20
  id v11; // x21
  unsigned int v12; // w26
  __int64 v13; // x23
  void *v14; // x0
  void *v15; // x24
  id v16; // x25
  id v17; // x26
  DeviceSettingsTabContentViewController *v18; // x0
  id v19; // x2
  id v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  void *v23; // x27
  void *v24; // x28
  void *v26; // x0
  void *v27; // x27
  DeviceSettingsTabContentOutlineView *v28; // x24
  void *v29; // x0
  void *v30; // x27
  _BOOL8 v31; // x6
  void *v32; // x0
  void *v33; // x27
  __int64 v34; // x2
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v8 = (DeviceSettingsTabContentOutlineView *)objc_retain(a3);
  v9 = objc_retain(a5);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(a4, "identifier"));
  v11 = objc_retain(v9);
  v12 = -[DeviceSettingsTabContentViewController shouldDisableAndCheckNode:](self, "shouldDisableAndCheckNode:", v11);
  if ( (unsigned int)-[DeviceSettingsTabContentOutlineView isEnabled](v8, "isEnabled") )
    v13 = (-[DeviceSettingsTabContentViewController disableAndCheckAllItems](self, "disableAndCheckAllItems") | v12) ^ 1;
  else
    v13 = 0LL;
  if ( (unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("artist")) )
  {
    v14 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsTabContentOutlineView makeViewWithIdentifier:owner:](
              v8,
              "makeViewWithIdentifier:owner:",
              CFSTR("ArtistTextCell"),
              self));
    v15 = v14;
    if ( !v14 )
      goto LABEL_13;
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "textField"));
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "artistName"));
    v18 = self;
    v19 = v16;
    v20 = v17;
    v21 = v13;
    v22 = v13;
    goto LABEL_7;
  }
  if ( (unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("date")) )
  {
    v15 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsTabContentOutlineView makeViewWithIdentifier:owner:](
              v8,
              "makeViewWithIdentifier:owner:",
              CFSTR("DateCell"),
              self));
    if ( !v15 )
      goto LABEL_13;
    v16 = objc_alloc_init((Class)&OBJC_CLASS___NSDateFormatter);
    objc_msgSend(v16, "setDateStyle:", 1LL);
    objc_msgSend(v16, "setTimeStyle:", 0LL);
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "textField"));
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "releaseDate"));
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "stringFromDate:", v23));
    objc_release(v23);
    -[DeviceSettingsTabContentViewController setUpTextField:stringValue:enabled:enableToopTip:](
      self,
      "setUpTextField:stringValue:enabled:enableToopTip:",
      v17,
      v24,
      v13,
      v13);
    objc_release(v24);
    goto LABEL_11;
  }
  if ( (unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("size")) )
  {
    v26 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsTabContentOutlineView makeViewWithIdentifier:owner:](
              v8,
              "makeViewWithIdentifier:owner:",
              CFSTR("TextCell"),
              self));
    v15 = v26;
    if ( v26 )
    {
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v26, "textField"));
      v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "fileSize"));
      v17 = objc_retainAutoreleasedReturnValue(+[NSString storageSizeStringForFileSize:](&OBJC_CLASS___NSString, "storageSizeStringForFileSize:", v27));
      objc_release(v27);
      v18 = self;
      v19 = v16;
      v20 = v17;
      v21 = v13;
      v22 = 0LL;
LABEL_7:
      -[DeviceSettingsTabContentViewController setUpTextField:stringValue:enabled:enableToopTip:](
        v18,
        "setUpTextField:stringValue:enabled:enableToopTip:",
        v19,
        v20,
        v21,
        v22);
LABEL_11:
      objc_release(v17);
LABEL_12:
      objc_release(v16);
    }
  }
  else if ( (unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("all"))
         && (v28 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController allCheckBoxOutlineView](self, "allCheckBoxOutlineView")),
             objc_release(v28),
             v28 == v8) )
  {
    v32 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsTabContentOutlineView makeViewWithIdentifier:owner:](
              v8,
              "makeViewWithIdentifier:owner:",
              CFSTR("CheckBoxCell"),
              self));
    v15 = v32;
    if ( v32 )
    {
      v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v32, "subviews"));
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v33, "objectAtIndexedSubscript:", 0LL));
      objc_release(v33);
      objc_msgSend(v16, "setTitle:", v11);
      if ( ((-[DeviceSettingsTabContentViewController disableAndCheckAllItems](self, "disableAndCheckAllItems") | v12) & 1) != 0 )
      {
        v13 = 0LL;
        v34 = 1LL;
      }
      else
      {
        v34 = -[DeviceSettingsTabContentViewController allCheckBoxChecked](self, "allCheckBoxChecked");
      }
      objc_msgSend(v16, "setState:", v34);
      objc_msgSend(v16, "setEnabled:", v13);
      objc_msgSend(v16, "setAllowsMixedState:", 0LL);
      goto LABEL_12;
    }
  }
  else
  {
    v29 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsTabContentOutlineView makeViewWithIdentifier:owner:](
              v8,
              "makeViewWithIdentifier:owner:",
              CFSTR("CheckBoxCell"),
              self));
    v15 = v29;
    if ( v29 )
    {
      v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "subviews"));
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v30, "objectAtIndexedSubscript:", 0LL));
      objc_release(v30);
      v31 = ((-[DeviceSettingsTabContentViewController disableAndCheckAllItems](self, "disableAndCheckAllItems") | v12) & 1) != 0
         || -[DeviceSettingsTabContentViewController allCheckBoxChecked](self, "allCheckBoxChecked");
      -[DeviceSettingsTabContentViewController setupButton:fromNode:enabled:toolTipEnabled:disabledAndChecked:forOutlineView:](
        self,
        "setupButton:fromNode:enabled:toolTipEnabled:disabledAndChecked:forOutlineView:",
        v16,
        v11,
        v13,
        v13,
        v31,
        v8);
      goto LABEL_12;
    }
  }
LABEL_13:
  objc_release(v11);
  objc_release(v10);
  objc_release(v11);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}