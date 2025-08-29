-[DeviceAutofillPlacardViewController itLibrary]
ITLibrary *__cdecl -[DeviceAutofillPlacardViewController itLibrary](DeviceAutofillPlacardViewController *self, SEL a2)
{
  ITLibrary *itLibrary; // x0
  ITLibrary *v4; // x20
  id v5; // x21
  ITLibrary *v6; // x0
  id v8; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  itLibrary = self->_itLibrary;
  if ( !itLibrary )
  {
    v8 = 0LL;
    v4 = objc_retainAutoreleasedReturnValue(
           +[ITLibrary libraryWithAPIVersion:error:](
             &OBJC_CLASS___ITLibrary,
             "libraryWithAPIVersion:error:",
             CFSTR("1.1"),
             &v8));
    v5 = objc_retain(v8);
    v6 = self->_itLibrary;
    self->_itLibrary = v4;
    objc_release(v6);
    objc_release(v5);
    itLibrary = self->_itLibrary;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(itLibrary);
}