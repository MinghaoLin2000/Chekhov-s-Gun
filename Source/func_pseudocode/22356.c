-[ECAPHelperDelegate _handleSetupMessage:forPeer:]
void __cdecl -[ECAPHelperDelegate _handleSetupMessage:forPeer:](ECAPHelperDelegate *self, SEL a2, id a3, id a4)
{
  OS_xpc_object *peer; // x0
  const void *data; // x0
  NSImage *v9; // x2
  NSData *v10; // x0
  NSString *string; // x2
  NSString *v12; // x2
  NSString *v13; // x2
  NSString *v14; // x2
  xpc_object_t reply; // x0
  void *v16; // x20
  pid_t v17; // w0
  __int64 v18; // [xsp+0h] [xbp-30h] BYREF
  size_t length; // [xsp+8h] [xbp-28h] BYREF

  peer = self->_peer;
  if ( peer )
    xpc_release(peer);
  self->_peer = (OS_xpc_object *)xpc_retain(a4);
  length = 0LL;
  data = xpc_dictionary_get_data(a3, "icon", &length);
  if ( !data
    || (v10 = +[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", data, length)) == 0LL
    || (v9 = objc_autorelease(objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSImage), "initWithData:", v10))) == 0LL )
  {
    v9 = -[NSWorkspace iconForContentType:](
           +[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace", v9),
           "iconForContentType:",
           UTTypeApplicationBundle);
  }
  -[NSImageView setImage:](self->_imageView, "setImage:", v9);
  string = (NSString *)xpc_dictionary_get_string(a3, "alertTitle");
  if ( string )
    string = +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", string);
  -[NSTextField setStringValue:](self->_alertTitleField, "setStringValue:", string);
  v12 = (NSString *)xpc_dictionary_get_string(a3, "alertMessage");
  if ( v12 )
    v12 = +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v12);
  -[NSTextField setStringValue:](self->_alertMessageField, "setStringValue:", v12);
  v13 = (NSString *)xpc_dictionary_get_string(a3, "cancelButtonTitle");
  if ( v13 )
    v13 = +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v13);
  -[NSButton setTitle:](self->_cancelButton, "setTitle:", v13);
  v14 = (NSString *)xpc_dictionary_get_string(a3, "actionButtonTitle");
  if ( v14 )
    v14 = +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v14);
  -[NSButton setTitle:](self->_actionButton, "setTitle:", v14);
  reply = xpc_dictionary_create_reply(a3);
  if ( reply )
  {
    v16 = reply;
    v17 = getpid();
    xpc_dictionary_set_uint64(v16, "pid", v17);
    v18 = 0LL;
    if ( !(unsigned int)_CPSGetCurrentProcess(&v18) )
      xpc_dictionary_set_uint64(v16, "psn", HIDWORD(v18) | ((unsigned __int64)(unsigned int)v18 << 32));
    xpc_connection_send_message((xpc_connection_t)a4, v16);
    xpc_release(v16);
  }
}