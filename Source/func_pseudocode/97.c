$s9SPIHelper12ErrorMessageVwca_0
_QWORD *__fastcall _s9SPIHelper12ErrorMessageVwca_0(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // x0
  __int64 v5; // x21
  void *v6; // x21
  void *v7; // x0
  id v8; // x0
  __int64 v9; // x0
  __int64 v10; // x19

  *a1 = *a2;
  v4 = a2[1];
  v5 = a1[1];
  a1[1] = v4;
  swift_bridgeObjectRetain(v4);
  swift_bridgeObjectRelease(v5);
  v6 = (void *)a1[2];
  v7 = (void *)a2[2];
  a1[2] = v7;
  v8 = objc_retain(v7);
  objc_release(v6);
  a1[3] = a2[3];
  v9 = a2[4];
  v10 = a1[4];
  a1[4] = v9;
  swift_bridgeObjectRetain(v9);
  swift_bridgeObjectRelease(v10);
  return a1;
}