-[SFUReadChannelNSInputStreamAdaptor .cxx_destruct]
void __cdecl -[SFUReadChannelNSInputStreamAdaptor .cxx_destruct](SFUReadChannelNSInputStreamAdaptor *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_streamError, 0LL);
  objc_destroyWeak((id *)&self->_delegate);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_inputStream, 0LL);
}