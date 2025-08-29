_uarpPlatformResponseAccessoryInfo
__int64 __fastcall uarpPlatformResponseAccessoryInfo(
        __int64 result,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 v8; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v8 = result;
  switch ( a4 )
  {
    case 1:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      result = UARPLayer2ManufacturerNameResponse(result, a2);
      break;
    case 2:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      result = UARPLayer2ModelNameResponse(result, a2);
      break;
    case 3:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      result = UARPLayer2SerialNumberResponse(result, a2);
      break;
    case 4:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      result = UARPLayer2HardwareVersionResponse(result, a2);
      break;
    case 5:
      if ( a5 >= 0x10 )
      {
        uarpVersionEndianSwap(a6, a6);
        result = UARPLayer2ActiveFirmwareVersionResponse(v8, a2);
        *(_OWORD *)(a2 + 138) = *(_OWORD *)a6;
      }
      break;
    case 6:
      if ( a5 >= 0x10 )
      {
        uarpVersionEndianSwap(a6, a6);
        result = UARPLayer2StagedFirmwareVersionResponse(v8, a2);
        *(_OWORD *)(a2 + 154) = *(_OWORD *)a6;
      }
      break;
    case 7:
      if ( a5 >= 0x10 )
      {
        *a6 = uarpNtohl(*a6);
        a6[1] = uarpNtohl(a6[1]);
        a6[2] = uarpNtohl(a6[2]);
        a6[3] = uarpNtohl(a6[3]);
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        result = UARPLayer2StatisticsResponse(v8, a2);
      }
      break;
    case 8:
      if ( a5 >= 8 )
      {
        *a6 = uarpNtohl(*a6);
        a6[1] = uarpNtohl(a6[1]);
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        result = UARPLayer2LastErrorResponse(v8, a2);
      }
      break;
    case 9:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      result = UARPLayer2FriendlyNameResponse(result, a2);
      break;
    default:
      return result;
  }
  return result;
}