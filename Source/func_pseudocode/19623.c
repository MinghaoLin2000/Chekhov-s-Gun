-[DocumentCompressor initWithName:]
DocumentCompressor *__cdecl -[DocumentCompressor initWithName:](DocumentCompressor *self, SEL a2, id a3)
{
  id v5; // x19
  DocumentCompressor *v6; // x0
  DocumentCompressor *v7; // x20
  int v8; // w21
  z_stream *v9; // x0
  objc_super v11; // [xsp+0h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___DocumentCompressor;
  v6 = -[DocumentCompressor init](&v11, "init");
  v7 = v6;
  if ( v6 )
  {
    objc_storeStrong((id *)&v6->_name, a3);
    if ( ((unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("gzip")) & 1) != 0 )
    {
      v8 = 27;
    }
    else if ( ((unsigned int)objc_msgSend(v5, "isEqual:", CFSTR("deflate")) & 1) != 0 )
    {
      v8 = -11;
    }
    else
    {
      if ( (unsigned int)objc_msgSend(v5, "isEqual:", CFSTR("none")) )
      {
        v7->_stream = 0LL;
        goto LABEL_11;
      }
      v8 = -1;
    }
    v9 = (z_stream *)malloc_type_calloc(1uLL, 0x70uLL, 0x10B0040E8CA615DuLL);
    v7->_stream = v9;
    if ( deflateInit2_(v9, -1, 8, v8, 7, 0, "1.2.12", 112) < 0 )
    {
      free(v7->_stream);
      v7->_stream = 0LL;
      objc_release(v7);
      v7 = 0LL;
    }
  }
LABEL_11:
  objc_release(v5);
  return v7;
}