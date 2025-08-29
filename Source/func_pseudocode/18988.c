-[SiriNCAlertViewController viewDidDisappear]
void __cdecl -[SiriNCAlertViewController viewDidDisappear](SiriNCAlertViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[SRUIFPlatformHostingInstrumentationHandler appearanceDidChange:machAbsoluteTime:](
    self->_viewHostingInstrumentationHandler,
    "appearanceDidChange:machAbsoluteTime:",
    3LL,
    mach_absolute_time());
  +[SRFStateNotifier notifySiriDidDisappear](&OBJC_CLASS___SRFStateNotifier, "notifySiriDidDisappear");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___SiriNCAlertViewController;
  -[SiriNCAlertViewController viewDidDisappear](&v3, "viewDidDisappear");
}