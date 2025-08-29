-[PKNANSubscriber debugDescription]
NSString *__cdecl -[PKNANSubscriber debugDescription](PKNANSubscriber *self, SEL a2)
{
  NSString *v3; // x19
  void *v4; // x23
  void *v5; // x20
  void *v6; // x22
  NSString *v7; // x21
  objc_super v9; // [xsp+20h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___PKNANSubscriber;
  v3 = objc_retainAutoreleasedReturnValue(-[PKNANSubscriber debugDescription](&v9, "debugDescription"));
  v4 = -[NSMutableSet count](self->_endpoints, "count");
  v5 = objc_retainAutoreleasedReturnValue(-[NSMutableSet debugDescription](self->_endpoints, "debugDescription"));
  v6 = objc_retainAutoreleasedReturnValue(-[WiFiAwareSubscriber debugDescription](self->_subscriber, "debugDescription"));
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@ { %d endpoints - %@, %@ }"),
           v3,
           v4,
           v5,
           v6));
  objc_release(v6);
  objc_release(v5);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}