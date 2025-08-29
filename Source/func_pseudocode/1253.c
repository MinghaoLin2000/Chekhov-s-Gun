+[DeviceViewController deviceStringForDeviceType:forStringParameterizedKey:]
id __cdecl +[DeviceViewController deviceStringForDeviceType:forStringParameterizedKey:](
        id a1,
        SEL a2,
        unsigned __int64 a3,
        id a4)
{
  id v6; // x21
  void *v7; // x19
  NSString *v8; // x20
  NSBundle *v9; // x21
  NSString *v10; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "stringValueForDeviceType:", a3));
  v8 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v6, v7, v7));
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v9,
            "localizedStringForKey:value:table:",
            v8,
            &stru_1000BA220,
            0LL));
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}