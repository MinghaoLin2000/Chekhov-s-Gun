+[NSString tsu_stringWithHexFromBytes:length:]
id __cdecl +[NSString tsu_stringWithHexFromBytes:length:](id a1, SEL a2, const char *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // x21
  unsigned __int64 v6; // x19
  _BYTE *v7; // x0
  _BYTE *v8; // x9
  unsigned int v9; // t1
  void *v10; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a4;
  v6 = 2 * a4;
  v7 = malloc_type_malloc(2 * a4, 0x9F79277AuLL);
  if ( v4 )
  {
    v8 = v7;
    do
    {
      v9 = *(unsigned __int8 *)a3++;
      *v8 = a0123456789abcd_0[(unsigned __int64)v9 >> 4];
      v8[1] = a0123456789abcd_0[v9 & 0xF];
      v8 += 2;
      --v4;
    }
    while ( v4 );
  }
  v10 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___NSString),
          "initWithBytesNoCopy:length:encoding:freeWhenDone:",
          v7,
          v6,
          1LL,
          1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}