-[TSUReadChannelInputStreamAdapter canSeek]
bool __cdecl -[TSUReadChannelInputStreamAdapter canSeek](TSUReadChannelInputStreamAdapter *self, SEL a2)
{
  return self->_readChannel != 0LL;
}