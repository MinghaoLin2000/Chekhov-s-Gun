+[NSString tsu_stringByBase64EncodingBytes:length:breakLines:]
id __cdecl +[NSString tsu_stringByBase64EncodingBytes:length:breakLines:](
        id a1,
        SEL a2,
        const char *a3,
        unsigned __int64 a4,
        bool a5)
{
  _BOOL4 v5; // w22
  unsigned __int64 v6; // x21
  NSMutableString *v8; // x19
  __int64 v9; // x25
  const char *v10; // x26
  int v11; // w27
  unsigned int v12; // w28
  __int64 v13; // x8
  const char *v14; // x8
  __int64 v16; // [xsp+10h] [xbp-70h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v5 = a5;
  v6 = a4;
  v8 = objc_retainAutoreleasedReturnValue(+[NSMutableString stringWithCapacity:](&OBJC_CLASS___NSMutableString, "stringWithCapacity:", 4 * a4 / 3));
  if ( v6 < 3 )
  {
    v13 = 0LL;
  }
  else
  {
    v9 = 0LL;
    v10 = a3 + 2;
    v11 = -4;
    v12 = 4;
    do
    {
      -[NSMutableString appendFormat:](
        v8,
        "appendFormat:",
        CFSTR("%c%c%c%c"),
        aAbcdefghijklmn[(unsigned __int8)*(v10 - 2) >> 2],
        aAbcdefghijklmn[((unsigned __int64)((*((unsigned __int8 *)v10 - 1) << 8) | (*((unsigned __int8 *)v10 - 2) << 16)) >> 12) & 0x3F],
        aAbcdefghijklmn[((unsigned __int64)(*(unsigned __int8 *)v10 | (*((unsigned __int8 *)v10 - 1) << 8)) >> 6) & 0x3F],
        aAbcdefghijklmn[*v10 & 0x3F]);
      if ( v5 && !(v11 + 76 * (v12 / 0x4C)) )
        -[NSMutableString appendString:](v8, "appendString:", CFSTR("\n"));
      v10 += 3;
      v11 -= 4;
      v12 += 4;
      v9 -= 3LL;
    }
    while ( v6 + v9 > 2 );
    v13 = -v9;
    v6 += v9;
  }
  if ( v6 == 1 )
  {
    -[NSMutableString appendFormat:](
      v8,
      "appendFormat:",
      CFSTR("%c%c=="),
      aAbcdefghijklmn[(unsigned __int64)(unsigned __int8)a3[v13] >> 2],
      aAbcdefghijklmn[16 * (a3[v13] & 3)],
      v16);
  }
  else if ( v6 == 2 )
  {
    v14 = &a3[v13];
    -[NSMutableString appendFormat:](
      v8,
      "appendFormat:",
      CFSTR("%c%c%c="),
      aAbcdefghijklmn[(unsigned __int8)*v14 >> 2],
      aAbcdefghijklmn[((unsigned __int64)((*(unsigned __int8 *)v14 << 16) | (*((unsigned __int8 *)v14 + 1) << 8)) >> 12) & 0x3F],
      aAbcdefghijklmn[4 * (v14[1] & 0xF)]);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}