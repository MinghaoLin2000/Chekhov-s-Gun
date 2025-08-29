_$s16EyeCandyGraphics9CGDisplayV11bestDisplayyACSgSo6CGRectVFZ
__int64 static CGDisplay.bestDisplay(_:)()
{
  CGDirectDisplayID *v0; // x19
  __int64 v1; // x0
  uint32_t *v2; // x2
  CGRect v4; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  sub_1000140C8();
  v0 = (CGDirectDisplayID *)swift_slowAlloc(200LL, -1LL);
  v1 = CGSMainConnectionID();
  sub_1000140F0(v1);
  CGGetDisplaysWithRect(v4, 0x32u, v0, v2);
  swift_slowDealloc(v0, -1LL, -1LL);
  return 0x100000000LL;
}