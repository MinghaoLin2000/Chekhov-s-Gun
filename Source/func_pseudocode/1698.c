-[DeviceSettingsTabContentViewController setupButton:fromNode:enabled:toolTipEnabled:disabledAndChecked:forOutlineView:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsTabContentViewController setupButton:fromNode:enabled:toolTipEnabled:disabledAndChecked:forOutlineView:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        bool a6,
        bool a7,
        id a8)
{
  _BOOL4 v9; // w21
  _BOOL8 v11; // x23
  id v14; // x19
  id v15; // x20
  id v16; // x25
  void *v17; // x26
  id v18; // x26
  _BOOL8 v19; // x24
  void *v20; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v9 = a7;
  v11 = a5;
  v14 = objc_retain(a3);
  v15 = objc_retain(a4);
  v16 = objc_retain(a8);
  objc_msgSend(v14, "setNode:", v15);
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "name"));
  objc_msgSend(v14, "setTitle:", v17);
  objc_release(v17);
  objc_msgSend(v14, "setState:", objc_msgSend(v15, "state"));
  objc_msgSend(v14, "setTarget:", self);
  objc_msgSend(v14, "setAction:", "clickCheckBox:");
  objc_msgSend(
    v14,
    "setAllowsMixedState:",
    -[DeviceSettingsTabContentViewController shouldAllowMixedStateForOutlineView:](
      self,
      "shouldAllowMixedStateForOutlineView:",
      v16));
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController extraImageForNode:](self, "extraImageForNode:", v15));
  objc_msgSend(v14, "setExtraImage:", v18);
  objc_release(v18);
  v19 = -[DeviceSettingsTabContentViewController shouldHitTestOnlyOnImageForOutlineView:](
          self,
          "shouldHitTestOnlyOnImageForOutlineView:",
          v16);
  objc_release(v16);
  objc_msgSend(v14, "setHitTestOnlyOnImage:", v19);
  objc_msgSend(v14, "setEnabled:", v11);
  if ( !a6 )
  {
    objc_msgSend(v14, "setToolTip:", 0LL);
    if ( !v9 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "name"));
  objc_msgSend(v14, "setToolTip:", v20);
  objc_release(v20);
  if ( v9 )
  {
LABEL_5:
    objc_msgSend(v14, "setEnabled:", 0LL);
    objc_msgSend(v14, "setState:", 1LL);
  }
LABEL_6:
  objc_release(v15);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v14);
}