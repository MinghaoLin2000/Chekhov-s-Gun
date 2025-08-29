-[NSData tsp_dataWithDecryptionKey:]
id __cdecl -[NSData tsp_dataWithDecryptionKey:](NSData *self, SEL a2, id a3)
{
  id v4; // x19
  TSPMemoryReadChannel *v5; // x20
  TSPCryptoTranscodeReadChannel *v6; // x22
  id v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = -[TSPMemoryReadChannel initWithNSData:](objc_alloc(&OBJC_CLASS___TSPMemoryReadChannel), "initWithNSData:", self);
  if ( v5 )
  {
    v6 = -[TSPCryptoTranscodeReadChannel initWithReadChannel:decryptionInfo:encryptionInfo:](
           objc_alloc(&OBJC_CLASS___TSPCryptoTranscodeReadChannel),
           "initWithReadChannel:decryptionInfo:encryptionInfo:",
           v5,
           v4,
           0LL);
    v7 = objc_retainAutoreleasedReturnValue(+[NSData tsp_dataWithTranscoder:](&OBJC_CLASS___NSData, "tsp_dataWithTranscoder:", v6));
    objc_release(v6);
  }
  else
  {
    v7 = 0LL;
  }
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}