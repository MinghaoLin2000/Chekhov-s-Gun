-[SFUReadChannelNSInputStreamAdaptor initWithSFUInputStream:]
SFUReadChannelNSInputStreamAdaptor *__cdecl -[SFUReadChannelNSInputStreamAdaptor initWithSFUInputStream:](
        SFUReadChannelNSInputStreamAdaptor *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  void *v6; // x22
  SFUReadChannelNSInputStreamAdaptor *v7; // x21
  objc_super v9; // [xsp+8h] [xbp-38h] BYREF
  char v10; // [xsp+1Fh] [xbp-21h] BYREF

  v5 = objc_retain(a3);
  v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSData), "initWithBytes:length:", &v10, 0LL);
  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___SFUReadChannelNSInputStreamAdaptor;
  v7 = -[SFUReadChannelNSInputStreamAdaptor initWithData:](&v9, "initWithData:", v6);
  objc_release(v6);
  if ( v7 )
  {
    objc_storeStrong((id *)&v7->_inputStream, a3);
    objc_storeWeak((id *)&v7->_delegate, v7);
    atomic_store(0LL, &v7->_status);
  }
  objc_release(v5);
  return v7;
}