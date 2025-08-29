-[PKNANSubscriber init]
PKNANSubscriber *__cdecl -[PKNANSubscriber init](PKNANSubscriber *self, SEL a2)
{
  PKNANSubscriber *v2; // x19
  NSMutableSet *v3; // x0
  NSMutableSet *endpoints; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___PKNANSubscriber;
  v2 = -[PKNANSubscriber init](&v6, "init");
  if ( v2 )
  {
    v3 = objc_opt_new(&OBJC_CLASS___NSMutableSet);
    endpoints = v2->_endpoints;
    v2->_endpoints = v3;
    objc_release(endpoints);
  }
  return v2;
}