-[SFUReadChannelNSInputStreamAdaptor close]
void __cdecl -[SFUReadChannelNSInputStreamAdaptor close](SFUReadChannelNSInputStreamAdaptor *self, SEL a2)
{
  SFUInputStream *inputStream; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  atomic_store(6uLL, &self->_status);
  -[SFUInputStream close](self->_inputStream, "close");
  inputStream = self->_inputStream;
  self->_inputStream = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(inputStream);
}