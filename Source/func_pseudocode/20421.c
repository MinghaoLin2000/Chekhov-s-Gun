-[PrintdRPCService ippNetworkingSessionForStreaming]
id __cdecl -[PrintdRPCService ippNetworkingSessionForStreaming](PrintdRPCService *self, SEL a2)
{
  IPPSession *streamingSession; // x0
  IPPSession *v4; // x0
  IPPSession *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  streamingSession = self->_streamingSession;
  if ( !streamingSession )
  {
    v4 = (IPPSession *)objc_retainAutoreleasedReturnValue(-[PrintdRPCService _ippNetworkingSession:](self, "_ippNetworkingSession:", 1LL));
    v5 = self->_streamingSession;
    self->_streamingSession = v4;
    objc_release(v5);
    streamingSession = self->_streamingSession;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(streamingSession);
}