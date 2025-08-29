$s17ControlCenterCore20CapsuleSliderMetricsVwet
__int64 __fastcall getEnumTagSinglePayload for CapsuleSliderMetrics(__int64 a1, int a2)
{
  if ( a2 && *(_BYTE *)(a1 + 64) )
    return (unsigned int)(*(_DWORD *)a1 + 1);
  else
    return 0LL;
}