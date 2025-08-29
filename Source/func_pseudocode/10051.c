-[TSPCompressionComponentWriteChannel .cxx_destruct]
void __cdecl -[TSPCompressionComponentWriteChannel .cxx_destruct](TSPCompressionComponentWriteChannel *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_compressor, 0LL);
  objc_storeStrong((id *)&self->_writeChannel, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_writeQueue, 0LL);
}