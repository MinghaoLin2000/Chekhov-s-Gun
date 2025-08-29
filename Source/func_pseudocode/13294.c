-[NSData tsu_encodeToHexidecimalString]
id __cdecl -[NSData tsu_encodeToHexidecimalString](NSData *self, SEL a2)
{
  char *v3; // x0
  NSUInteger v4; // x20
  unsigned __int8 *v5; // x22
  __int64 v6; // x19
  _BYTE *v7; // x8
  char v8; // w9
  unsigned int v9; // t1
  int v10; // w11
  int v11; // w10
  char v12; // w9
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = -[NSData length](self, "length");
  if ( v3 )
  {
    v4 = -[NSData length](self, "length");
    v5 = -[NSData bytes](objc_retainAutorelease(self), "bytes");
    v6 = 2 * v4;
    v3 = (char *)malloc_type_calloc(2 * v4, 1uLL, 0x100004077774924uLL);
    if ( v3 )
    {
      if ( v4 )
      {
        v7 = v3 + 1;
        do
        {
          v9 = *v5++;
          v8 = v9;
          v10 = (v9 >> 4) + 55;
          v11 = (v9 >> 4) | 0x30;
          if ( v9 > 0x9F )
            LOBYTE(v11) = v10;
          *(v7 - 1) = v11;
          if ( (v8 & 0xFu) <= 9 )
            v12 = v8 & 0xF | 0x30;
          else
            v12 = (v8 & 0xF) + 55;
          *v7 = v12;
          v7 += 2;
          --v4;
        }
        while ( v4 );
      }
      v3 = (char *)objc_msgSend(
                     objc_alloc((Class)&OBJC_CLASS___NSString),
                     "initWithBytesNoCopy:length:encoding:freeWhenDone:",
                     v3,
                     v6,
                     1LL,
                     1LL);
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}