_$s16EyeCandyGraphics9CGDisplayV4uuidACSgSo9CFUUIDRefa_tcfC
EyeCandyGraphics::CGDisplay_optional __swiftcall CGDisplay.init(uuid:)(CFUUIDRef uuid)
{
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v5; // [xsp+0h] [xbp-20h] BYREF

  v5 = 0LL;
  CGSGetDisplaysWithUUID(uuid, 1LL, (char *)&v5 + 4, &v5);
  objc_release(uuid);
  sub_100019294();
  return (EyeCandyGraphics::CGDisplay_optional)(v2 | (v3 << 32));
}