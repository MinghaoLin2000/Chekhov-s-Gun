_$s16EyeCandyGraphics9CGDisplayV16_boolStatusQuery6forKeySbSo010CGSDisplayfI0V_tF
__int64 __fastcall CGDisplay._boolStatusQuery(forKey:)(__int64 a1, __int64 a2)
{
  __int64 v2; // x0

  v2 = CGSDisplayStatusQuery(a2, a1);
  return sub_100019284(v2);
}