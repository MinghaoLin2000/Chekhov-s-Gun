_$s16EyeCandyGraphics13CGSConnectionV13setCursorLockyySo6CGRectVF
void __fastcall CGSConnection.setCursorLock(_:)(__int64 a1, double a2, double a3, double a4, double a5)
{
  void *v10; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  type metadata accessor for CGRegion(0LL);
  v10 = (void *)static CGRegionRef.new(_:)(a2, a3, a4, a5);
  SLSSetCursorRegionLock(a1, v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v10);
}