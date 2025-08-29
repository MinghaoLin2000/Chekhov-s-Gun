-[TSUCompressionReadChannel close]
void __cdecl -[TSUCompressionReadChannel close](TSUCompressionReadChannel *self, SEL a2)
{
  TSUStreamReadChannel *readChannel; // x0
  TSUStreamCompression *compressor; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[TSUStreamReadChannel close](self->_readChannel, "close");
  readChannel = self->_readChannel;
  self->_readChannel = 0LL;
  objc_release(readChannel);
  compressor = self->_compressor;
  self->_compressor = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(compressor);
}