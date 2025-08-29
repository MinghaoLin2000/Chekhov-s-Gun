-[TSUBufferedReadChannel .cxx_destruct]
void __cdecl -[TSUBufferedReadChannel .cxx_destruct](TSUBufferedReadChannel *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_currentStreamOutputData, 0LL);
  objc_storeStrong(&self->_streamReadChannelSourceHandler, 0LL);
  objc_storeStrong((id *)&self->_streamReadChannel, 0LL);
  objc_storeStrong(&self->_streamReadChannelBlock, 0LL);
  objc_storeStrong((id *)&self->_blockInfos, 0LL);
  objc_storeStrong((id *)&self->_sourceReadChannelError, 0LL);
  objc_storeStrong((id *)&self->_sourceReadChannel, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_readQueue, 0LL);
}