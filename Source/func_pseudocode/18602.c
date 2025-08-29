$s17ControlCenterCore16BundleIdentifierV6SymbolOwca
_QWORD *__fastcall assignWithCopy for BundleIdentifier.Symbol(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // x21
  unsigned __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0

  v4 = a1[1];
  v5 = a2[1];
  if ( v4 < 0xFFFFFFFF )
  {
    if ( v5 >= 0xFFFFFFFF )
    {
      *a1 = *a2;
      v7 = a2[1];
      a1[1] = v7;
      swift_bridgeObjectRetain(v7);
      return a1;
    }
LABEL_7:
    *(_OWORD *)a1 = *(_OWORD *)a2;
    return a1;
  }
  if ( v5 < 0xFFFFFFFF )
  {
    swift_bridgeObjectRelease(a1[1]);
    goto LABEL_7;
  }
  *a1 = *a2;
  v6 = a2[1];
  a1[1] = v6;
  swift_bridgeObjectRetain(v6);
  swift_bridgeObjectRelease(v4);
  return a1;
}