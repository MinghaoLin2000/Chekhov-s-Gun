-[DeviceHeaderViewController representedObjectForString:fakeString:useFakeIfNil:]
id __cdecl -[DeviceHeaderViewController representedObjectForString:fakeString:useFakeIfNil:](
        DeviceHeaderViewController *self,
        SEL a2,
        id a3,
        id a4,
        bool a5)
{
  _BOOL4 v5; // w21
  id v7; // x19
  id v8; // x0
  void *v9; // x20
  id v10; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = a5;
  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = v8;
  if ( v7 )
  {
    v8 = v7;
  }
  else if ( !v5 )
  {
    v10 = 0LL;
    goto LABEL_6;
  }
  v10 = objc_retain(v8);
LABEL_6:
  objc_release(v9);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}