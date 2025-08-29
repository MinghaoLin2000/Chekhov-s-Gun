$s17ControlCenterCore8VibrancyOwst
__int64 __fastcall storeEnumTagSinglePayload for Vibrancy(__int64 result, unsigned int a2, unsigned int a3)
{
  __int64 v3; // x9

  if ( a2 > 0x7D )
  {
    *(_QWORD *)result = a2 - 126;
    if ( a3 >= 0x7E )
      *(_BYTE *)(result + 8) = 1;
  }
  else
  {
    if ( a3 >= 0x7E )
      *(_BYTE *)(result + 8) = 0;
    if ( a2 )
    {
      v3 = (-a2 >> 2) & 0x1F | (32 * (-a2 & 0x7F));
      *(_QWORD *)result = (v3 | (v3 << 57)) & 0xF000000000000007LL;
    }
  }
  return result;
}