-[DeviceFileSharingViewController filePromiseProvider:writePromiseToURL:completionHandler:]
void __cdecl -[DeviceFileSharingViewController filePromiseProvider:writePromiseToURL:completionHandler:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x24
  void *v11; // x21
  AMPDevicesClient *v12; // x26
  void *v13; // x27
  id v14; // x24
  void *v15; // x25
  AMPDevicesClient *v16; // x26
  AMPDevice *v17; // x23
  void *v18; // x27
  _QWORD v19[4]; // [xsp+8h] [xbp-88h] BYREF
  id v20; // [xsp+28h] [xbp-68h]
  id v21; // [xsp+30h] [xbp-60h] BYREF
  id location; // [xsp+38h] [xbp-58h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "userInfo"));
  objc_initWeak(&location, self);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "url"));
  v19[0] = _NSConcreteStackBlock;
  v19[1] = 3254779904LL;
  v19[2] = sub_1000105D8;
  v19[3] = &unk_1000B8D68;
  objc_copyWeak(&v21, &location);
  v14 = objc_retain(v10);
  v20 = v14;
  v15 = objc_retainAutoreleasedReturnValue(-[AMPDevicesClient copyItemAtURL:toURL:withReply:](v12, "copyItemAtURL:toURL:withReply:", v13, v9, v19));
  objc_release(v13);
  objc_release(v12);
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v18 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v17, "deviceIdentifier"));
  -[AMPDevicesClient didStartFileSharingOperationForDeviceWithIdentifier:withProgress:](
    v16,
    "didStartFileSharingOperationForDeviceWithIdentifier:withProgress:",
    v18,
    v15);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  objc_release(v20);
  objc_destroyWeak(&v21);
  objc_destroyWeak(&location);
  objc_release(v11);
  objc_release(v14);
  objc_release(v9);
  objc_release(v8);
}