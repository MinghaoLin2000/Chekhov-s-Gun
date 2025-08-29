$s17ControlCenterCore16BundleIdentifierVwst
__int64 __fastcall storeEnumTagSinglePayload for BundleIdentifier(__int64 result, unsigned int a2, unsigned int a3)
{
  if ( a2 >= 0x7FFFFFFB )
  {
    *(_QWORD *)result = a2 - 2147483643;
    *(_QWORD *)(result + 8) = 0LL;
    if ( a3 > 0x7FFFFFFA )
      *(_BYTE *)(result + 16) = 1;
  }
  else
  {
    if ( a3 > 0x7FFFFFFA )
      *(_BYTE *)(result + 16) = 0;
    if ( a2 )
      *(_QWORD *)(result + 8) = a2 + 4;
  }
  return result;
}