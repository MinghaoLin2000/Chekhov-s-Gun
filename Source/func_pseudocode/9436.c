-[TSPPackage dataAtRelativePath:allowDecryption:error:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[TSPPackage dataAtRelativePath:allowDecryption:error:](TSPPackage *self, SEL a2, id a3, bool a4, id *a5)
{
  _BOOL4 v5; // w20
  TSPCryptoTranscodeReadChannel *v7; // x19
  TSPCryptoTranscodeReadChannel *v8; // x21
  id v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = a4;
  v7 = -[TSPPackage newRawDataReadChannelAtRelativePath:](self, "newRawDataReadChannelAtRelativePath:", a3, a4, a5);
  if ( v7 && v5 )
  {
    if ( !self->_decryptionKey )
    {
LABEL_6:
      v9 = objc_retainAutoreleasedReturnValue(+[TSPReadChannelUtils dataFromReadChannel:](&OBJC_CLASS___TSPReadChannelUtils, "dataFromReadChannel:", v7));
      goto LABEL_8;
    }
    v8 = -[TSPCryptoTranscodeReadChannel initWithReadChannel:decryptionInfo:encryptionInfo:](
           objc_alloc(&OBJC_CLASS___TSPCryptoTranscodeReadChannel),
           "initWithReadChannel:decryptionInfo:encryptionInfo:",
           v7,
           self->_decryptionKey,
           0LL);
    objc_release(v7);
    v7 = v8;
  }
  if ( v7 )
    goto LABEL_6;
  v9 = 0LL;
LABEL_8:
  -[TSPCryptoTranscodeReadChannel close](v7, "close");
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}