_$sSo10CGEventRefa16EyeCandyGraphicsE12trackingAreas6UInt64Vvg
int64_t CGEventRef.trackingArea.getter()
{
  __CGEvent *v0; // x20
  int64_t result; // x0

  result = CGEventGetIntegerValueField(v0, kCGEventSourceStateID|kCGTabletEventPointY);
  if ( result < 0 )
    __break(1u);
  return result;
}