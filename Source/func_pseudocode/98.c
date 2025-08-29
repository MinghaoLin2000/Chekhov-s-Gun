$s9SPIHelper12ErrorMessageVwta_0
_QWORD *__fastcall _s9SPIHelper12ErrorMessageVwta_0(_QWORD *a1, __int64 a2)
{
  void *v4; // x0
  __int64 v5; // x9
  __int64 v6; // x0

  *a1 = *(_QWORD *)a2;
  swift_bridgeObjectRelease(a1[1]);
  v4 = (void *)a1[2];
  *(_OWORD *)(a1 + 1) = *(_OWORD *)(a2 + 8);
  objc_release(v4);
  v5 = *(_QWORD *)(a2 + 32);
  v6 = a1[4];
  a1[3] = *(_QWORD *)(a2 + 24);
  a1[4] = v5;
  swift_bridgeObjectRelease(v6);
  return a1;
}