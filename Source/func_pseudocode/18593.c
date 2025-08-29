$s17ControlCenterCore16BundleIdentifierVwCP_0
_QWORD *__fastcall _s17ControlCenterCore16BundleIdentifierVwCP_0(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v3; // x0

  v3 = a2[1];
  if ( v3 >= 5 )
  {
    *a1 = *a2;
    a1[1] = v3;
    swift_bridgeObjectRetain(v3);
  }
  else
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  return a1;
}