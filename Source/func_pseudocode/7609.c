_$sSo10CGEventRefa16EyeCandyGraphicsE10clickCounts6UInt32Vvg
int64_t CGEventRef.clickCount.getter()
{
  __CGEvent *v0; // x20

  return CGEventGetIntegerValueField(v0, kCGMouseEventClickState);
}