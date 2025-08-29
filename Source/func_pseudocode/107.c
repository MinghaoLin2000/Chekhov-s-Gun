$s9SPIHelper12SharingErrorOwst
__int64 __fastcall storeEnumTagSinglePayload for SharingError(__int64 result, unsigned int a2, unsigned int a3)
{
  if ( a2 > 0xF2 )
  {
    *(_OWORD *)(result + 24) = 0u;
    *(_OWORD *)(result + 8) = 0u;
    *(_BYTE *)(result + 40) = 0;
    *(_QWORD *)result = a2 - 243;
    if ( a3 >= 0xF3 )
      *(_BYTE *)(result + 41) = 1;
  }
  else
  {
    if ( a3 >= 0xF3 )
      *(_BYTE *)(result + 41) = 0;
    if ( a2 )
      *(_BYTE *)(result + 40) = -(char)a2;
  }
  return result;
}