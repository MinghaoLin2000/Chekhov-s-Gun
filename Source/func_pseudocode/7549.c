_$s16EyeCandyGraphics13CGSConnectionV22setBackgroundEventMask_6regionyAA06SystemgH0V_So11CGRegionRefatF
__int64 __fastcall CGSConnection.setBackgroundEventMask(_:region:)(
        EyeCandyGraphics::SystemEventMask a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = UInt32.init(_:)(a1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _CGSSetBackgroundEventMaskAndShape(a3, v5, a2);
}