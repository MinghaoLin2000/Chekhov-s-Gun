-[DeviceSettingsErrorViewController viewDidLoad]
void __cdecl -[DeviceSettingsErrorViewController viewDidLoad](DeviceSettingsErrorViewController *self, SEL a2)
{
  ITLibrary *v3; // x20
  void *v4; // x21
  id v5; // x20
  NSTextField *v6; // x22
  id v7; // x20
  NSTextField *v8; // x19
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___DeviceSettingsErrorViewController;
  -[DeviceSettingsViewController viewDidLoad](&v9, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
  v4 = objc_retainAutoreleasedReturnValue(
         -[ITLibrary loadErrorForMediaDomain:](
           v3,
           "loadErrorForMediaDomain:",
           -[DeviceSettingsErrorViewController mediaDomain](self, "mediaDomain")));
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsErrorViewController messageForError:](self, "messageForError:", v4));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsErrorViewController errorMessageTextField](self, "errorMessageTextField"));
  -[NSTextField setStringValue:](v6, "setStringValue:", v5);
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsErrorViewController explanationForError:](self, "explanationForError:", v4));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsErrorViewController errorExplanationTextField](self, "errorExplanationTextField"));
  -[NSTextField setStringValue:](v8, "setStringValue:", v7);
  objc_release(v8);
  objc_release(v7);
  objc_release(v4);
}