_$sSo10CGEventRefa16EyeCandyGraphicsE6windows6UInt32Vvg
int64_t CGEventRef.window.getter()
{
  __CGEvent *v0; // x20

  return CGEventGetIntegerValueField(v0, kCGTabletProximityEventVendorUniqueID|kCGTabletEventPointY);
}