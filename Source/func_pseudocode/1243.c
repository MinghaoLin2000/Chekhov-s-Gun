-[DeviceViewController itDeviceLibrary]
ITLibrary *__cdecl -[DeviceViewController itDeviceLibrary](DeviceViewController *self, SEL a2)
{
  ITLibrary *itDeviceLibrary; // x0
  AMPDevice *v4; // x21
  void *v5; // x22
  ITLibrary *v6; // x20
  id v7; // x23
  ITLibrary *v8; // x0
  id v10; // [xsp+8h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  itDeviceLibrary = self->_itDeviceLibrary;
  if ( !itDeviceLibrary )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v5 = objc_retainAutoreleasedReturnValue(-[AMPDevice uniqueIdentifier](v4, "uniqueIdentifier"));
    v10 = 0LL;
    v6 = objc_retainAutoreleasedReturnValue(+[ITLibrary libraryWithDeviceID:error:](&OBJC_CLASS___ITLibrary, "libraryWithDeviceID:error:", v5, &v10));
    v7 = objc_retain(v10);
    v8 = self->_itDeviceLibrary;
    self->_itDeviceLibrary = v6;
    objc_release(v8);
    objc_release(v5);
    objc_release(v4);
    objc_release(v7);
    itDeviceLibrary = self->_itDeviceLibrary;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(itDeviceLibrary);
}