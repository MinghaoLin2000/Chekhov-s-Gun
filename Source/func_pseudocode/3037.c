-[DeviceSetupViewController viewDidLoad]
void __cdecl -[DeviceSetupViewController viewDidLoad](DeviceSetupViewController *self, SEL a2)
{
  NSView *v3; // x20
  AMPDevice *v4; // x20
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___DeviceSetupViewController;
  -[DeviceSetupViewController viewDidLoad](&v5, "viewDidLoad");
  -[DeviceSetupViewController setAllowDevicesClientEventsUI:](self, "setAllowDevicesClientEventsUI:", 0LL);
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController contentViewContainer](self, "contentViewContainer"));
  -[NSView setTranslatesAutoresizingMaskIntoConstraints:](v3, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
  objc_release(v3);
  -[DeviceSetupViewController setSessionState:](self, "setSessionState:", 1LL);
  -[DeviceSetupViewController loadWebView](self, "loadWebView");
  -[DeviceSetupViewController loadContentView](self, "loadContentView");
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  objc_release(v4);
  if ( v4 )
    -[DeviceSetupViewController loadActivationStateFromDevice](self, "loadActivationStateFromDevice");
}