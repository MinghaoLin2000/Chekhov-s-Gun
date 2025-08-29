$s9SPIHelper12ErrorMessageVwxx_0
__int64 __fastcall _s9SPIHelper12ErrorMessageVwxx_0(__int64 a1)
{
  __int64 v2; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  swift_bridgeObjectRelease(*(_QWORD *)(a1 + 8));
  objc_release(*(id *)(a1 + 16));
  v2 = *(_QWORD *)(a1 + 32);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return swift_bridgeObjectRelease(v2);
}