_$s16EyeCandyGraphics9CGDisplayV24rectIntersectsOneDisplayySbSo6CGRectVFZ
__int64 static CGDisplay.rectIntersectsOneDisplay(_:)()
{
  __int64 v0; // x19
  CGDirectDisplayID *v1; // x0
  uint32_t *v2; // x1
  unsigned __int8 v4; // [xsp+3h] [xbp-3Dh]
  uint32_t matchingDisplayCount; // [xsp+4h] [xbp-3Ch] BYREF
  CGRect v6; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  v6.origin.x = sub_1000140C8();
  matchingDisplayCount = 0;
  CGGetDisplaysWithRect(v6, 0, 0LL, &matchingDisplayCount);
  if ( !matchingDisplayCount )
    return 0LL;
  v0 = swift_slowAlloc(4LL * matchingDisplayCount, -1LL);
  v1 = (CGDirectDisplayID *)sub_1000140F0(v0);
  sub_100018E50(v1, v2);
  swift_slowDealloc(v0, -1LL, -1LL);
  return v4;
}