$s9SPIHelper12ErrorMessageVwcp_0
_QWORD *__fastcall _s9SPIHelper12ErrorMessageVwcp_0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // x0
  __int64 v4; // x8
  void *v5; // x20
  __int64 v6; // x21
  id v7; // x0

  v3 = a2[1];
  *a1 = *a2;
  a1[1] = v3;
  v5 = (void *)a2[2];
  v4 = a2[3];
  a1[2] = v5;
  a1[3] = v4;
  v6 = a2[4];
  a1[4] = v6;
  swift_bridgeObjectRetain(v3);
  v7 = objc_retain(v5);
  swift_bridgeObjectRetain(v6);
  return a1;
}