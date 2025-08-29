-[XPCSignpostReader gzipDeflate:]
id __cdecl -[XPCSignpostReader gzipDeflate:](XPCSignpostReader *self, SEL a2, id a3)
{
  id v3; // x19
  id v4; // x20
  NSData *v5; // x20
  NSMutableData *v6; // x20
  uLong total_out; // x21
  NSMutableData *v8; // x21
  char *v9; // x0
  unsigned int v10; // w0
  z_stream v12; // [xsp+0h] [xbp-90h] BYREF
  __int64 vars8; // [xsp+98h] [xbp+8h]

  v3 = objc_retain(a3);
  if ( objc_msgSend(v3, "length") )
  {
    memset(&v12.total_out, 0, 72);
    v4 = objc_retainAutorelease(v3);
    v12.avail_in = (unsigned int)objc_msgSend(
                                   v4,
                                   "length",
                                   objc_msgSend(v4, "bytes"),
                                   (unsigned __int128)0,
                                   (unsigned __int128)0);
    v5 = 0LL;
    if ( !deflateInit2_(&v12, -1, 8, 31, 8, 0, "1.2.12", 112) )
    {
      v6 = objc_retainAutoreleasedReturnValue(+[NSMutableData dataWithLength:](&OBJC_CLASS___NSMutableData, "dataWithLength:", 0x4000LL));
      do
      {
        total_out = v12.total_out;
        if ( total_out >= -[NSMutableData length](v6, "length") )
          -[NSMutableData increaseLengthBy:](v6, "increaseLengthBy:", 0x4000LL);
        v8 = objc_retainAutorelease(v6);
        v9 = -[NSMutableData mutableBytes](v8, "mutableBytes");
        v12.next_out = (Bytef *)&v9[v12.total_out];
        v10 = (unsigned int)-[NSMutableData length](v8, "length");
        v12.avail_out = v10 - LODWORD(v12.total_out);
        deflate(&v12, 4);
      }
      while ( !v12.avail_out );
      deflateEnd(&v12);
      -[NSMutableData setLength:](v8, "setLength:", v12.total_out);
      v5 = objc_retainAutoreleasedReturnValue(+[NSData dataWithData:](&OBJC_CLASS___NSData, "dataWithData:", v8));
      objc_release(v8);
    }
  }
  else
  {
    v5 = (NSData *)objc_retain(v3);
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}