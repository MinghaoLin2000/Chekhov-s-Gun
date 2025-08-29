-[DeviceUIServiceViewController classForViewMode:]
Class __cdecl -[DeviceUIServiceViewController classForViewMode:](DeviceUIServiceViewController *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x20
  NSDictionary *v6; // x21
  _QWORD v8[3]; // [xsp+8h] [xbp-58h] BYREF
  _QWORD v9[3]; // [xsp+20h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( -[DeviceUIServiceViewController isMediaViewMode:](self, "isMediaViewMode:", v4) )
  {
    v5 = objc_retainAutoreleasedReturnValue((id)objc_opt_class(&OBJC_CLASS___DeviceModeMediaViewController));
  }
  else
  {
    v8[0] = AMPDeviceViewModeDefault;
    v9[0] = objc_opt_class(&OBJC_CLASS___DeviceModeFinderViewController);
    v8[1] = AMPDeviceViewModeDisabled;
    v9[1] = objc_opt_class(&OBJC_CLASS___DeviceModeDisabledViewController);
    v8[2] = AMPDeviceViewModeUnpaired;
    v9[2] = objc_opt_class(&OBJC_CLASS___DeviceModeUnpairedViewController);
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             v9,
             v8,
             3LL));
    v5 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v6, "objectForKeyedSubscript:", v4));
    objc_release(v6);
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (Class)objc_autoreleaseReturnValue(v5);
}