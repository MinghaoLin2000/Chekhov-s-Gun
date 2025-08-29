_$s16EyeCandyGraphics13CGSConnectionV22setBackgroundEventMaskyyAA06SystemgH0VF
Swift::Void __swiftcall CGSConnection.setBackgroundEventMask(_:)(EyeCandyGraphics::SystemEventMask a1)
{
  __int64 v1; // x1
  __int64 v2; // x19
  __int64 v3; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = v1;
  v3 = UInt32.init(_:)(a1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  _CGSSetBackgroundEventMask(v2, v3);
}