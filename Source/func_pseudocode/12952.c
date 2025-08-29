-[TSUBufferedReadChannel setStreamReadChannelSourceHandler:]
void __cdecl -[TSUBufferedReadChannel setStreamReadChannelSourceHandler:](TSUBufferedReadChannel *self, SEL a2, id a3)
{
  id v4; // x0
  id streamReadChannelSourceHandler; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainBlock(a3);
  streamReadChannelSourceHandler = self->_streamReadChannelSourceHandler;
  self->_streamReadChannelSourceHandler = v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(streamReadChannelSourceHandler);
}