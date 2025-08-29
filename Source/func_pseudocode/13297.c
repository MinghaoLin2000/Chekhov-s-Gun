+[NSData tsu_decodeFromHexidecimalString:]
id __cdecl +[NSData tsu_decodeFromHexidecimalString:](id a1, SEL a2, id a3)
{
  id v3; // x19
  unsigned __int64 v4; // x22
  _BYTE *v5; // x0
  _BYTE *v6; // x20
  unsigned __int64 v7; // x21
  __int64 v8; // x23
  __int64 v9; // x22
  _BYTE *v10; // x27
  unsigned int v11; // w0
  char v12; // w8
  char v13; // w28
  unsigned int v14; // w0
  char v15; // w8
  void *v16; // x20
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retain(a3);
  if ( !objc_msgSend(v3, "length") || ((unsigned int)objc_msgSend(v3, "length") & 1) != 0 )
  {
    v16 = 0LL;
  }
  else
  {
    v4 = (unsigned __int64)objc_msgSend(v3, "length");
    v5 = malloc_type_calloc(2 * v4, 1uLL, 0x100004077774924uLL);
    v6 = v5;
    v7 = v4 >> 1;
    if ( v4 >= 2 )
    {
      if ( v7 <= 1 )
        v8 = 1LL;
      else
        v8 = v4 >> 1;
      v9 = 1LL;
      v10 = v5;
      do
      {
        v11 = (unsigned int)objc_msgSend(v3, "characterAtIndex:", v9 - 1);
        if ( v11 <= 0x39 )
          v12 = 0;
        else
          v12 = 57;
        v13 = v12 + v11;
        v14 = (unsigned int)objc_msgSend(v3, "characterAtIndex:", v9);
        if ( v14 <= 0x39 )
          v15 = -48;
        else
          v15 = -55;
        *v10++ = v15 + v14 + 16 * v13;
        v9 += 2LL;
        --v8;
      }
      while ( v8 );
    }
    v16 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSData), "initWithBytesNoCopy:length:freeWhenDone:", v6, v7, 1LL);
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v16);
}