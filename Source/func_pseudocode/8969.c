$s34AppleMediaServicesUIDynamicService20MarketingItemRequestVwta
__int64 *__fastcall assignWithTake for MarketingItemRequest(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x0
  __int64 v5; // x9
  __int64 v6; // x0
  __int64 v7; // x9
  __int64 v8; // x0
  __int64 v9; // x9
  __int64 v10; // x0
  __int64 v11; // x9
  __int64 v12; // x0

  v4 = *a1;
  *a1 = *a2;
  swift_bridgeObjectRelease(v4);
  v5 = a2[2];
  v6 = a1[2];
  a1[1] = a2[1];
  a1[2] = v5;
  swift_bridgeObjectRelease(v6);
  v7 = a2[4];
  v8 = a1[4];
  a1[3] = a2[3];
  a1[4] = v7;
  swift_bridgeObjectRelease(v8);
  v9 = a2[6];
  v10 = a1[6];
  a1[5] = a2[5];
  a1[6] = v9;
  swift_bridgeObjectRelease(v10);
  v11 = a2[8];
  v12 = a1[8];
  a1[7] = a2[7];
  a1[8] = v11;
  swift_bridgeObjectRelease(v12);
  return a1;
}