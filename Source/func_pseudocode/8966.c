$s34AppleMediaServicesUIDynamicService20MarketingItemRequestVwcp
__int64 *__fastcall initializeWithCopy for MarketingItemRequest(__int64 *a1, __int64 *a2)
{
  __int64 v3; // x0
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x20
  __int64 v7; // x8
  __int64 v8; // x21
  __int64 v9; // x8
  __int64 v10; // x22
  __int64 v11; // x23

  v3 = *a2;
  v4 = a2[1];
  *a1 = *a2;
  a1[1] = v4;
  v6 = a2[2];
  v5 = a2[3];
  a1[2] = v6;
  a1[3] = v5;
  v8 = a2[4];
  v7 = a2[5];
  a1[4] = v8;
  a1[5] = v7;
  v10 = a2[6];
  v9 = a2[7];
  a1[6] = v10;
  a1[7] = v9;
  v11 = a2[8];
  a1[8] = v11;
  swift_bridgeObjectRetain(v3);
  swift_bridgeObjectRetain(v6);
  swift_bridgeObjectRetain(v8);
  swift_bridgeObjectRetain(v10);
  swift_bridgeObjectRetain(v11);
  return a1;
}