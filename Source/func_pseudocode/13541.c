-[NSString tsu_isCJKString]
bool __cdecl -[NSString tsu_isCJKString](NSString *self, SEL a2)
{
  NSCharacterSet *v3; // x20
  NSString *v4; // x19
  NSUInteger v5; // x0
  NSUInteger v6; // x20
  __int64 v7; // x8
  char *v8; // x21
  bool v9; // w23
  NSUInteger i; // x8
  unsigned int v11; // w11
  int16x8_t v12; // q4
  int16x4_t v13; // d5
  char v14; // w14
  bool v16; // w12
  __int64 v18; // [xsp+0h] [xbp-40h] BYREF

  if ( !-[NSString length](self, "length") )
    return 0;
  v3 = objc_retainAutoreleasedReturnValue(
         +[NSCharacterSet whitespaceAndNewlineCharacterSet](
           &OBJC_CLASS___NSCharacterSet,
           "whitespaceAndNewlineCharacterSet"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSString stringByTrimmingCharactersInSet:](self, "stringByTrimmingCharactersInSet:", v3));
  objc_release(v3);
  v5 = -[NSString length](v4, "length");
  if ( !v5 )
  {
    objc_release(v4);
    return 0;
  }
  v6 = v5;
  __chkstk_darwin();
  v8 = (char *)&v18 - ((v7 + 17) & 0xFFFFFFFFFFFFFFF0LL);
  -[NSString getCharacters:range:](v4, "getCharacters:range:", v8, 0LL, v6);
  v9 = 0;
  for ( i = 0LL; i != v6; v9 = i >= v6 )
  {
    v11 = *(unsigned __int16 *)&v8[2 * i];
    v12 = vdupq_n_s16(v11);
    v13 = (int16x4_t)vand_s8(*(int8x8_t *)v12.i8, (int8x8_t)0xFFF0FFC0FF00FF80LL);
    v14 = vmaxv_u8((uint8x8_t)vmovn_s16((int16x8_t)vcgtq_u16(
                                                     (uint16x8_t)xmmword_10018F2D0,
                                                     (uint16x8_t)vaddq_s16(v12, (int16x8_t)xmmword_10018F2C0)))) | vmaxv_u16((uint16x4_t)vceq_s16(v13, (int16x4_t)0x3190300011002E80LL));
    v16 = (unsigned __int16)v11 >> 5 == 397 || (v13.i16[1] & 0xFF00) == 12800;
    if ( !(v14 & 1 | ((unsigned __int16)(v11 + 464) < 0x20u || v16)) && v13.u16[1] != 13056 )
      break;
    ++i;
  }
  objc_release(v4);
  return v9;
}