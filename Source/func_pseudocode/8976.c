$s34AppleMediaServicesUIDynamicService11MediaClientVwca
_QWORD *__fastcall assignWithCopy for MediaClient(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // x0
  __int64 v4; // x20

  *a1 = *a2;
  v3 = a2[1];
  v4 = a1[1];
  a1[1] = v3;
  swift_bridgeObjectRetain(v3);
  swift_bridgeObjectRelease(v4);
  return a1;
}