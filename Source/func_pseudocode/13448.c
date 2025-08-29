-[TSUReadChannelInputStreamAdapter close]
void __cdecl -[TSUReadChannelInputStreamAdapter close](TSUReadChannelInputStreamAdapter *self, SEL a2)
{
  TSUReadChannel *readChannel; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( self->_closeChannelOnClose )
    -[TSUReadChannel close](self->_readChannel, "close");
  readChannel = self->_readChannel;
  self->_readChannel = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(readChannel);
}