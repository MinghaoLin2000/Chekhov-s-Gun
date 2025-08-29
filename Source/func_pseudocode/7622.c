_$sSo10CGEventRefa16EyeCandyGraphicsE9targetPSNSo16CPSProcessSerNumVvg
unsigned __int64 CGEventRef.targetPSN.getter()
{
  __CGEvent *v0; // x20
  unsigned int IntegerValueField; // w19

  IntegerValueField = CGEventGetIntegerValueField(v0, (CGEventField)0x42u);
  return IntegerValueField | ((unsigned __int64)(unsigned int)CGEventGetIntegerValueField(
                                                                v0,
                                                                kCGMouseEventButtonNumber|0x40) << 32);
}