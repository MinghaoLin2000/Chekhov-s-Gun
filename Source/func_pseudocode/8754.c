$s34AppleMediaServicesUIDynamicService15AppQueryRequestVwca
__int64 *__fastcall assignWithCopy for AppQueryRequest(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x21
  __int64 v5; // x0
  __int64 v6; // x21
  __int64 v7; // x0

  v4 = *a1;
  v5 = *a2;
  *a1 = *a2;
  swift_bridgeObjectRetain(v5);
  swift_bridgeObjectRelease(v4);
  v6 = a1[1];
  v7 = a2[1];
  a1[1] = v7;
  swift_bridgeObjectRetain(v7);
  swift_bridgeObjectRelease(v6);
  return a1;
}