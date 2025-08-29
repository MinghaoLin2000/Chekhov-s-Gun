-[SiriNCAlertViewController dealloc]
void __cdecl -[SiriNCAlertViewController dealloc](SiriNCAlertViewController *self, SEL a2)
{
  NSDistributedNotificationCenter *v3; // x20
  SiriUIHeater *v4; // x20
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(
         +[NSDistributedNotificationCenter defaultCenter](
           &OBJC_CLASS___NSDistributedNotificationCenter,
           "defaultCenter"));
  -[NSDistributedNotificationCenter removeObserver:](v3, "removeObserver:", self);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController heater](self, "heater"));
  -[SiriUIHeater cancelPreparation](v4, "cancelPreparation");
  objc_release(v4);
  -[RBSAssertion invalidate](self->_visibilityEndowmentAssertion, "invalidate");
  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___SiriNCAlertViewController;
  -[SiriNCAlertViewController dealloc](&v5, "dealloc");
}