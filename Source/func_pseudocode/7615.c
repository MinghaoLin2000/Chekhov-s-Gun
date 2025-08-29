_$sSo10CGEventRefa16EyeCandyGraphicsE7hidTypes6UInt32Vvg
int64_t CGEventRef.hidType.getter()
{
  __CGEvent *v0; // x20

  return CGEventGetIntegerValueField(v0, kCGEventSourceGroupID|kCGMouseEventPressure|0x40);
}