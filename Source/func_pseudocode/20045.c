-[PKNANEndpoint name]
NSString *__cdecl -[PKNANEndpoint name](PKNANEndpoint *self, SEL a2)
{
  WiFiAwareDiscoveryResult *v2; // x19
  void *v3; // x20
  void *v4; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint discoveryResult](self, "discoveryResult"));
  v3 = objc_retainAutoreleasedReturnValue(-[WiFiAwareDiscoveryResult serviceSpecificInfo](v2, "serviceSpecificInfo"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "instanceName"));
  objc_release(v3);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v4);
}