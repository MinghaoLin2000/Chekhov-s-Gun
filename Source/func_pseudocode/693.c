-[DeviceFileSharingViewController loadChildrenForFileSharingListItem:]
void __cdecl -[DeviceFileSharingViewController loadChildrenForFileSharingListItem:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x21
  id v5; // x20
  NSProgress *v6; // x19
  NSBundle *v7; // x24
  NSString *v8; // x25
  void *v9; // x26
  NSString *v10; // x23
  AMPDevicesClient *v11; // x23
  AMPDevice *v12; // x24
  void *v13; // x25
  AMPDevicesClient *v14; // x23
  void *v15; // x24
  AMPDevice *v16; // x22
  id v17; // x21
  id v18; // x20
  _QWORD v19[4]; // [xsp+10h] [xbp-80h] BYREF
  id v20; // [xsp+30h] [xbp-60h]
  id v21; // [xsp+38h] [xbp-58h]
  id v22; // [xsp+40h] [xbp-50h] BYREF
  id location; // [xsp+48h] [xbp-48h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController selectedItems](self, "selectedItems"));
  v6 = objc_retainAutoreleasedReturnValue(+[NSProgress progressWithTotalUnitCount:](&OBJC_CLASS___NSProgress, "progressWithTotalUnitCount:", -1LL));
  v7 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v8 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v7,
           "localizedStringForKey:value:table:",
           CFSTR("Loading “%@”…"),
           &stru_1000BA220,
           0LL));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  v10 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v8, v9));
  -[NSProgress setUserInfoObject:forKey:](
    v6,
    "setUserInfoObject:forKey:",
    v10,
    _NSProgressRemoteLocalizedDescriptionKey);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v13 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v12, "deviceIdentifier"));
  -[AMPDevicesClient didStartFileSharingOperationForDeviceWithIdentifier:withProgress:](
    v11,
    "didStartFileSharingOperationForDeviceWithIdentifier:withProgress:",
    v13,
    v6);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  objc_initWeak(&location, self);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "path"));
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v19[0] = _NSConcreteStackBlock;
  v19[1] = 3254779904LL;
  v19[2] = sub_100010E68;
  v19[3] = &unk_1000B8D98;
  v17 = objc_retain(v4);
  v20 = v17;
  objc_copyWeak(&v22, &location);
  v18 = objc_retain(v5);
  v21 = v18;
  -[AMPDevicesClient fetchFileSharingItemsForApp:forDevice:withReply:](
    v14,
    "fetchFileSharingItemsForApp:forDevice:withReply:",
    v15,
    v16,
    v19);
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  objc_release(v21);
  objc_destroyWeak(&v22);
  objc_release(v20);
  objc_destroyWeak(&location);
  objc_release(v6);
  objc_release(v18);
  objc_release(v17);
}