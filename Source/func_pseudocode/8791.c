$s34AppleMediaServicesUIDynamicService22EngagementMessageEventVwta
_QWORD *__fastcall assignWithTake for EngagementMessageEvent(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x0

  *a1 = *(_QWORD *)a2;
  swift_bridgeObjectRelease(a1[1]);
  v4 = a1[2];
  *(_OWORD *)(a1 + 1) = *(_OWORD *)(a2 + 8);
  swift_bridgeObjectRelease(v4);
  return a1;
}