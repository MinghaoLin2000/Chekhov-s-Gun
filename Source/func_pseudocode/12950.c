-[TSUBufferedReadChannel _closeStreamReadChannel]
void __cdecl -[TSUBufferedReadChannel _closeStreamReadChannel](TSUBufferedReadChannel *self, SEL a2)
{
  TSUStreamReadChannel *streamReadChannel; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[TSUStreamReadChannel close](self->_streamReadChannel, "close");
  streamReadChannel = self->_streamReadChannel;
  self->_streamReadChannel = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(streamReadChannel);
}