-[DeviceHeaderViewController copyFromDeviceDetailsTextField:]
void __cdecl -[DeviceHeaderViewController copyFromDeviceDetailsTextField:](
        DeviceHeaderViewController *self,
        SEL a2,
        id a3)
{
  id v3; // x20
  NSPasteboard *v4; // x19
  NSPasteboard *v5; // x19
  void *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSPasteboard generalPasteboard](&OBJC_CLASS___NSPasteboard, "generalPasteboard"));
  -[NSPasteboard clearContents](v4, "clearContents");
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(+[NSPasteboard generalPasteboard](&OBJC_CLASS___NSPasteboard, "generalPasteboard"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "representedObject"));
  objc_release(v3);
  -[NSPasteboard setString:forType:](v5, "setString:forType:", v6, NSStringPboardType);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}