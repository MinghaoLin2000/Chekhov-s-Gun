_$sSo10CGEventRefa16EyeCandyGraphicsE7subtypeSo28CGSEventSystemDefinedSubtypeVvg
int64_t CGEventRef.subtype.getter()
{
  __CGEvent *v0; // x20

  return CGEventGetIntegerValueField(v0, kCGTabletEventPointPressure|0x40);
}