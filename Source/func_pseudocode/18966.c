-[RemoteViewBridgeViewController .cxx_destruct]
void __cdecl -[RemoteViewBridgeViewController .cxx_destruct](RemoteViewBridgeViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_proxy, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak(&self->_delegate);
}