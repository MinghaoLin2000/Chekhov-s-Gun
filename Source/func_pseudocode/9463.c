-[TSPCryptoTranscodeReadChannel readWithHandler:]
void __cdecl -[TSPCryptoTranscodeReadChannel readWithHandler:](TSPCryptoTranscodeReadChannel *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  TSPIOHandlerWriteChannelAdapter *v6; // x20
  TSPCryptoComponentWriteChannel *v7; // x22
  TSUStreamReadChannel *readChannel; // x23
  TSPIOHandlerWriteChannelAdapter *v9; // x21
  TSPCryptoComponentWriteChannel *v10; // x22
  TSUStreamReadChannel *v11; // x20
  _QWORD v12[4]; // [xsp+0h] [xbp-B0h] BYREF
  TSPIOHandlerWriteChannelAdapter *v13; // [xsp+20h] [xbp-90h]
  _QWORD v14[4]; // [xsp+28h] [xbp-88h] BYREF
  id v15; // [xsp+48h] [xbp-68h]
  id v16; // [xsp+50h] [xbp-60h]
  _QWORD *v17; // [xsp+58h] [xbp-58h]
  _QWORD v18[3]; // [xsp+60h] [xbp-50h] BYREF
  char v19; // [xsp+78h] [xbp-38h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( self->_encryptionInfo )
  {
    v6 = -[TSPIOHandlerWriteChannelAdapter initWithHandler:](
           objc_alloc(&OBJC_CLASS___TSPIOHandlerWriteChannelAdapter),
           "initWithHandler:",
           v4);
    v7 = -[TSPCryptoComponentWriteChannel initWithWriteChannel:encryptionInfo:](
           objc_alloc(&OBJC_CLASS___TSPCryptoComponentWriteChannel),
           "initWithWriteChannel:encryptionInfo:",
           v6,
           self->_encryptionInfo);
    v18[0] = 0LL;
    v18[1] = v18;
    v18[2] = 0x2020000000LL;
    v19 = 0;
    readChannel = self->_readChannel;
    v14[0] = _NSConcreteStackBlock;
    v14[1] = 3254779904LL;
    v14[2] = sub_1000336C0;
    v14[3] = &unk_1001D3440;
    v17 = v18;
    v9 = objc_retain(v6);
    v15 = v9;
    v16 = v7;
    v10 = objc_retain(v7);
    -[TSUStreamReadChannel readWithHandler:](readChannel, "readWithHandler:", v14);
    objc_release(v16);
    objc_release(v15);
    objc_release(v10);
    _Block_object_dispose(v18, 8);
  }
  else
  {
    v11 = self->_readChannel;
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 3254779904LL;
    v12[2] = sub_10003379C;
    v12[3] = &unk_1001D3470;
    v13 = (TSPIOHandlerWriteChannelAdapter *)objc_retain(v4);
    -[TSUStreamReadChannel readWithHandler:](v11, "readWithHandler:", v12);
    v9 = v13;
  }
  objc_release(v9);
  objc_release(v5);
}