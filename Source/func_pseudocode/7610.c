_$sSo10CGEventRefa16EyeCandyGraphicsE19sourceUnixProcessIDs5Int32Vvg
int64_t CGEventRef.sourceUnixProcessID.getter()
{
  __CGEvent *v0; // x20

  return CGEventGetIntegerValueField(v0, kCGEventSourceUnixProcessID);
}