+[lite_printer_t _startPrinterResolution:session:queue:completionHandler:]
void __cdecl +[lite_printer_t _startPrinterResolution:session:queue:completionHandler:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v9; // x19
  id v10; // x20
  id v11; // x21
  id v12; // x22
  void *v13; // x25
  void *v14; // x24
  id v15; // x23
  id v16; // x25
  id v17; // x27
  id v18; // x26
  id v19; // x24
  _QWORD v20[4]; // [xsp+8h] [xbp-98h] BYREF
  id v21; // [xsp+28h] [xbp-78h]
  id v22; // [xsp+30h] [xbp-70h]
  id v23; // [xsp+38h] [xbp-68h]
  id v24; // [xsp+40h] [xbp-60h]
  id v25; // [xsp+48h] [xbp-58h]

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = objc_retain(a5);
  v12 = objc_retain(a6);
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "resolvedURL"));
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "ippURL:", v13));
  objc_release(v13);
  v20[0] = _NSConcreteStackBlock;
  v20[1] = 3254779904LL;
  v20[2] = sub_100010EAC;
  v20[3] = &unk_1000916A0;
  v15 = objc_retain(v9);
  v21 = v15;
  v16 = objc_retain(v11);
  v22 = v16;
  v17 = objc_retain(v12);
  v25 = v17;
  v18 = objc_retain(v10);
  v23 = v18;
  v24 = v14;
  v19 = objc_retain(v14);
  +[device_http_t deviceHTTPForSessionURL:completionHandler:](
    &OBJC_CLASS___device_http_t,
    "deviceHTTPForSessionURL:completionHandler:",
    v19,
    v20);
  objc_release(v24);
  objc_release(v23);
  objc_release(v25);
  objc_release(v22);
  objc_release(v21);
  objc_release(v19);
  objc_release(v17);
  objc_release(v16);
  objc_release(v18);
  objc_release(v15);
}