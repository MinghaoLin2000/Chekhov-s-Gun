-[DeviceModeUnpairedViewController viewDidLoad]
void __cdecl -[DeviceModeUnpairedViewController viewDidLoad](DeviceModeUnpairedViewController *self, SEL a2)
{
  NSTextField *v3; // x20
  NSProgressIndicator *v4; // x20
  AMPDevice *v5; // x20
  AMPDevice *v6; // x21
  unsigned int v7; // w22
  objc_super v8; // [xsp+0h] [xbp-30h] BYREF

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___DeviceModeUnpairedViewController;
  -[DeviceModeUnpairedViewController viewDidLoad](&v8, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController errorLabel](self, "errorLabel"));
  -[NSTextField setHidden:](v3, "setHidden:", 1LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairSpinner](self, "pairSpinner"));
  -[NSProgressIndicator setDisplayedWhenStopped:](v4, "setDisplayedWhenStopped:", 0LL);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  if ( (unsigned int)-[AMPDevice needsPairing](v5, "needsPairing") )
  {
    objc_release(v5);
LABEL_5:
    -[DeviceModeUnpairedViewController readyForPairing](self, "readyForPairing");
    goto LABEL_6;
  }
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v7 = (unsigned int)-[AMPDevice needsUnlock](v6, "needsUnlock");
  objc_release(v6);
  objc_release(v5);
  if ( !v7 )
    goto LABEL_5;
  -[DeviceModeUnpairedViewController waitingForUnlock](self, "waitingForUnlock");
LABEL_6:
  -[DeviceModeUnpairedViewController setupPairButton](self, "setupPairButton");
  -[DeviceModeUnpairedViewController loadHeaderViewController](self, "loadHeaderViewController");
}