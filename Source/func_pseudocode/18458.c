$s19ControlCenterHelper24ScreenMirroringAlertViewVwxx
__int64 __fastcall destroy for ScreenMirroringAlertView(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  swift_bridgeObjectRelease(a1[1]);
  swift_bridgeObjectRelease(a1[3]);
  swift_release(a1[5]);
  swift_release(a1[7]);
  v2 = a1[9];
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return swift_release(v2);
}