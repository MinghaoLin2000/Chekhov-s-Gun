-[AUHelperInstance remoteObject]
AUHelperServiceProtocol *__cdecl -[AUHelperInstance remoteObject](AUHelperInstance *self, SEL a2)
{
  NSXPCConnection *xpcConnection; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  xpcConnection = self->_xpcConnection;
  if ( xpcConnection )
    xpcConnection = (NSXPCConnection *)objc_retainAutoreleasedReturnValue(
                                         -[NSXPCConnection synchronousRemoteObjectProxyWithErrorHandler:](
                                           xpcConnection,
                                           "synchronousRemoteObjectProxyWithErrorHandler:",
                                           &stru_100031758));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (AUHelperServiceProtocol *)objc_autoreleaseReturnValue(xpcConnection);
}