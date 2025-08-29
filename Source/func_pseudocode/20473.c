-[Browse_CUPS _startWithPort:]
void __cdecl -[Browse_CUPS _startWithPort:](Browse_CUPS *self, SEL a2, unsigned __int16 a3)
{
  NSString *v4; // x20
  NSURL *v5; // x19
  id v6; // x21
  void *v7; // x20
  void *v8; // x23
  void *v9; // x21
  device_http_t *v10; // x23
  id v11; // x24
  _QWORD v12[4]; // [xsp+10h] [xbp-80h] BYREF
  id v13; // [xsp+30h] [xbp-60h]
  _QWORD v14[3]; // [xsp+38h] [xbp-58h] BYREF
  int v15[2]; // [xsp+50h] [xbp-40h]

  v4 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("http://localhost:%d/admin"),
           a3));
  v5 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v4));
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(+[IPPSession globalSession](&OBJC_CLASS___IPPSession, "globalSession"));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "ippURL:", v5));
  objc_release(v6);
  sub_10005F23C(v14, 16386LL, CFSTR("browse_CUPS(_startWIthPort)"));
  v14[0] = &off_10009F928;
  v8 = objc_retainAutoreleasedReturnValue(
         +[PKPrinterDescription txtRecordReconstructingAttributes](
           &OBJC_CLASS___PKPrinterDescription,
           "txtRecordReconstructingAttributes"));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(&off_1000B4758, "arrayByAddingObjectsFromArray:", v8));
  objc_release(v8);
  Printd_Parameters::_set_RequestedAttributes(*(void ***)v15, v9);
  v10 = -[device_http_t initWithSessionURL:displayNameForCertTrust:](
          objc_alloc(&OBJC_CLASS___device_http_t),
          "initWithSessionURL:displayNameForCertTrust:",
          v7,
          0LL);
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_10005E7E0;
  v12[3] = &unk_10009F208;
  v13 = objc_retainAutoreleasedReturnValue(-[Browse_Implementation addEntity](self, "addEntity"));
  v11 = objc_retain(v13);
  -[device_http_t sendSingleIPPRequest:completionHandler:](v10, "sendSingleIPPRequest:completionHandler:", v14, v12);
  objc_release(v13);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  sub_10005F334(v14);
  objc_release(v7);
  objc_release(v5);
}