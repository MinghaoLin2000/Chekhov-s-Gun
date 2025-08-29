-[SFUReadChannelNSInputStreamAdaptor streamStatus]
unsigned __int64 __cdecl -[SFUReadChannelNSInputStreamAdaptor streamStatus](
        SFUReadChannelNSInputStreamAdaptor *self,
        SEL a2)
{
  return atomic_load(&self->_status);
}