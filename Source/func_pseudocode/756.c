-[DeviceBlueButton drawFocusRingMask]
void __cdecl -[DeviceBlueButton drawFocusRingMask](DeviceBlueButton *self, SEL a2)
{
  NSBezierPath *v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceBlueButton focusRingMaskBounds](self, "focusRingMaskBounds");
  v2 = objc_retainAutoreleasedReturnValue(
         +[NSBezierPath bezierPathWithRoundedRect:xRadius:yRadius:](
           &OBJC_CLASS___NSBezierPath,
           "bezierPathWithRoundedRect:xRadius:yRadius:"));
  -[NSBezierPath fill](v2, "fill");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}