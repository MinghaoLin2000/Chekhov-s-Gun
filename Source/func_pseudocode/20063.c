-[PKNANDataSession peerEndpoint]
PKNANEndpoint *__cdecl -[PKNANDataSession peerEndpoint](PKNANDataSession *self, SEL a2)
{
  return (PKNANEndpoint *)objc_getProperty(self, a2, 64LL, 1);
}