-[PrintdRPCService _identifyPrinter:message:actions:]
void __cdecl -[PrintdRPCService _identifyPrinter:message:actions:](PrintdRPCService *self, SEL a2, id a3, id a4, id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  os_log_s *v11; // x23
  IPPSession *v12; // x23
  id v13; // x24
  id v14; // x22
  id v15; // x26
  _QWORD v16[5]; // [xsp+8h] [xbp-98h] BYREF
  id v17; // [xsp+30h] [xbp-70h]
  id v18; // [xsp+38h] [xbp-68h]
  uint8_t buf[4]; // [xsp+40h] [xbp-60h] BYREF
  id v20; // [xsp+44h] [xbp-5Ch]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 138543362;
    v20 = v8;
    _os_log_impl((void *)&_mh_execute_header, v11, OS_LOG_TYPE_DEFAULT, "_identifyPrinter: %{public}@", buf, 0xCu);
  }
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(-[PrintdRPCService ippNetworkingSession](self, "ippNetworkingSession"));
  v13 = objc_retainAutoreleasedReturnValue(-[IPPSession ippEndpoint:](v12, "ippEndpoint:", v8));
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_10004E4D8;
  v16[3] = &unk_10009F1A8;
  v16[4] = self;
  v14 = objc_retain(v9);
  v17 = v14;
  v15 = objc_retain(v10);
  v18 = v15;
  +[lite_printer_t withLitePrinterForSessionEndpoint:completionHandler:](
    &OBJC_CLASS___lite_printer_t,
    "withLitePrinterForSessionEndpoint:completionHandler:",
    v13,
    v16);
  objc_release(v13);
  objc_release(v12);
  objc_release(v18);
  objc_release(v17);
  objc_release(v15);
  objc_release(v14);
  objc_release(v8);
}