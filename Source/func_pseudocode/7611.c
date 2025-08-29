_$sSo10CGEventRefa16EyeCandyGraphicsE19targetUnixProcessIDs5Int32Vvg
int64_t CGEventRef.targetUnixProcessID.getter()
{
  __CGEvent *v0; // x20

  return CGEventGetIntegerValueField(v0, kCGEventTargetUnixProcessID);
}