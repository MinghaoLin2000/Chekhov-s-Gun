_$s19ControlCenterHelper26ScreenMirroringAlertOptionO11descriptionSSvg
unsigned __int64 __fastcall ScreenMirroringAlertOption.description.getter(__int64 a1)
{
  __int64 v1; // x29
  __int64 v2; // x30
  unsigned __int64 result; // x0
  _QWORD v6[3]; // [xsp+8h] [xbp-18h] BYREF

  result = 0xD000000000000016LL;
  switch ( a1 )
  {
    case 0LL:
    case 2LL:
      return result;
    case 1LL:
      result = 0xD000000000000010LL;
      break;
    case 3LL:
      result = 0x44726F7272696D2ELL;
      break;
    case 4LL:
      result = 0xD000000000000012LL;
      break;
    default:
      v6[1] = v1;
      v6[2] = v2;
      v6[0] = a1;
      sub_100070740(
        &type metadata for ScreenMirroringAlertOption,
        v6,
        &type metadata for ScreenMirroringAlertOption,
        &type metadata for Int);
      __break(1u);
      JUMPOUT(0x100007410LL);
  }
  return result;
}