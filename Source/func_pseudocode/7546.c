_$s16EyeCandyGraphics13CGSConnectionV13clearProperty6forKeyySS_tF
Swift::Void __swiftcall CGSConnection.clearProperty(forKey:)(Swift::String forKey)
{
  __int64 v1; // x2
  __int64 v2; // x19
  void *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = v1;
  v3 = (void *)sub_10001CAC0(forKey._countAndFlagsBits, forKey._object);
  CGSSetConnectionProperty(v2, v2, v3, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}