-[ECTIHelperDelegate _handleSetForegroundColor:]
void __cdecl -[ECTIHelperDelegate _handleSetForegroundColor:](ECTIHelperDelegate *self, SEL a2, id a3)
{
  xpc_object_t value; // x0
  void *v5; // x20
  size_t count; // x0
  double v7; // d8
  double v8; // d0
  NSTextField *textField; // x19
  NSColor *v10; // x0
  double v11; // d8
  double v12; // d9
  double v13; // d10
  double v14; // d0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  value = xpc_dictionary_get_value(a3, "foregroundColor");
  if ( value )
  {
    v5 = value;
    if ( xpc_get_type(value) == (xpc_type_t)&_xpc_type_array )
    {
      count = xpc_array_get_count(v5);
      if ( count == 4 )
      {
        v11 = xpc_array_get_double(v5, 0LL);
        v12 = xpc_array_get_double(v5, 1uLL);
        v13 = xpc_array_get_double(v5, 2uLL);
        v14 = xpc_array_get_double(v5, 3uLL);
        textField = self->_textField;
        v10 = +[NSColor colorWithDeviceRed:green:blue:alpha:](
                &OBJC_CLASS___NSColor,
                "colorWithDeviceRed:green:blue:alpha:",
                v11,
                v12,
                v13,
                v14);
      }
      else
      {
        if ( count != 2 )
          return;
        v7 = xpc_array_get_double(v5, 0LL);
        v8 = xpc_array_get_double(v5, 1uLL);
        textField = self->_textField;
        v10 = +[NSColor colorWithDeviceWhite:alpha:](&OBJC_CLASS___NSColor, "colorWithDeviceWhite:alpha:", v7, v8);
      }
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      -[NSTextField setTextColor:](textField, "setTextColor:", v10);
    }
  }
}