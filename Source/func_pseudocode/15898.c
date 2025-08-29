_uarpPlatformQueryAccessoryInfo
__int64 __fastcall uarpPlatformQueryAccessoryInfo(
        _QWORD *a1,
        int a2,
        unsigned int *a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 active; // x0
  __int64 Error; // x20
  int v9; // [xsp+8h] [xbp-18h] BYREF
  int v10; // [xsp+Ch] [xbp-14h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  *a5 = a4;
  switch ( a2 )
  {
    case 1:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return UARPLayer2ManufacturerName((__int64)a1, (__int64)a3, a5);
    case 2:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return UARPLayer2ModelName((__int64)a1, (__int64)a3, a5);
    case 3:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return UARPLayer2SerialNumber((__int64)a1, (__int64)a3, a5);
    case 4:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return UARPLayer2HardwareVersion((__int64)a1, (__int64)a3, a5);
    case 9:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return UARPLayer2FriendlyName((__int64)a1, (__int64)a3, a5);
    default:
      if ( (unsigned int)(a2 - 5) > 1 )
      {
        if ( a2 != 8 )
        {
          *a5 = 0;
          return 28LL;
        }
        *a5 = 8;
        if ( a4 >= 8 )
        {
          Error = UARPLayer2LastError((__int64)a1, a3);
          *a3 = uarpHtonl(*a3);
          a3[1] = uarpHtonl(a3[1]);
          return Error;
        }
      }
      else
      {
        *a5 = 16;
        if ( a4 >= 0x10 )
        {
          if ( a2 == 5 )
          {
            v9 = 0;
            active = UARPLayer2ActiveFirmwareVersion2(a1, (__int64)&v9, a3);
          }
          else
          {
            v10 = 0;
            active = UARPLayer2StagedFirmwareVersion2(a1, (__int64)&v10, a3);
          }
          Error = active;
          *a3 = uarpHtonl(*a3);
          a3[1] = uarpHtonl(a3[1]);
          a3[2] = uarpHtonl(a3[2]);
          a3[3] = uarpHtonl(a3[3]);
          return Error;
        }
      }
      return 39LL;
  }
}