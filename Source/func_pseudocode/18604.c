$s17ControlCenterCore16BundleIdentifierV6SymbolOwet
__int64 __fastcall getEnumTagSinglePayload for BundleIdentifier.Symbol(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w8

  if ( !a2 )
    return 0LL;
  if ( a2 > 0x7FFFFFFA && *(_BYTE *)(a1 + 16) )
    return (unsigned int)(*(_DWORD *)a1 + 2147483643);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 >= 0xFFFFFFFF )
    LODWORD(v3) = -1;
  v4 = v3 + 1;
  v5 = v3 - 4;
  if ( v4 >= 6 )
    return v5;
  else
    return 0LL;
}