-[SiriNCAlertViewController viewWillDisappear]
void __cdecl -[SiriNCAlertViewController viewWillDisappear](SiriNCAlertViewController *self, SEL a2)
{
  RBSAssertion *visibilityEndowmentAssertion; // x0
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  -[SRUIFPlatformHostingInstrumentationHandler appearanceDidChange:machAbsoluteTime:](
    self->_viewHostingInstrumentationHandler,
    "appearanceDidChange:machAbsoluteTime:",
    2LL,
    mach_absolute_time());
  -[RBSAssertion invalidate](self->_visibilityEndowmentAssertion, "invalidate");
  visibilityEndowmentAssertion = self->_visibilityEndowmentAssertion;
  self->_visibilityEndowmentAssertion = 0LL;
  objc_release(visibilityEndowmentAssertion);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___SiriNCAlertViewController;
  -[SiriNCAlertViewController viewWillDisappear](&v4, "viewWillDisappear");
}