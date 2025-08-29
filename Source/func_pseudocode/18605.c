$s17ControlCenterCore16BundleIdentifierV6SymbolOwst
__int64 __fastcall storeEnumTagSinglePayload for BundleIdentifier.Symbol(
        __int64 result,
        unsigned int a2,
        unsigned int a3)
{
  if ( a2 >= 0x7FFFFFFB )
  {
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    *(_DWORD *)result = a2 - 2147483643;
    if ( a3 >= 0x7FFFFFFB )
      *(_BYTE *)(result + 16) = 1;
  }
  else
  {
    if ( a3 >= 0x7FFFFFFB )
      *(_BYTE *)(result + 16) = 0;
    if ( a2 )
      *(_QWORD *)(result + 8) = a2 + 4;
  }
  return result;
}