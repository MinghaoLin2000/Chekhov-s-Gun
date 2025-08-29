$s34AppleMediaServicesUIDynamicService30EngagementMessagePlacementInfoVwca
__int64 *__fastcall assignWithCopy for EngagementMessagePlacementInfo(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x0
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x19

  v4 = *a2;
  v5 = *a1;
  *a1 = *a2;
  swift_bridgeObjectRetain(v4);
  swift_bridgeObjectRelease(v5);
  a1[1] = a2[1];
  v6 = a2[2];
  v7 = a1[2];
  a1[2] = v6;
  swift_bridgeObjectRetain(v6);
  swift_bridgeObjectRelease(v7);
  return a1;
}