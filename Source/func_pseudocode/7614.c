_$sSo10CGEventRefa16EyeCandyGraphicsE13sourceStateIDs5Int64Vvg
int64_t CGEventRef.sourceStateID.getter()
{
  __CGEvent *v0; // x20

  return CGEventGetIntegerValueField(v0, kCGEventSourceStateID);
}