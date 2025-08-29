-[SiriNCAlertViewController loadView]
void __cdecl -[SiriNCAlertViewController loadView](SiriNCAlertViewController *self, SEL a2)
{
  id v3; // x20
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( (unsigned int)_os_feature_enabled_impl("SiriUI", "compact_siri") )
  {
    v3 = objc_alloc_init((Class)&OBJC_CLASS___NSView);
    objc_msgSend(v3, "setWantsLayer:", 1LL);
    -[SiriNCAlertViewController setView:](self, "setView:", v3);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v3);
  }
  else
  {
    v4.receiver = self;
    v4.super_class = (Class)&OBJC_CLASS___SiriNCAlertViewController;
    -[SiriNCAlertViewController loadView](&v4, "loadView");
  }
}