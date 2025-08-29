-[lite_printer_t identifyPrinterWithSession:message:actions:]
void __cdecl -[lite_printer_t identifyPrinterWithSession:message:actions:](
        lite_printer_t *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  NSURL *v11; // x22
  void *v12; // x23
  id v13; // x24
  id v14; // x26
  _QWORD v15[5]; // [xsp+8h] [xbp-78h] BYREF
  id v16; // [xsp+30h] [xbp-50h]
  id v17; // [xsp+38h] [xbp-48h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = objc_retainAutoreleasedReturnValue(-[lite_printer_t device_uri](self, "device_uri"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "ippURL:", v11));
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 3254779904LL;
  v15[2] = sub_10001232C;
  v15[3] = &unk_100091700;
  v15[4] = self;
  v13 = objc_retain(v9);
  v16 = v13;
  v14 = objc_retain(v10);
  v17 = v14;
  +[device_http_t deviceHTTPForSessionURL:completionHandler:](
    &OBJC_CLASS___device_http_t,
    "deviceHTTPForSessionURL:completionHandler:",
    v12,
    v15);
  objc_release(v12);
  objc_release(v11);
  objc_release(v17);
  objc_release(v16);
  objc_release(v14);
  objc_release(v13);
  objc_release(v8);
}