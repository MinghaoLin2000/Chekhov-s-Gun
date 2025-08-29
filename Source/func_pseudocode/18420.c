_$s19ControlCenterHelper26ScreenMirroringAlertResultO11descriptionSSvg
unsigned __int64 __fastcall ScreenMirroringAlertResult.description.getter(__int64 a1)
{
  __int64 v1; // x29
  __int64 v2; // x30
  unsigned __int64 result; // x0
  _QWORD v6[3]; // [xsp+8h] [xbp-18h] BYREF

  result = 0xD000000000000017LL;
  switch ( a1 )
  {
    case 0LL:
      return result;
    case 1LL:
      result = 0x6C6C65636E61632ELL;
      break;
    case 2LL:
      result = 0x57726F7272696D2ELL;
      break;
    case 3LL:
      result = 0x44726F7272696D2ELL;
      break;
    case 4LL:
      result = 0x44646E657478652ELL;
      break;
    default:
      v6[1] = v1;
      v6[2] = v2;
      v6[0] = a1;
      sub_100070740(
        &type metadata for ScreenMirroringAlertResult,
        v6,
        &type metadata for ScreenMirroringAlertResult,
        &type metadata for Int);
      __break(1u);
      JUMPOUT(0x100007538LL);
  }
  return result;
}