$s34AppleMediaServicesUIDynamicService14MetricsContextVwst
__int64 __fastcall storeEnumTagSinglePayload for MetricsContext(__int64 result, unsigned int a2, unsigned int a3)
{
  if ( a2 > 0x7FFFFFFE )
  {
    *(_QWORD *)result = a2 - 0x7FFFFFFF;
    *(_QWORD *)(result + 8) = 0LL;
    if ( a3 >= 0x7FFFFFFF )
      *(_BYTE *)(result + 16) = 1;
  }
  else
  {
    if ( a3 >= 0x7FFFFFFF )
      *(_BYTE *)(result + 16) = 0;
    if ( a2 )
      *(_QWORD *)(result + 8) = a2;
  }
  return result;
}