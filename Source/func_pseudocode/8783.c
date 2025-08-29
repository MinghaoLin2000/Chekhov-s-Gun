$s34AppleMediaServicesUIDynamicService30EngagementMessagePlacementInfoVwta
__int64 *__fastcall assignWithTake for EngagementMessagePlacementInfo(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x0
  __int64 v5; // x9
  __int64 v6; // x0

  v4 = *a1;
  *a1 = *a2;
  swift_bridgeObjectRelease(v4);
  v5 = a2[2];
  v6 = a1[2];
  a1[1] = a2[1];
  a1[2] = v5;
  swift_bridgeObjectRelease(v6);
  return a1;
}