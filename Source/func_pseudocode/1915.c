-[DeviceServiceSideConnection pairDeviceWithIdentifier:withReply:]
void __cdecl -[DeviceServiceSideConnection pairDeviceWithIdentifier:withReply:](
        DeviceServiceSideConnection *self,
        SEL a2,
        id a3,
        id a4)
{
  NSXPCConnection *clientConnection; // x20
  id v6; // x21
  id v7; // x19
  id v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  clientConnection = self->_clientConnection;
  v6 = objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection remoteObjectProxy](clientConnection, "remoteObjectProxy"));
  objc_msgSend(v8, "pairDeviceWithIdentifier:withReply:", v7, v6);
  objc_release(v6);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}