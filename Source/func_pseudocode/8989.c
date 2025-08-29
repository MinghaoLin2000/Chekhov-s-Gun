$s34AppleMediaServicesUIDynamicService14MetricsContextVwCP
__int64 __fastcall initializeBufferWithCopyOfBuffer for MetricsContext(__int64 a1, __int64 a2)
{
  __int64 v3; // x0

  *(_BYTE *)a1 = *(_BYTE *)a2;
  v3 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = v3;
  swift_bridgeObjectRetain(v3);
  return a1;
}