_$sSo10CGEventRefa16EyeCandyGraphicsE8hotKeyIDs6UInt64Vvg
int64_t CGEventRef.hotKeyID.getter()
{
  __CGEvent *v0; // x20

  return CGEventGetIntegerValueField(v0, kCGScrollWheelEventScrollCount);
}