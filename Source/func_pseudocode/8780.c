$s34AppleMediaServicesUIDynamicService30EngagementMessagePlacementInfoVwCP_0
__int64 *__fastcall _s34AppleMediaServicesUIDynamicService30EngagementMessagePlacementInfoVwCP_0(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // x0
  __int64 v4; // x8
  __int64 v5; // x20

  v3 = *a2;
  v4 = a2[1];
  *a1 = *a2;
  a1[1] = v4;
  v5 = a2[2];
  a1[2] = v5;
  swift_bridgeObjectRetain(v3);
  swift_bridgeObjectRetain(v5);
  return a1;
}