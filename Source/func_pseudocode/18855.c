-[RemoteViewBridgeSendRight initWithCoder:]
RemoteViewBridgeSendRight *__cdecl -[RemoteViewBridgeSendRight initWithCoder:](
        RemoteViewBridgeSendRight *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  RemoteViewBridgeSendRight *v5; // x20
  __int64 v6; // x0
  NSString *v7; // x21
  objc_class *v8; // x0
  NSString *v9; // x24
  objc_class *v10; // x0
  objc_class *v11; // x0
  NSString *v12; // x24
  RemoteViewBridgeSendRight *v13; // x0
  objc_super v15; // [xsp+10h] [xbp-40h] BYREF

  v4 = objc_retain(a3);
  v15.receiver = self;
  v15.super_class = (Class)&OBJC_CLASS___RemoteViewBridgeSendRight;
  v5 = -[RemoteViewBridgeSendRight init](&v15, "init");
  if ( v5 )
  {
    v6 = objc_opt_class(&OBJC_CLASS___NSXPCCoder);
    if ( (objc_opt_isKindOfClass(v4, v6) & 1) != 0 )
    {
      v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "decodeXPCObjectForKey:", CFSTR("RemoteViewBridgeSendRightKey")));
      if ( xpc_get_type(v7) != (xpc_type_t)&_xpc_type_mach_send )
      {
        v8 = (objc_class *)objc_opt_class(v5);
        v9 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v8));
        +[NSException raise:format:](
          &OBJC_CLASS___NSException,
          "raise:format:",
          NSInvalidArgumentException,
          CFSTR("%@ expected to decode send right; decoded %s"),
          v9,
          xpc_copy_description(v7));
        objc_release(v9);
      }
      v5->_sendRight = xpc_mach_send_copy_right(v7);
    }
    else
    {
      v10 = (objc_class *)objc_opt_class(v5);
      v7 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v10));
      v11 = (objc_class *)objc_opt_class(v4);
      v12 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v11));
      +[NSException raise:format:](
        &OBJC_CLASS___NSException,
        "raise:format:",
        NSInvalidArgumentException,
        CFSTR("An %@ can only be encoded with an instance of XPCDecoder; attempting to encode with a %@"),
        v7,
        v12);
      objc_release(v12);
    }
    objc_release(v7);
    v13 = objc_retain(v5);
  }
  objc_release(v4);
  objc_release(v5);
  return v5;
}