_$s16EyeCandyGraphics9CGDisplayV10uuidStringACSgSS_tcfC
EyeCandyGraphics::CGDisplay_optional __swiftcall CGDisplay.init(uuidString:)(Swift::String uuidString)
{
  void *object; // x19
  __CFString *v2; // x20
  CFUUIDRef v3; // x19
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v7; // [xsp+0h] [xbp-20h] BYREF

  object = uuidString._object;
  v2 = (__CFString *)sub_10001CAC0(uuidString._countAndFlagsBits, uuidString._object);
  swift_bridgeObjectRelease(object);
  v3 = CFUUIDCreateFromString(0LL, v2);
  objc_release(v2);
  if ( v3 )
  {
    v7 = 0LL;
    CGSGetDisplaysWithUUID(v3, 1LL, (char *)&v7 + 4, &v7);
    objc_release(v3);
  }
  sub_100019294();
  return (EyeCandyGraphics::CGDisplay_optional)(v4 | (v5 << 32));
}