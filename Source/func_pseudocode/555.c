-[DeviceSettingsDetailsTabContentViewController outlineView:viewForTableColumn:item:]
id __cdecl -[DeviceSettingsDetailsTabContentViewController outlineView:viewForTableColumn:item:](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  DeviceSettingsTabContentOutlineView *v8; // x19
  id v9; // x20
  id v10; // x21
  unsigned int v11; // w24
  __int64 v12; // x23
  DeviceSettingsTabContentOutlineView *v13; // x0
  unsigned int v14; // w25
  void *v15; // x0
  id v16; // x24
  void *v17; // x25
  void *v18; // x26
  DeviceSettingsTabContentOutlineView *v19; // x0
  unsigned int v20; // w24
  void *v21; // x0
  objc_super v23; // [xsp+0h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v8 = (DeviceSettingsTabContentOutlineView *)objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(objc_retain(a5));
  v11 = -[DeviceSettingsDetailsTabContentViewController shouldDisableAndCheckNode:](
          self,
          "shouldDisableAndCheckNode:",
          v10);
  if ( (unsigned int)-[DeviceSettingsTabContentOutlineView isEnabled](v8, "isEnabled") )
    v12 = (-[DeviceSettingsTabContentViewController disableAndCheckAllItems](self, "disableAndCheckAllItems") | v11) ^ 1;
  else
    v12 = 0LL;
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  if ( v13 == v8 )
  {
    v14 = -[DeviceSettingsDetailsTabContentViewController leadingCellsAreTextFields](self, "leadingCellsAreTextFields");
    objc_release(v8);
    if ( v14 )
    {
      v15 = objc_retainAutoreleasedReturnValue(
              -[DeviceSettingsTabContentOutlineView makeViewWithIdentifier:owner:](
                v8,
                "makeViewWithIdentifier:owner:",
                CFSTR("TextCell"),
                self));
      v16 = v15;
      if ( !v15 )
        goto LABEL_16;
      v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "textField"));
      v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "name"));
      -[DeviceSettingsTabContentViewController setUpTextField:stringValue:enabled:enableToopTip:](
        self,
        "setUpTextField:stringValue:enabled:enableToopTip:",
        v17,
        v18,
        v12,
        v12);
      objc_release(v18);
      goto LABEL_14;
    }
  }
  else
  {
    objc_release(v13);
  }
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
  if ( v19 == v8 )
  {
    v20 = -[DeviceSettingsDetailsTabContentViewController disableAndCheckAllDetailItems](
            self,
            "disableAndCheckAllDetailItems") | v11;
    objc_release(v8);
    if ( v20 != 1 )
      goto LABEL_15;
    v21 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsTabContentOutlineView makeViewWithIdentifier:owner:](
              v8,
              "makeViewWithIdentifier:owner:",
              CFSTR("CheckBoxCell"),
              self));
    v16 = v21;
    if ( !v21 )
      goto LABEL_16;
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "checkBox"));
    -[DeviceSettingsTabContentViewController setupButton:fromNode:enabled:toolTipEnabled:disabledAndChecked:forOutlineView:](
      self,
      "setupButton:fromNode:enabled:toolTipEnabled:disabledAndChecked:forOutlineView:",
      v17,
      v10,
      v12,
      v12,
      1LL,
      v8);
LABEL_14:
    objc_release(v17);
    goto LABEL_16;
  }
  objc_release(v19);
LABEL_15:
  v23.receiver = self;
  v23.super_class = (Class)&OBJC_CLASS___DeviceSettingsDetailsTabContentViewController;
  v16 = objc_retainAutoreleasedReturnValue(
          -[DeviceSettingsTabContentViewController outlineView:viewForTableColumn:item:](
            &v23,
            "outlineView:viewForTableColumn:item:",
            v8,
            v9,
            v10));
LABEL_16:
  objc_release(v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v16);
}