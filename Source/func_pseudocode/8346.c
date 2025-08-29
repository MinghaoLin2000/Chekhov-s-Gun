-[BackgroundAssetConsentViewController loadView]
void __cdecl -[BackgroundAssetConsentViewController loadView](BackgroundAssetConsentViewController *self, SEL a2)
{
  void *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___NSView),
         "initWithFrame:",
         NSZeroRect.origin.x,
         NSZeroRect.origin.y,
         NSZeroRect.size.width,
         NSZeroRect.size.height);
  -[BackgroundAssetConsentViewController setView:](self, "setView:", v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}