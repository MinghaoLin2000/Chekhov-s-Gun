-[SFUReadChannelNSInputStreamAdaptor read:maxLength:]
signed __int64 __cdecl -[SFUReadChannelNSInputStreamAdaptor read:maxLength:](
        SFUReadChannelNSInputStreamAdaptor *self,
        SEL a2,
        char *a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // x9
  signed __int64 result; // x0
  unsigned __int64 v7; // x9

  v4 = atomic_load(&self->_status);
  if ( v4 != 2 )
    return -1LL;
  atomic_store(3uLL, &self->_status);
  result = (signed __int64)-[SFUInputStream readToBuffer:size:](self->_inputStream, "readToBuffer:size:", a3, a4);
  if ( result )
    v7 = 2LL;
  else
    v7 = 5LL;
  atomic_store(v7, &self->_status);
  return result;
}