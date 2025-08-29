$s9SPIHelper12ShareAddressOwst
__int64 __fastcall storeEnumTagSinglePayload for ShareAddress(__int64 result, unsigned int a2, unsigned int a3)
{
  if ( a2 > 0xFE )
  {
    *(_BYTE *)(result + 16) = 0;
    *(_QWORD *)result = a2 - 255;
    *(_QWORD *)(result + 8) = 0LL;
    if ( a3 >= 0xFF )
      *(_BYTE *)(result + 17) = 1;
  }
  else
  {
    if ( a3 >= 0xFF )
      *(_BYTE *)(result + 17) = 0;
    if ( a2 )
      *(_BYTE *)(result + 16) = -(char)a2;
  }
  return result;
}