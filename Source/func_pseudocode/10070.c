-[TSPComponentWriteChannelAdapter _close]
void __cdecl -[TSPComponentWriteChannelAdapter _close](TSPComponentWriteChannelAdapter *self, SEL a2)
{
  TSUFileIOChannel *channel; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  (*((void (**)(void))self->_handler + 2))();
  -[TSUFileIOChannel close](self->_channel, "close");
  channel = self->_channel;
  self->_channel = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(channel);
}