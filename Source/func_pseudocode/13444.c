-[TSUReadChannelInputStreamAdapter initWithReadChannel:length:closeChannelOnClose:]
TSUReadChannelInputStreamAdapter *__cdecl -[TSUReadChannelInputStreamAdapter initWithReadChannel:length:closeChannelOnClose:](
        TSUReadChannelInputStreamAdapter *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        bool a5)
{
  id v9; // x21
  TSUReadChannelInputStreamAdapter *v10; // x0
  TSUReadChannelInputStreamAdapter *v11; // x23
  objc_super v13; // [xsp+0h] [xbp-40h] BYREF

  v9 = objc_retain(a3);
  v13.receiver = self;
  v13.super_class = (Class)&OBJC_CLASS___TSUReadChannelInputStreamAdapter;
  v10 = -[TSUReadChannelInputStreamAdapter init](&v13, "init");
  v11 = v10;
  if ( v10 )
  {
    objc_storeStrong((id *)&v10->_readChannel, a3);
    objc_storeStrong((id *)&v11->_leftoverData, &_dispatch_data_empty);
    v11->_length = a4;
    v11->_closeChannelOnClose = a5;
  }
  objc_release(v9);
  return v11;
}