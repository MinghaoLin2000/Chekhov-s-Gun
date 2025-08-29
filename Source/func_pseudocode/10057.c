+[NSData tsp_dataWithContentsOfURL:decryptionKey:]
id __cdecl +[NSData tsp_dataWithContentsOfURL:decryptionKey:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  id v7; // x21
  TSPCryptoTranscodeReadChannel *v8; // x23
  id v9; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = -[TSUFileIOChannel initForReadingURL:error:](
         objc_alloc(&OBJC_CLASS___TSUFileIOChannel),
         "initForReadingURL:error:",
         v5,
         0LL);
  if ( v7 )
  {
    v8 = -[TSPCryptoTranscodeReadChannel initWithReadChannel:decryptionInfo:encryptionInfo:](
           objc_alloc(&OBJC_CLASS___TSPCryptoTranscodeReadChannel),
           "initWithReadChannel:decryptionInfo:encryptionInfo:",
           v7,
           v6,
           0LL);
    v9 = objc_retainAutoreleasedReturnValue(+[NSData tsp_dataWithTranscoder:](&OBJC_CLASS___NSData, "tsp_dataWithTranscoder:", v8));
    objc_release(v8);
  }
  else
  {
    v9 = 0LL;
  }
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}