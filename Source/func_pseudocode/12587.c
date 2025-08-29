-[SFUReadChannelNSInputStreamAdaptor open]
void __cdecl -[SFUReadChannelNSInputStreamAdaptor open](SFUReadChannelNSInputStreamAdaptor *self, SEL a2)
{
  if ( !atomic_load(&self->_status) )
    atomic_store(2uLL, &self->_status);
}