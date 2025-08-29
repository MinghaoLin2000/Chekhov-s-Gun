-[DeviceStorageManagementViewController loadMediaPickerTableView]
void __cdecl -[DeviceStorageManagementViewController loadMediaPickerTableView](
        DeviceStorageManagementViewController *self,
        SEL a2)
{
  void *v3; // x20
  AMPDevice *v4; // x20
  DeviceMediaPickerViewController *v5; // x21
  AMPDevicesClient *v6; // x20
  DeviceMediaPickerViewController *v7; // x21
  AMPDeviceInfo *v8; // x20
  DeviceMediaPickerViewController *v9; // x21
  ITLibrary *v10; // x20
  DeviceMediaPickerViewController *v11; // x21
  NSView *v12; // x20
  DeviceMediaPickerViewController *v13; // x20
  void *v14; // x21
  NSView *v15; // x22
  NSBundle *v16; // x20
  NSString *v17; // x21
  DeviceMediaPickerViewController *v18; // x22
  DeviceMediaPickerViewController *v19; // x19
  __int64 v20; // [xsp+0h] [xbp-50h] BYREF
  id v21; // [xsp+20h] [xbp-30h] BYREF
  id location; // [xsp+28h] [xbp-28h] BYREF

  v3 = (void *)objc_opt_new(&OBJC_CLASS___DeviceMediaPickerViewController, a2);
  -[DeviceStorageManagementViewController setMediaPickerViewController:](self, "setMediaPickerViewController:", v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController mediaPickerViewController](self, "mediaPickerViewController"));
  -[DeviceViewController setDevice:](v5, "setDevice:", v4);
  objc_release(v5);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController mediaPickerViewController](self, "mediaPickerViewController"));
  -[DeviceViewController setDevicesClient:](v7, "setDevicesClient:", v6);
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController mediaPickerViewController](self, "mediaPickerViewController"));
  -[DeviceViewController setDeviceInfo:](v9, "setDeviceInfo:", v8);
  objc_release(v9);
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itDeviceLibrary](self, "itDeviceLibrary"));
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController mediaPickerViewController](self, "mediaPickerViewController"));
  -[DeviceMediaPickerViewController setItLibrary:](v11, "setItLibrary:", v10);
  objc_release(v11);
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController mediaPickerContainer](self, "mediaPickerContainer"));
  -[NSView setTranslatesAutoresizingMaskIntoConstraints:](v12, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController mediaPickerViewController](self, "mediaPickerViewController"));
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceMediaPickerViewController view](v13, "view"));
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController mediaPickerContainer](self, "mediaPickerContainer"));
  sub_10002ABA4((int)v14, v15);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  v16 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v17 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v16,
            "localizedStringForKey:value:table:",
            CFSTR("Media Picker"),
            &stru_1000BA220,
            0LL));
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController mediaPickerViewController](self, "mediaPickerViewController"));
  -[DeviceMediaPickerViewController setAccessibilityTitle:](v18, "setAccessibilityTitle:", v17);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_initWeak(&location, self);
  objc_copyWeak(&v21, &location);
  v19 = objc_retainAutoreleasedReturnValue(
          -[DeviceStorageManagementViewController mediaPickerViewController](
            self,
            "mediaPickerViewController",
            _NSConcreteStackBlock,
            3254779904LL,
            sub_10001F670,
            &unk_1000B9040));
  -[DeviceMediaPickerViewController setSelectionDidChangeAction:](v19, "setSelectionDidChangeAction:", &v20);
  objc_release(v19);
  objc_destroyWeak(&v21);
  objc_destroyWeak(&location);
}