$s9DimensionOwst
__int64 __fastcall _s9DimensionOwst(__int64 result, unsigned int a2, unsigned int a3)
{
  if ( a2 > 0xFC )
  {
    *(_BYTE *)(result + 8) = 0;
    *(_QWORD *)result = a2 - 253;
    if ( a3 >= 0xFD )
      *(_BYTE *)(result + 9) = 1;
  }
  else
  {
    if ( a3 >= 0xFD )
      *(_BYTE *)(result + 9) = 0;
    if ( a2 )
      *(_BYTE *)(result + 8) = -(char)a2;
  }
  return result;
}