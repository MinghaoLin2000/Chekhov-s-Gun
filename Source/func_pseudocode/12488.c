-[TSUKVOToken isEqual:]
bool __cdecl -[TSUKVOToken isEqual:](TSUKVOToken *self, SEL a2, id a3)
{
  __int64 v5; // x0
  void *v6; // x0
  void *v7; // x20
  void *context; // x21
  NSObject *observer; // x21
  NSString *keyPath; // x19
  void *v11; // x2
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( self == a3 )
  {
    LOBYTE(v6) = 1;
  }
  else
  {
    v5 = objc_opt_class(&OBJC_CLASS___TSUKVOToken);
    v6 = (void *)TSUDynamicCast(v5, a3);
    if ( v6 )
    {
      v7 = v6;
      context = self->_context;
      if ( context == objc_msgSend(v6, "context")
        && (observer = self->_observer, observer == objc_msgSend(v7, "observer")) )
      {
        keyPath = self->_keyPath;
        v11 = objc_msgSend(v7, "keyPath");
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        LOBYTE(v6) = -[NSString isEqualToString:](keyPath, "isEqualToString:", v11);
      }
      else
      {
        LOBYTE(v6) = 0;
      }
    }
  }
  return (char)v6;
}