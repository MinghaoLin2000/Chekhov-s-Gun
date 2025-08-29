-[NSDate tsu_DOSTime]
$201E9A47BE70A2B12CCA2F48B75AA2F7 __cdecl -[NSDate tsu_DOSTime](NSDate *self, SEL a2)
{
  double v2; // d0
  tm *v3; // x0
  __int16 tm_year; // w8
  time_t v6; // [xsp+8h] [xbp-8h] BYREF

  -[NSDate timeIntervalSince1970](self, "timeIntervalSince1970");
  v6 = (__int64)v2;
  v3 = localtime(&v6);
  if ( v3->tm_year <= 81 )
    tm_year = 81;
  else
    tm_year = v3->tm_year;
  return ($201E9A47BE70A2B12CCA2F48B75AA2F7)((unsigned __int16)((32 * v3->tm_mon + 32) | v3->tm_mday | ((tm_year << 9) + 24576)) | ((unsigned __int16)((32 * LOWORD(v3->tm_min)) | ((unsigned __int16)v3->tm_hour << 11) | ((unsigned __int16)v3->tm_sec >> 1)) << 16));
}