-[DeviceHeaderViewController updateDeviceDetailsLabelLine]
void __cdecl -[DeviceHeaderViewController updateDeviceDetailsLabelLine](DeviceHeaderViewController *self, SEL a2)
{
  DeviceHeaderViewController *v2; // x19
  AMPDeviceBatteryInfo *v3; // x20
  NSImageView *v4; // x20
  NSImageView *v5; // x20
  NSString *v6; // x22
  DeviceAccessibleTextField *v7; // x20
  NSImageView *v8; // x20
  AMPDeviceBatteryInfo *v9; // x20
  void *v10; // x21
  NSImageView *v11; // x22
  AMPDeviceBatteryInfo *v12; // x20
  AMPDeviceBatteryInfo *v13; // x20
  void *v14; // x21
  NSNumber *v15; // x20
  NSString *v16; // x21
  NSBundle *v17; // x23
  NSString *v18; // x24
  id v19; // x25
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v2 = objc_retain(self);
  objc_sync_enter(v2);
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceBatteryInfo](v2, "deviceBatteryInfo"));
  objc_release(v3);
  if ( !v3 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController batteryImageView](v2, "batteryImageView"));
    -[NSImageView setHidden:](v5, "setHidden:", 1LL);
    objc_release(v5);
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController batteryImageView](v2, "batteryImageView"));
    -[NSImageView setImage:](v4, "setImage:", 0LL);
    goto LABEL_5;
  }
  if ( -[DeviceHeaderViewController deviceDetailsStringMode](v2, "deviceDetailsStringMode") )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController batteryImageView](v2, "batteryImageView"));
    -[NSImageView setHidden:](v4, "setHidden:", 1LL);
LABEL_5:
    objc_release(v4);
LABEL_6:
    v6 = (NSString *)objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController currentDeviceDetailsString](v2, "currentDeviceDetailsString"));
    goto LABEL_7;
  }
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController batteryImageView](v2, "batteryImageView"));
  -[NSImageView setHidden:](v8, "setHidden:", 0LL);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceBatteryInfo](v2, "deviceBatteryInfo"));
  v10 = objc_retainAutoreleasedReturnValue(-[AMPDeviceBatteryInfo batteryImage](v9, "batteryImage"));
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController batteryImageView](v2, "batteryImageView"));
  -[NSImageView setImage:](v11, "setImage:", v10);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceBatteryInfo](v2, "deviceBatteryInfo"));
  LODWORD(v10) = (unsigned int)-[AMPDeviceBatteryInfo batteryGasGaugeCapability](v12, "batteryGasGaugeCapability");
  objc_release(v12);
  if ( !(_DWORD)v10 )
    goto LABEL_6;
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceBatteryInfo](v2, "deviceBatteryInfo"));
  v14 = -[AMPDeviceBatteryInfo batteryCurrentCapacity](v13, "batteryCurrentCapacity");
  objc_release(v13);
  v15 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", (double)(__int64)v14 / 100.0));
  v16 = objc_retainAutoreleasedReturnValue(
          +[NSNumberFormatter localizedStringFromNumber:numberStyle:](
            &OBJC_CLASS___NSNumberFormatter,
            "localizedStringFromNumber:numberStyle:",
            v15,
            3LL));
  v17 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v18 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v17,
            "localizedStringForKey:value:table:",
            CFSTR("%1$@ · %2$@"),
            &stru_1000BA220,
            0LL));
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController currentDeviceDetailsString](v2, "currentDeviceDetailsString"));
  v6 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v18, v19, v16));
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  if ( !v6 )
    goto LABEL_6;
LABEL_7:
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceDetailsLabel](v2, "deviceDetailsLabel"));
  -[DeviceAccessibleTextField setStringValue:](v7, "setStringValue:", v6);
  objc_release(v7);
  -[DeviceHeaderViewController updateDeviceDetailsMenu](v2, "updateDeviceDetailsMenu");
  objc_release(v6);
  objc_sync_exit(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}