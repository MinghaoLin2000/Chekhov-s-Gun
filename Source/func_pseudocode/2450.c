-[DeviceSettingsAdvancedTopLevelView updateLayer]
void __cdecl -[DeviceSettingsAdvancedTopLevelView updateLayer](DeviceSettingsAdvancedTopLevelView *self, SEL a2)
{
  NSColor *v3; // x20
  CGColor *v4; // x21
  void *v5; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(+[NSColor windowBackgroundColor](&OBJC_CLASS___NSColor, "windowBackgroundColor")));
  v4 = -[NSColor CGColor](v3, "CGColor");
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAdvancedTopLevelView layer](self, "layer"));
  objc_msgSend(v5, "setBackgroundColor:", v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}