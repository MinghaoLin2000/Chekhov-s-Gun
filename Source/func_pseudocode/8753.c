$s34AppleMediaServicesUIDynamicService15AppQueryRequestVwCP_0
_QWORD *__fastcall _s34AppleMediaServicesUIDynamicService15AppQueryRequestVwCP_0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // x20

  v3 = a2[1];
  *a1 = *a2;
  a1[1] = v3;
  ((void (*)(void))swift_bridgeObjectRetain)();
  swift_bridgeObjectRetain(v3);
  return a1;
}