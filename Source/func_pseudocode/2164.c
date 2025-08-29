-[AMPProgressBarView accessibilityAttributeValue:]
id __cdecl -[AMPProgressBarView accessibilityAttributeValue:](AMPProgressBarView *self, SEL a2, id a3)
{
  NSAccessibilityRole v4; // x0
  NSAccessibilityRole v5; // x19
  NSString *v6; // x0
  NSString *v7; // x20
  objc_super v9; // [xsp+0h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (NSAccessibilityRole)objc_retain(a3);
  v5 = v4;
  if ( NSAccessibilityProgressIndicatorRole == v4 )
  {
    v6 = objc_retain(v4);
  }
  else
  {
    v9.receiver = self;
    v9.super_class = (Class)&OBJC_CLASS___AMPProgressBarView;
    v6 = (NSString *)objc_retainAutoreleasedReturnValue(-[AMPProgressBarView accessibilityAttributeValue:](&v9, "accessibilityAttributeValue:", v4));
  }
  v7 = v6;
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}