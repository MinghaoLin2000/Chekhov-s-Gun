$s22localspeechrecognition31VoiceCommandDebugInfoAggregatedVwCP
__int64 __fastcall initializeBufferWithCopyOfBuffer for VoiceCommandDebugInfoAggregated(__int64 result, int *a2)
{
  int v2; // w8

  v2 = *a2;
  *(_BYTE *)(result + 4) = *((_BYTE *)a2 + 4);
  *(_DWORD *)result = v2;
  return result;
}