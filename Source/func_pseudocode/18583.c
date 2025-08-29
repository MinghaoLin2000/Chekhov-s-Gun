$s17ControlCenterCore20CapsuleSliderMetricsVwst
__int64 __fastcall storeEnumTagSinglePayload for CapsuleSliderMetrics(__int64 result, int a2, int a3)
{
  char v3; // w8

  if ( a2 )
  {
    *(_QWORD *)(result + 56) = 0LL;
    *(_OWORD *)(result + 40) = 0u;
    *(_OWORD *)(result + 24) = 0u;
    *(_OWORD *)(result + 8) = 0u;
    *(_QWORD *)result = (unsigned int)(a2 - 1);
    if ( !a3 )
      return result;
    v3 = 1;
  }
  else
  {
    if ( !a3 )
      return result;
    v3 = 0;
  }
  *(_BYTE *)(result + 64) = v3;
  return result;
}