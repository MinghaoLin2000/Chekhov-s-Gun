-[PKNANEndpoint initWithDiscoveryResult:]
PKNANEndpoint *__cdecl -[PKNANEndpoint initWithDiscoveryResult:](PKNANEndpoint *self, SEL a2, id a3)
{
  id v5; // x19
  PKNANEndpoint *v6; // x0
  PKNANEndpoint *v7; // x21
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___PKNANEndpoint;
  v6 = -[PKNANEndpoint init](&v9, "init");
  v7 = v6;
  if ( v6 )
    objc_storeStrong((id *)&v6->_discoveryResult, a3);
  objc_release(v5);
  return v7;
}