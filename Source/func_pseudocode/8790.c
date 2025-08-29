$s34AppleMediaServicesUIDynamicService22EngagementMessageEventVwca
_QWORD *__fastcall assignWithCopy for EngagementMessageEvent(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // x0
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x19

  *a1 = *a2;
  v4 = a2[1];
  v5 = a1[1];
  a1[1] = v4;
  swift_bridgeObjectRetain(v4);
  swift_bridgeObjectRelease(v5);
  v6 = a2[2];
  v7 = a1[2];
  a1[2] = v6;
  swift_bridgeObjectRetain(v6);
  swift_bridgeObjectRelease(v7);
  return a1;
}