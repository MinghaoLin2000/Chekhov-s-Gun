_uarpApplePlatformMessageCheckExpectedResponse
bool __fastcall uarpApplePlatformMessageCheckExpectedResponse(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  _BOOL8 result; // x0
  bool v10; // zf
  int v12; // w8

  if ( a6 < 0xB )
    return 0LL;
  if ( *(unsigned __int16 *)(a5 + 6) != *(unsigned __int16 *)(a3 + 6)
    || *(unsigned __int8 *)(a5 + 8) != *(unsigned __int8 *)(a3 + 8) )
  {
    return 0LL;
  }
  word_10002AC90 = 2492;
  byte_10002AC92 = 99;
  v10 = *(_WORD *)(a5 + 6) == 2492 && *(_BYTE *)(a5 + 8) == 99;
  if ( !v10 || (unsigned int)uarpNtohs(*(unsigned __int16 *)(a5 + 9)) != 33 )
    return 0LL;
  v12 = uarpNtohs(*(unsigned __int16 *)(a3 + 9));
  result = 0LL;
  if ( a6 >= 0x17 && v12 == 32 )
    return *(_DWORD *)(a5 + 15) == *(_DWORD *)(a3 + 11);
  return result;
}