-[AMPProgressBarView accessibilityFocusedUIElement]
id __cdecl -[AMPProgressBarView accessibilityFocusedUIElement](AMPProgressBarView *self, SEL a2)
{
  id v2; // x0
  objc_super v4; // [xsp+0h] [xbp-10h] BYREF
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___AMPProgressBarView;
  v2 = objc_retainAutoreleasedReturnValue(-[AMPProgressBarView accessibilityFocusedUIElement](&v4, "accessibilityFocusedUIElement"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}