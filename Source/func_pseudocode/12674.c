-[NSDate tsu_initWithDOSTime:]
id __cdecl -[NSDate tsu_initWithDOSTime:](NSDate *self, SEL a2, $201E9A47BE70A2B12CCA2F48B75AA2F7 a3)
{
  NSDate *v4; // x20
  int32x2_t v5; // d0
  bool v7; // cc
  tm v9; // [xsp+8h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = 0LL;
  memset(&v9.tm_wday, 0, 32);
  v9.tm_isdst = -1;
  v9.tm_sec = (*(unsigned int *)&a3 >> 15) & 0x3E;
  v9.tm_min = (*(unsigned int *)&a3 >> 21) & 0x3F;
  v9.tm_hour = *(unsigned int *)&a3 >> 27;
  v9.tm_mday = a3.var0 & 0x1F;
  v5 = (int32x2_t)vand_s8(
                    (int8x8_t)vshl_u32((uint32x2_t)vdup_n_s32(*(_DWORD *)&a3), (uint32x2_t)0xFFFFFFF7FFFFFFFBLL),
                    (int8x8_t)0x7F0000000FLL);
  *(int32x2_t *)&v9.tm_mon = vadd_s32(v5, (int32x2_t)0x50FFFFFFFFLL);
  v7 = (unsigned int)(v5.i32[0] - 13) < 0xFFFFFFF4 || (a3.var0 & 0x1F) == 0 || *(unsigned int *)&a3 >> 30 == 3;
  if ( !v7 && ((*(unsigned int *)&a3 >> 21) & 0x3F) <= 0x3B && ((*(unsigned int *)&a3 >> 15) & 0x3E) <= 0x3B )
    v4 = -[NSDate initWithTimeIntervalSince1970:](
           objc_retain(self),
           "initWithTimeIntervalSince1970:",
           (double)mktime(&v9));
  objc_release(self);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}