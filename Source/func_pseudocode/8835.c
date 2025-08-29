$s34AppleMediaServicesUIDynamicService36JSAccountPrivacyAcknowledgementStateVwxx
__int64 __fastcall destroy for JSAccountPrivacyAcknowledgementState(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  _s34AppleMediaServicesUIDynamicService9JSAccountVwxx_0(a1);
  v2 = a1[6];
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return swift_bridgeObjectRelease(v2);
}