$s17ControlCenterCore16BundleIdentifierVwca
_QWORD *__fastcall assignWithCopy for BundleIdentifier(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // x21
  unsigned __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0

  v4 = a1[1];
  v5 = a2[1];
  if ( v4 >= 5 )
  {
    if ( v5 >= 5 )
    {
      *a1 = *a2;
      v7 = a2[1];
      a1[1] = v7;
      swift_bridgeObjectRetain(v7);
      swift_bridgeObjectRelease(v4);
      return a1;
    }
    sub_1000397B8(a1);
    goto LABEL_6;
  }
  if ( v5 < 5 )
  {
LABEL_6:
    *(_OWORD *)a1 = *(_OWORD *)a2;
    return a1;
  }
  *a1 = *a2;
  v6 = a2[1];
  a1[1] = v6;
  swift_bridgeObjectRetain(v6);
  return a1;
}