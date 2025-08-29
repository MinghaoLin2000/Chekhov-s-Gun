+[DocumentCompressor decompress:forScheme:]
id __cdecl +[DocumentCompressor decompress:forScheme:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  NSMutableData *v7; // x21
  int v8; // w1
  id v9; // x22
  int v10; // w0
  char v11; // w24
  char v12; // w8
  NSMutableData *v13; // x22
  z_stream strm; // [xsp+10h] [xbp-20C0h] BYREF
  _BYTE v16[8192]; // [xsp+88h] [xbp-2048h] BYREF
  __int64 vars8; // [xsp+20D8h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_opt_new(&OBJC_CLASS___NSMutableData);
  if ( ((unsigned int)objc_msgSend(v6, "isEqualToString:", CFSTR("gzip")) & 1) != 0 )
  {
    v8 = 27;
  }
  else
  {
    if ( ((unsigned int)objc_msgSend(v6, "isEqual:", CFSTR("deflate")) & 1) == 0 )
    {
      if ( ((unsigned int)objc_msgSend(v6, "isEqual:", CFSTR("none")) & 1) == 0 )
      {
        NSLog(&CFSTR("Unknown coding scheme; %@").isa, v6);
        abort();
      }
      v13 = (NSMutableData *)objc_retain(v5);
      goto LABEL_20;
    }
    v8 = -11;
  }
  memset(&strm, 0, sizeof(strm));
  inflateInit2_(&strm, v8, "1.2.12", 112);
  v9 = objc_retainAutorelease(v5);
  strm.next_in = (Bytef *)objc_msgSend(v9, "bytes");
  strm.avail_in = (unsigned int)objc_msgSend(v9, "length");
  if ( !strm.avail_in )
    goto LABEL_19;
  while ( 1 )
  {
    strm.next_out = v16;
    strm.avail_out = 0x2000;
    v10 = inflate(&strm, 0);
    if ( !v10 )
    {
      v11 = 0;
      goto LABEL_10;
    }
    if ( v10 != 1 )
      break;
    v11 = 1;
LABEL_10:
    -[NSMutableData appendBytes:length:](v7, "appendBytes:length:", v16, 0x2000LL - strm.avail_out);
    if ( strm.avail_in )
      v12 = v11 ^ 1;
    else
      v12 = 0;
    if ( (v12 & 1) == 0 )
      goto LABEL_19;
  }
  if ( v10 == -3 )
  {
    NSLog(&CFSTR("not setup for this correctly").isa);
    __assert_rtn("+[DocumentCompressor decompress:forScheme:]", "DocumentCompressor.mm", 232, "false");
  }
  objc_release(v7);
  v7 = 0LL;
LABEL_19:
  v13 = objc_retain(v7);
  v7 = v13;
LABEL_20:
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}