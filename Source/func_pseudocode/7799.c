_$s16EyeCandyGraphics9CGDisplayV12mirrorNumbers6UInt32Vvg
__int64 __fastcall CGDisplay.mirrorNumber.getter(__int64 a1)
{
  __int64 result; // x0

  LODWORD(result) = CGSDisplayStatusQuery(a1, 9LL);
  if ( (_DWORD)result == -1 )
    return 0LL;
  else
    return (unsigned int)result;
}