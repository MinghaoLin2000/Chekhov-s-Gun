-[PrintdRPCService ippNetworkingSession]
IPPSession *__cdecl -[PrintdRPCService ippNetworkingSession](PrintdRPCService *self, SEL a2)
{
  IPPSession *standardSession; // x0
  IPPSession *v4; // x0
  IPPSession *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  standardSession = self->_standardSession;
  if ( !standardSession )
  {
    v4 = (IPPSession *)objc_retainAutoreleasedReturnValue(-[PrintdRPCService _ippNetworkingSession:](self, "_ippNetworkingSession:", 0LL));
    v5 = self->_standardSession;
    self->_standardSession = v4;
    objc_release(v5);
    standardSession = self->_standardSession;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(standardSession);
}