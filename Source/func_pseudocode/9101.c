-[TSPSnappyReadChannel close]
void __cdecl -[TSPSnappyReadChannel close](TSPSnappyReadChannel *self, SEL a2)
{
  TSUStreamReadChannel *readChannel; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[TSUStreamReadChannel close](self->_readChannel, "close");
  readChannel = self->_readChannel;
  self->_readChannel = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(readChannel);
}