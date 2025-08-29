$s34AppleMediaServicesUIDynamicService11MediaClientVwta
_QWORD *__fastcall assignWithTake for MediaClient(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // x9
  __int64 v4; // x0

  v3 = a2[1];
  v4 = a1[1];
  *a1 = *a2;
  a1[1] = v3;
  swift_bridgeObjectRelease(v4);
  return a1;
}