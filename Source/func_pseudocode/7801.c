_$s16EyeCandyGraphics9CGDisplayV8isMirrorSbvg
__int64 __fastcall CGDisplay.isMirror.getter(__int64 a1)
{
  __int64 v1; // x0

  v1 = CGSDisplayStatusQuery(a1, 9LL);
  return sub_100019284(v1);
}