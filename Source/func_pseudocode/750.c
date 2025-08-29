-[DeviceBlueButton currentFillColor]
id __cdecl -[DeviceBlueButton currentFillColor](DeviceBlueButton *self, SEL a2)
{
  unsigned int v3; // w20
  NSColor *v4; // x0
  NSColor *v5; // x19
  NSColor *v6; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( ((unsigned int)-[DeviceBlueButton isEnabled](self, "isEnabled") & 1) != 0 )
  {
    v3 = (unsigned int)-[DeviceBlueButton isHighlighted](self, "isHighlighted");
    v4 = objc_retainAutoreleasedReturnValue(+[NSColor systemBlueColor](&OBJC_CLASS___NSColor, "systemBlueColor"));
    v5 = v4;
    if ( v3 )
    {
      v6 = objc_retainAutoreleasedReturnValue(-[NSColor colorWithSystemEffect:](v4, "colorWithSystemEffect:", 1LL));
      objc_release(v5);
      v5 = v6;
    }
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(+[NSColor lightGrayColor](&OBJC_CLASS___NSColor, "lightGrayColor"));
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}