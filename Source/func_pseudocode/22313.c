-[ECTIHelperDelegate _handleSetupMessage:forPeer:]
void __cdecl -[ECTIHelperDelegate _handleSetupMessage:forPeer:](ECTIHelperDelegate *self, SEL a2, id a3, id a4)
{
  uint64_t uint64; // x23
  uint64_t v8; // x25
  const char *string; // x26
  const UInt8 *data; // x0
  const __CFData *v11; // x0
  const __CFData *v12; // x24
  const void *v13; // x22
  double v14; // d8
  xpc_object_t value; // x24
  NSColor *v16; // x23
  OS_xpc_object *peer; // x0
  size_t count; // x0
  double v19; // d10
  NSColor *v20; // x0
  double v21; // d10
  double v22; // d11
  double v23; // d12
  double v24; // d1
  xpc_object_t reply; // x0
  void *v26; // x20
  pid_t v27; // w0
  __int64 v28; // [xsp+8h] [xbp-98h] BYREF
  uint8_t buf[8]; // [xsp+10h] [xbp-90h] BYREF

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "ECTI: _handleSetupMessage",
      buf,
      2u);
  }
  uint64 = xpc_dictionary_get_uint64(a3, "width");
  v8 = xpc_dictionary_get_uint64(a3, "height");
  string = xpc_dictionary_get_string(a3, "stringValue");
  *(_QWORD *)buf = 0LL;
  data = (const UInt8 *)xpc_dictionary_get_data(a3, "font", (size_t *)buf);
  if ( data && (v11 = CFDataCreate(0LL, data, *(CFIndex *)buf)) != 0LL )
  {
    v12 = v11;
    v13 = (const void *)sub_100004538(v11);
    CFRelease(v12);
  }
  else
  {
    v13 = 0LL;
  }
  v14 = (double)uint64;
  value = xpc_dictionary_get_value(a3, "foregroundColor");
  v16 = +[NSColor colorWithDeviceWhite:alpha:](&OBJC_CLASS___NSColor, "colorWithDeviceWhite:alpha:", 0.0, 1.0);
  peer = self->_peer;
  if ( peer )
    xpc_release(peer);
  self->_peer = (OS_xpc_object *)xpc_retain(a4);
  self->_isSearchField = xpc_dictionary_get_uint64(a3, "search_field") != 0;
  self->_maxSize = v14;
  if ( string )
    -[NSTextField setStringValue:](
      self->_textField,
      "setStringValue:",
      +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", string));
  if ( value && xpc_get_type(value) == (xpc_type_t)&_xpc_type_array )
  {
    count = xpc_array_get_count(value);
    if ( count == 4 )
    {
      v21 = xpc_array_get_double(value, 0LL);
      v22 = xpc_array_get_double(value, 1uLL);
      v23 = xpc_array_get_double(value, 2uLL);
      v20 = +[NSColor colorWithDeviceRed:green:blue:alpha:](
              &OBJC_CLASS___NSColor,
              "colorWithDeviceRed:green:blue:alpha:",
              v21,
              v22,
              v23,
              xpc_array_get_double(value, 3uLL));
    }
    else
    {
      if ( count != 2 )
        goto LABEL_18;
      v19 = xpc_array_get_double(value, 0LL);
      v20 = +[NSColor colorWithDeviceWhite:alpha:](
              &OBJC_CLASS___NSColor,
              "colorWithDeviceWhite:alpha:",
              v19,
              xpc_array_get_double(value, 1uLL));
    }
    v16 = v20;
  }
LABEL_18:
  objc_msgSend(-[NSTextField superview](self->_textField, "superview"), "setFrameSize:", v14, (double)v8);
  -[NSTextField setBordered:](self->_textField, "setBordered:", 0LL);
  if ( v13 )
  {
    -[NSTextField setFont:](self->_textField, "setFont:", v13);
    CFRelease(v13);
  }
  -[NSTextField setTextColor:](self->_textField, "setTextColor:", v16);
  -[NSTextField setBackgroundColor:](
    self->_textField,
    "setBackgroundColor:",
    +[NSColor clearColor](&OBJC_CLASS___NSColor, "clearColor"));
  -[NSTextField stringValue](self->_textField, "stringValue");
  v24 = -2.0;
  if ( self->_isSearchField )
    v24 = -3.0;
  -[NSTextField setFrame:](self->_textField, "setFrame:", 0.0, v24, v14, (double)v8);
  -[NSTextField setNeedsDisplay:](self->_textField, "setNeedsDisplay:", 1LL);
  -[NSTextField selectText:](self->_textField, "selectText:", self);
  -[ECTIHelperDelegate _handleHasFocus:](self, "_handleHasFocus:", a3);
  reply = xpc_dictionary_create_reply(a3);
  if ( reply )
  {
    v26 = reply;
    v27 = getpid();
    xpc_dictionary_set_uint64(v26, "pid", v27);
    v28 = 0LL;
    if ( !(unsigned int)_CPSGetCurrentProcess(&v28) )
      xpc_dictionary_set_uint64(v26, "psn", HIDWORD(v28) | ((unsigned __int64)(unsigned int)v28 << 32));
    xpc_connection_send_message((xpc_connection_t)a4, v26);
    xpc_release(v26);
  }
}