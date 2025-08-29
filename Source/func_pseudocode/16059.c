_uarpPlatformEndpointSendMessageComplete
__int64 __fastcall uarpPlatformEndpointSendMessageComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = uarpPlatformEndpointSendMessageCompleteInternal(a1, a2, a3);
  if ( !*(_BYTE *)(a1 + 580) )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return uarpTransmitQueueService(a1, a2);
  }
  return result;
}