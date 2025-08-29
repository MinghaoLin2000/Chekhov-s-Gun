-[NSArray tsu_initWithUIntegers:count:]
id __cdecl -[NSArray tsu_initWithUIntegers:count:](
        NSArray *self,
        SEL a2,
        const unsigned __int64 *a3,
        unsigned __int64 a4)
{
  _BYTE *v7; // x22
  __int64 v8; // x23
  NSArray *v9; // x19
  _BYTE v11[128]; // [xsp+8h] [xbp-B8h] BYREF
  __int64 vars8; // [xsp+C8h] [xbp+8h]

  if ( a4 < 0x11 )
  {
    if ( !a4 )
      return -[NSArray initWithObjects:count:](self, "initWithObjects:count:", v11, 0LL);
    v7 = v11;
LABEL_5:
    v8 = 0LL;
    do
    {
      *(_QWORD *)&v7[8 * v8] = +[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", a3[v8]);
      ++v8;
    }
    while ( a4 != v8 );
    v9 = -[NSArray initWithObjects:count:](self, "initWithObjects:count:", v7, a4);
    if ( v7 != v11 )
      free(v7);
    return v9;
  }
  v7 = malloc_type_calloc(a4, 8uLL, 0x80040B8603338uLL);
  if ( v7 )
    goto LABEL_5;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[NSArray initWithObjects:count:](self, "initWithObjects:count:", 0LL, a4);
}