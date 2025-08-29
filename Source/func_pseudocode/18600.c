$s17ControlCenterCore16BundleIdentifierV6SymbolOwxx
unsigned __int64 __fastcall destroy for BundleIdentifier.Symbol(__int64 a1)
{
  unsigned __int64 result; // x0

  result = *(_QWORD *)(a1 + 8);
  if ( result >= 0xFFFFFFFF )
    return swift_bridgeObjectRelease(result);
  return result;
}