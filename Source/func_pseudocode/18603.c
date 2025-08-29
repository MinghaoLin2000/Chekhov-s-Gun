$s17ControlCenterCore16BundleIdentifierV6SymbolOwta
__int64 __fastcall assignWithTake for BundleIdentifier.Symbol(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // x0
  unsigned __int64 v5; // x8

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 < 0xFFFFFFFF )
    goto LABEL_5;
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 < 0xFFFFFFFF )
  {
    swift_bridgeObjectRelease(v4);
LABEL_5:
    *(_OWORD *)a1 = *(_OWORD *)a2;
    return a1;
  }
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = v5;
  swift_bridgeObjectRelease(v4);
  return a1;
}