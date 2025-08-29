$s34AppleMediaServicesUIDynamicService11MediaClientVwCP
_QWORD *__fastcall initializeBufferWithCopyOfBuffer for MediaClient(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // x0

  v3 = a2[1];
  *a1 = *a2;
  a1[1] = v3;
  swift_bridgeObjectRetain(v3);
  return a1;
}