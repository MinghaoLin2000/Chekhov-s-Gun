-[ipp_value_t date]
// local variable allocation has failed, the output may be wrong!
ipp_value_date_t __cdecl -[ipp_value_t date](ipp_value_t *self, SEL a2)
{
  NSObject *x_payload; // x20
  __int64 v4; // x0
  char isKindOfClass; // w8
  int v6; // w1
  __int64 v7; // x0
  _QWORD v8[2]; // [xsp+8h] [xbp-28h] BYREF
  ipp_value_date_t result; // 0:x0.11

  memset(v8, 0, 11);
  x_payload = self->x_payload;
  v4 = objc_opt_class(&OBJC_CLASS___NSData, a2);
  isKindOfClass = objc_opt_isKindOfClass(x_payload, v4);
  v6 = 0;
  v7 = 0LL;
  if ( (isKindOfClass & 1) != 0 )
  {
    -[NSObject getBytes:range:](self->x_payload, "getBytes:range:", v8, 0LL, 11LL);
    v7 = v8[0];
    v6 = LOWORD(v8[1]) | (BYTE2(v8[1]) << 16);
  }
  *(_QWORD *)result.var0 = v7;
  *(_WORD *)&result.var0[8] = v6;
  result.var0[10] = BYTE2(v6);
  return result;
}