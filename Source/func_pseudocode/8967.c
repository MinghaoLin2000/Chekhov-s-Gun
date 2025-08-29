$s34AppleMediaServicesUIDynamicService20MarketingItemRequestVwca
__int64 *__fastcall assignWithCopy for MarketingItemRequest(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x21
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x20

  v4 = *a1;
  v5 = *a2;
  *a1 = *a2;
  swift_bridgeObjectRetain(v5);
  swift_bridgeObjectRelease(v4);
  a1[1] = a2[1];
  v6 = a2[2];
  v7 = a1[2];
  a1[2] = v6;
  swift_bridgeObjectRetain(v6);
  swift_bridgeObjectRelease(v7);
  a1[3] = a2[3];
  v8 = a2[4];
  v9 = a1[4];
  a1[4] = v8;
  swift_bridgeObjectRetain(v8);
  swift_bridgeObjectRelease(v9);
  a1[5] = a2[5];
  v10 = a2[6];
  v11 = a1[6];
  a1[6] = v10;
  swift_bridgeObjectRetain(v10);
  swift_bridgeObjectRelease(v11);
  a1[7] = a2[7];
  v12 = a2[8];
  v13 = a1[8];
  a1[8] = v12;
  swift_bridgeObjectRetain(v12);
  swift_bridgeObjectRelease(v13);
  return a1;
}