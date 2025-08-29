-[SFUReadChannelNSInputStreamAdaptor setDelegate:]
void __cdecl -[SFUReadChannelNSInputStreamAdaptor setDelegate:](
        SFUReadChannelNSInputStreamAdaptor *self,
        SEL a2,
        id a3)
{
  void *v3; // x1

  if ( a3 )
    v3 = a3;
  else
    v3 = self;
  objc_storeWeak((id *)&self->_delegate, v3);
}