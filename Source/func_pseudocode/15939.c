_uarpCompressionHeaderEndianSwap
__int64 __fastcall uarpCompressionHeaderEndianSwap(unsigned __int16 *a1, __int64 a2)
{
  __int64 result; // x0

  *(_WORD *)a2 = uarpHtons(*a1);
  *(_DWORD *)(a2 + 2) = uarpHtonl(*(unsigned int *)(a1 + 1));
  *(_WORD *)(a2 + 6) = uarpHtons(a1[3]);
  result = uarpHtons(a1[4]);
  *(_WORD *)(a2 + 8) = result;
  return result;
}