-[NSString tsu_uncommentedAddress]
id __cdecl -[NSString tsu_uncommentedAddress](NSString *self, SEL a2)
{
  unsigned __int64 v3; // x21
  char *v4; // x0
  char *v5; // x19
  char *v6; // x26
  unsigned __int64 v7; // x22
  int v8; // w27
  char v9; // w28
  __int64 v10; // x0
  int v11; // w23
  __int64 v12; // x8
  char *v13; // x21
  __int64 v14; // x20
  unsigned __int64 v15; // x0
  int v16; // w0
  void *v17; // x20
  char v19; // [xsp+8h] [xbp-58h]
  char v20; // [xsp+Ch] [xbp-54h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v3 = -[NSString length](self, "length");
  v4 = (char *)NSZoneMalloc(0LL, 2 * v3 + 2);
  v5 = v4;
  v6 = v4;
  if ( v3 )
  {
    v7 = 0LL;
    v8 = 0;
    v9 = 0;
    v19 = 0;
    v20 = 1;
    v6 = v4;
    do
    {
      v10 = -[NSString characterAtIndex:](self, "characterAtIndex:", v7);
      v11 = v10;
      if ( (_DWORD)v10 == 92 )
      {
        if ( v7 + 1 >= v3 )
        {
          if ( (v9 & 1) == 0 )
          {
            if ( v8 < 1 )
              goto LABEL_18;
LABEL_15:
            v9 = 0;
            v8 -= v10 == 41;
            goto LABEL_24;
          }
LABEL_10:
          *(_WORD *)v6 = v10;
          v6 += 2;
          v9 &= (_DWORD)v10 != 34;
          goto LABEL_24;
        }
        *(_WORD *)v6 = 92;
        *((_WORD *)v6 + 1) = -[NSString characterAtIndex:](self, "characterAtIndex:", v7 + 1);
        v6 += 4;
        ++v7;
      }
      else
      {
        if ( (v9 & 1) != 0 )
          goto LABEL_10;
        if ( (_DWORD)v10 == 40 )
        {
          v9 = 0;
          ++v8;
        }
        else
        {
          if ( v8 > 0 )
            goto LABEL_15;
          if ( (_DWORD)v10 != 60 )
          {
            if ( ((unsigned __int8)v19 & ((_DWORD)v10 == 62)) != 0 )
              break;
            if ( (unsigned int)v10 > 0x7F )
            {
              if ( (unsigned int)__maskrune(v10, 0x4000LL) )
              {
LABEL_19:
                v9 = 0;
                if ( (v20 & 1) == 0 )
                {
                  *(_WORD *)v6 = 32;
                  v6 += 2;
                }
                v20 = 1;
                goto LABEL_24;
              }
            }
            else
            {
LABEL_18:
              if ( (_DefaultRuneLocale.__runetype[(unsigned int)v10] & 0x4000) != 0 )
                goto LABEL_19;
            }
            v20 = 0;
            *(_WORD *)v6 = v11;
            v6 += 2;
            v9 |= v11 == 34;
            goto LABEL_24;
          }
          v9 = 0;
          v19 = 1;
          v6 = v5;
        }
      }
LABEL_24:
      ++v7;
    }
    while ( v7 < v3 );
  }
  v12 = v6 - v5;
  do
  {
    v13 = v6;
    v14 = v12;
    if ( v6 <= v5 )
      break;
    v6 -= 2;
    v15 = *((unsigned __int16 *)v13 - 1);
    v16 = v15 > 0x7F ? __maskrune(v15, 0x4000LL) : _DefaultRuneLocale.__runetype[v15] & 0x4000;
    v12 = v14 - 2;
  }
  while ( v16 );
  *(_WORD *)v13 = 0;
  v17 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithCharacters:length:", v5, v14 >> 1);
  NSZoneFree(0LL, v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v17);
}