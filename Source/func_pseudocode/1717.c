-[DeviceSettingsTabContentViewController setUpTextField:stringValue:enabled:enableToopTip:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsTabContentViewController setUpTextField:stringValue:enabled:enableToopTip:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        bool a6)
{
  _BOOL4 v6; // w22
  _BOOL8 v7; // x21
  id v9; // x19
  __CFString *v10; // x0
  __CFString *v11; // x20
  NSColor *v12; // x0
  NSColor *v13; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = a6;
  v7 = a5;
  v9 = objc_retain(a3);
  v10 = (__CFString *)objc_retain(a4);
  if ( v10 )
    v11 = v10;
  else
    v11 = &stru_1000BA220;
  if ( v6 )
    objc_msgSend(v9, "setToolTip:", v11);
  objc_msgSend(v9, "setStringValue:", v11);
  objc_msgSend(v9, "setEnabled:", v7);
  if ( v7 )
    v12 = objc_retainAutoreleasedReturnValue(+[NSColor controlTextColor](&OBJC_CLASS___NSColor, "controlTextColor"));
  else
    v12 = objc_retainAutoreleasedReturnValue(+[NSColor disabledControlTextColor](&OBJC_CLASS___NSColor, "disabledControlTextColor"));
  v13 = v12;
  objc_msgSend(v9, "setTextColor:", v12);
  objc_release(v13);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}