-[TSUZipInflateReadChannel initWithReadChannel:uncompressedSize:CRC:validateCRC:]
TSUZipInflateReadChannel *__cdecl -[TSUZipInflateReadChannel initWithReadChannel:uncompressedSize:CRC:validateCRC:](
        TSUZipInflateReadChannel *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        unsigned int a5,
        bool a6)
{
  id v11; // x19
  TSUZipInflateReadChannel *v12; // x0
  TSUZipInflateReadChannel *v13; // x20
  void *v14; // x21
  objc_super v16; // [xsp+0h] [xbp-40h] BYREF

  v11 = objc_retain(a3);
  v16.receiver = self;
  v16.super_class = (Class)&OBJC_CLASS___TSUZipInflateReadChannel;
  v12 = -[TSUZipInflateReadChannel init](&v16, "init");
  v13 = v12;
  if ( v12 )
  {
    objc_storeStrong((id *)&v12->_readChannel, a3);
    v13->_stream.next_in = 0LL;
    v13->_remainingUncompressedSize = a4;
    v13->_CRC = a5;
    v13->_validateCRC = a6;
    v13->_stream.avail_in = 0;
    v13->_stream.avail_out = 0;
    v13->_stream.next_out = 0LL;
    v13->_stream.zfree = 0LL;
    v13->_stream.opaque = 0LL;
    v13->_stream.zalloc = 0LL;
    if ( inflateInit2_(&v13->_stream, -15, "1.2.12", 112) )
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001DE3B8);
      v14 = TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_100171EA0(v14);
      objc_release(v13);
      v13 = 0LL;
    }
  }
  objc_release(v11);
  return v13;
}