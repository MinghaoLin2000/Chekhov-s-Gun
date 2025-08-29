$s17ControlCenterCore16BundleIdentifierV6SymbolOwCP_0
__int64 __fastcall _s17ControlCenterCore16BundleIdentifierV6SymbolOwCP_0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // x0

  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 < 0xFFFFFFFF )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  else
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)(a1 + 8) = v3;
    swift_bridgeObjectRetain(v3);
  }
  return a1;
}