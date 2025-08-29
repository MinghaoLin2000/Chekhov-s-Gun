$s22localspeechrecognition31VoiceCommandDebugInfoAggregatedVwst
__int64 __fastcall storeEnumTagSinglePayload for VoiceCommandDebugInfoAggregated(
        __int64 result,
        unsigned int a2,
        unsigned int a3)
{
  if ( a2 > 0xFE )
  {
    *(_BYTE *)(result + 4) = 0;
    *(_DWORD *)result = a2 - 255;
    if ( a3 >= 0xFF )
      *(_BYTE *)(result + 5) = 1;
  }
  else
  {
    if ( a3 >= 0xFF )
      *(_BYTE *)(result + 5) = 0;
    if ( a2 )
      *(_BYTE *)result = a2 + 1;
  }
  return result;
}