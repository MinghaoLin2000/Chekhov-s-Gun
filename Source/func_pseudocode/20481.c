+[PKPrinterBonjourEndpoint resolveWithURL:timeout:completionHandler:]
void __cdecl +[PKPrinterBonjourEndpoint resolveWithURL:timeout:completionHandler:](
        id a1,
        SEL a2,
        id a3,
        double a4,
        id a5)
{
  id v6; // x19
  id v7; // x0
  void *v8; // x20
  id v9; // x22
  void *v10; // x21
  _QWORD v11[4]; // [xsp+0h] [xbp-50h] BYREF
  id v12; // [xsp+20h] [xbp-30h]
  id v13; // [xsp+28h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a5);
  v8 = v7;
  if ( v6 )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[IPPSession globalSession](&OBJC_CLASS___IPPSession, "globalSession"));
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "ippURL:", v6));
    objc_release(v9);
    v11[0] = _NSConcreteStackBlock;
    v11[1] = 3254779904LL;
    v11[2] = sub_1000601D8;
    v11[3] = &unk_10009FAC8;
    v12 = objc_retain(v6);
    v13 = objc_retain(v8);
    +[device_http_t deviceHTTPForSessionURL:completionHandler:](
      &OBJC_CLASS___device_http_t,
      "deviceHTTPForSessionURL:completionHandler:",
      v10,
      v11);
    objc_release(v13);
    objc_release(v12);
    objc_release(v10);
  }
  else
  {
    (*((void (__fastcall **)(id, _QWORD, _QWORD))v7 + 2))(v7, 0LL, 0LL);
  }
  objc_release(v8);
  objc_release(v6);
}