-[TSUBufferedReadChannel _close]
void __cdecl -[TSUBufferedReadChannel _close](TSUBufferedReadChannel *self, SEL a2)
{
  TSUReadChannel *sourceReadChannel; // x0
  id streamReadChannelSourceHandler; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[TSUBufferedReadChannel _closeStreamReadChannel](self, "_closeStreamReadChannel");
  -[TSUReadChannel close](self->_sourceReadChannel, "close");
  sourceReadChannel = self->_sourceReadChannel;
  self->_sourceReadChannel = 0LL;
  objc_release(sourceReadChannel);
  streamReadChannelSourceHandler = self->_streamReadChannelSourceHandler;
  self->_streamReadChannelSourceHandler = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(streamReadChannelSourceHandler);
}