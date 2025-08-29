_$s16EyeCandyGraphics9CGDisplayV12_statusQuery6forKeys6UInt32VSgSo016CGSDisplayStatusH0V_tF
unsigned __int64 __fastcall CGDisplay._statusQuery(forKey:)(__int64 a1, __int64 a2)
{
  unsigned int v2; // w0
  __int64 v3; // x9

  v2 = CGSDisplayStatusQuery(a2, a1);
  if ( v2 == -1 )
    v3 = 0LL;
  else
    v3 = v2;
  return v3 | ((unsigned __int64)(v2 == -1) << 32);
}