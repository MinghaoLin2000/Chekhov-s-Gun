-[PKNANDataSession debugDescription]
NSString *__cdecl -[PKNANDataSession debugDescription](PKNANDataSession *self, SEL a2)
{
  NSString *v3; // x19
  void *v4; // x21
  NSString *v5; // x20
  objc_super v7; // [xsp+10h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___PKNANDataSession;
  v3 = objc_retainAutoreleasedReturnValue(-[PKNANDataSession debugDescription](&v7, "debugDescription"));
  v4 = objc_retainAutoreleasedReturnValue(-[WiFiAwareDataSession debugDescription](self->_dataSession, "debugDescription"));
  v5 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@ { %@ }"), v3, v4));
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}