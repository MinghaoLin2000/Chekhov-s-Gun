-[RemoteViewBridgeSendRight encodeWithCoder:]
void __cdecl -[RemoteViewBridgeSendRight encodeWithCoder:](RemoteViewBridgeSendRight *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x0
  NSString *v6; // x20
  objc_class *v7; // x0
  objc_class *v8; // x0
  NSString *v9; // x23
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_opt_class(&OBJC_CLASS___NSXPCCoder);
  if ( (objc_opt_isKindOfClass(v4, v5) & 1) != 0 )
  {
    v6 = (NSString *)xpc_mach_send_create(self->_sendRight);
    objc_msgSend(v4, "encodeXPCObject:forKey:", v6, CFSTR("RemoteViewBridgeSendRightKey"));
  }
  else
  {
    v7 = (objc_class *)objc_opt_class(self);
    v6 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v7));
    v8 = (objc_class *)objc_opt_class(v4);
    v9 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v8));
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      NSInvalidArgumentException,
      CFSTR("An %@ can only be encoded with an instance of XPCEncoder; attempting to encode with a %@"),
      v6,
      v9);
    objc_release(v9);
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}