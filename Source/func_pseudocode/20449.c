-[PrintdRPCService .cxx_destruct]
void __cdecl -[PrintdRPCService .cxx_destruct](PrintdRPCService *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_streamingSession, 0LL);
  objc_storeStrong((id *)&self->_standardSession, 0LL);
  objc_storeStrong((id *)&self->_debugDict, 0LL);
  objc_storeStrong((id *)&self->_logLeader, 0LL);
  objc_storeStrong((id *)&self->_browser, 0LL);
  objc_storeStrong((id *)&self->_spoolClient, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_connection, 0LL);
}