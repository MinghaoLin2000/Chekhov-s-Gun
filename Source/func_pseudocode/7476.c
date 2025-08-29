_$s16EyeCandyGraphics8CGSSpaceV6numberACSo8NSNumberC_tcfC
EyeCandyGraphics::CGSSpace __swiftcall CGSSpace.init(number:)(NSNumber number)
{
  id v2; // x20

  v2 = -[objc_class unsignedLongLongValue](number.super.super.isa, "unsignedLongLongValue");
  objc_release(number.super.super.isa);
  return (EyeCandyGraphics::CGSSpace)v2;
}