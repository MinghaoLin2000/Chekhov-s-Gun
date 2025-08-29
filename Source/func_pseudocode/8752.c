$s34AppleMediaServicesUIDynamicService15AppQueryRequestVwxx
__int64 __fastcall destroy for AppQueryRequest(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  swift_bridgeObjectRelease(*a1);
  v2 = a1[1];
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return swift_bridgeObjectRelease(v2);
}