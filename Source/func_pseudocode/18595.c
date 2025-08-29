$s17ControlCenterCore16BundleIdentifierVwta
_QWORD *__fastcall assignWithTake for BundleIdentifier(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // x0
  unsigned __int64 v5; // x8

  v4 = a1[1];
  if ( v4 >= 5 )
  {
    v5 = a2[1];
    if ( v5 >= 5 )
    {
      *a1 = *a2;
      a1[1] = v5;
      swift_bridgeObjectRelease(v4);
      return a1;
    }
    sub_1000397B8(a1);
  }
  *(_OWORD *)a1 = *(_OWORD *)a2;
  return a1;
}