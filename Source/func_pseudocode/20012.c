-[LocalProxyConnection _connectionReady]
// attributes: thunk
void __cdecl -[LocalProxyConnection _connectionReady](LocalProxyConnection *self, SEL a2)
{
  -[LocalProxyConnection _httpReceive](self, "_httpReceive");
}