$s34AppleMediaServicesUIDynamicService14MetricsContextVwca
__int64 __fastcall assignWithCopy for MetricsContext(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x0

  *(_BYTE *)a1 = *(_BYTE *)a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  swift_bridgeObjectRetain(v4);
  swift_bridgeObjectRelease(v3);
  return a1;
}