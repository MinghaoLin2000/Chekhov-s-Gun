_uarpPlatformNoFirmwareUpdateAvailable
__int64 __fastcall uarpPlatformNoFirmwareUpdateAvailable(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = uarpAllocPrepareTransmitBuffer2(a1, a2, 29LL, 6u, 1);
  if ( !v4 )
    return 11LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return uarpTransmitBuffer2(a1, a2, v4);
}