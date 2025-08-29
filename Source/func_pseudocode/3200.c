-[DeviceSettingsRentalsTableCellView setUpWithNode:]
void __cdecl -[DeviceSettingsRentalsTableCellView setUpWithNode:](
        DeviceSettingsRentalsTableCellView *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  NSTextField *v5; // x21
  void *v6; // x21
  NSTextField *v7; // x22
  NSTextField *v8; // x21
  void *v9; // x22
  id v10; // x21
  NSTextField *v11; // x23
  NSTextField *v12; // x21
  void *v13; // x22
  id v14; // x21
  NSTextField *v15; // x23
  NSTextField *v16; // x21
  void *v17; // x22
  id v18; // x21
  NSTextField *v19; // x23
  DeviceSettingsButton *v20; // x21
  DeviceSettingsButton *v21; // x21
  void *v22; // x21
  DeviceSettingsButton *v23; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTableCellView titleTextField](self, "titleTextField"));
  -[NSTextField setEnabled:](v5, "setEnabled:", 1LL);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTableCellView titleTextField](self, "titleTextField"));
  -[NSTextField setStringValue:](v7, "setStringValue:", v6);
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTableCellView totalTimeTextField](self, "totalTimeTextField"));
  -[NSTextField setEnabled:](v8, "setEnabled:", 1LL);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "totalTime"));
  v10 = objc_retainAutoreleasedReturnValue(+[NSString totalTimeStringForTotalTime:](&OBJC_CLASS___NSString, "totalTimeStringForTotalTime:", v9));
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTableCellView totalTimeTextField](self, "totalTimeTextField"));
  -[NSTextField setStringValue:](v11, "setStringValue:", v10);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTableCellView sizeTextField](self, "sizeTextField"));
  -[NSTextField setEnabled:](v12, "setEnabled:", 1LL);
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "fileSize"));
  v14 = objc_retainAutoreleasedReturnValue(+[NSString storageSizeStringForFileSize:](&OBJC_CLASS___NSString, "storageSizeStringForFileSize:", v13));
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTableCellView sizeTextField](self, "sizeTextField"));
  -[NSTextField setStringValue:](v15, "setStringValue:", v14);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTableCellView expirationTimeTextField](self, "expirationTimeTextField"));
  -[NSTextField setEnabled:](v16, "setEnabled:", 1LL);
  objc_release(v16);
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "expirationDate"));
  v18 = objc_retainAutoreleasedReturnValue(
          +[NSString expirationTimeStringWithExpirationDate:](
            &OBJC_CLASS___NSString,
            "expirationTimeStringWithExpirationDate:",
            v17));
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTableCellView expirationTimeTextField](self, "expirationTimeTextField"));
  -[NSTextField setStringValue:](v19, "setStringValue:", v18);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTableCellView moveButton](self, "moveButton"));
  -[DeviceSettingsButton setNode:](v20, "setNode:", v4);
  objc_release(v20);
  v21 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTableCellView deleteButton](self, "deleteButton"));
  -[DeviceSettingsButton setNode:](v21, "setNode:", v4);
  objc_release(v21);
  v22 = objc_msgSend(v4, "isInDeviceLibrary");
  objc_release(v4);
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTableCellView deleteButton](self, "deleteButton"));
  -[DeviceSettingsButton setEnabled:](v23, "setEnabled:", v22);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v23);
}