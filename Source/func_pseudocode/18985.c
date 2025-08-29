-[SiriNCAlertViewController viewWillAppear]
void __cdecl -[SiriNCAlertViewController viewWillAppear](SiriNCAlertViewController *self, SEL a2)
{
  RBSDomainAttribute *v3; // x21
  RBSAcquisitionCompletionAttribute *v4; // x22
  NSArray *v5; // x20
  void *v6; // x22
  RBSTarget *v7; // x21
  NSString *v8; // x22
  RBSAssertion *v9; // x0
  RBSAssertion *visibilityEndowmentAssertion; // x8
  objc_super v11; // [xsp+8h] [xbp-58h] BYREF
  _QWORD v12[2]; // [xsp+18h] [xbp-48h] BYREF

  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___SiriNCAlertViewController;
  -[SiriNCAlertViewController viewWillAppear](&v11, "viewWillAppear");
  -[SRUIFPlatformHostingInstrumentationHandler appearanceDidChange:machAbsoluteTime:](
    self->_viewHostingInstrumentationHandler,
    "appearanceDidChange:machAbsoluteTime:",
    0LL,
    mach_absolute_time());
  v3 = objc_retainAutoreleasedReturnValue(
         +[RBSDomainAttribute attributeWithDomain:name:](
           &OBJC_CLASS___RBSDomainAttribute,
           "attributeWithDomain:name:",
           CFSTR("com.apple.fuseboard"),
           CFSTR("Visible")));
  v12[0] = v3;
  v4 = objc_retainAutoreleasedReturnValue(
         +[RBSAcquisitionCompletionAttribute attributeWithCompletionPolicy:](
           &OBJC_CLASS___RBSAcquisitionCompletionAttribute,
           "attributeWithCompletionPolicy:",
           0LL));
  v12[1] = v4;
  v5 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v12, 2LL));
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(+[RBSProcessIdentity identityOfCurrentProcess](&OBJC_CLASS___RBSProcessIdentity, "identityOfCurrentProcess"));
  v7 = objc_retainAutoreleasedReturnValue(+[RBSTarget targetWithProcessIdentity:](&OBJC_CLASS___RBSTarget, "targetWithProcessIdentity:", v6));
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("Hosted Siri presentation will Appear")));
  v9 = (RBSAssertion *)objc_msgSend(
                         objc_alloc((Class)&OBJC_CLASS___RBSAssertion),
                         "initWithExplanation:target:attributes:",
                         v8,
                         v7,
                         v5);
  visibilityEndowmentAssertion = self->_visibilityEndowmentAssertion;
  self->_visibilityEndowmentAssertion = v9;
  objc_release(visibilityEndowmentAssertion);
  -[RBSAssertion acquireWithInvalidationHandler:](
    self->_visibilityEndowmentAssertion,
    "acquireWithInvalidationHandler:",
    &stru_100020BB0);
  objc_release(v8);
  objc_release(v7);
  objc_release(v5);
}