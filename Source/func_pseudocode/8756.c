$s34AppleMediaServicesUIDynamicService15AppQueryRequestVwta
_QWORD *__fastcall assignWithTake for AppQueryRequest(_QWORD *a1, _OWORD *a2)
{
  __int64 v4; // x0

  swift_bridgeObjectRelease(*a1);
  v4 = a1[1];
  *(_OWORD *)a1 = *a2;
  swift_bridgeObjectRelease(v4);
  return a1;
}