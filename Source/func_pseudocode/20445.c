-[PrintdRPCService _getPrinterDescription:assertReachability:reply:]
void __cdecl -[PrintdRPCService _getPrinterDescription:assertReachability:reply:](
        PrintdRPCService *self,
        SEL a2,
        id a3,
        bool a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  os_log_s *v10; // x23
  IPPSession *v11; // x23
  id v12; // x24
  id v13; // x26
  _QWORD v14[5]; // [xsp+8h] [xbp-98h] BYREF
  id v15; // [xsp+30h] [xbp-70h]
  bool v16; // [xsp+38h] [xbp-68h]
  uint8_t buf[4]; // [xsp+40h] [xbp-60h] BYREF
  id v18; // [xsp+44h] [xbp-5Ch]

  v8 = objc_retain(a3);
  v9 = objc_retain(a5);
  v10 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v10, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 138543362;
    v18 = v8;
    _os_log_impl((void *)&_mh_execute_header, v10, OS_LOG_TYPE_DEFAULT, "_getPrinterDescription: %{public}@", buf, 0xCu);
  }
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(-[PrintdRPCService ippNetworkingSession](self, "ippNetworkingSession"));
  v12 = objc_retainAutoreleasedReturnValue(-[IPPSession ippEndpoint:](v11, "ippEndpoint:", v8));
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_10004E770;
  v14[3] = &unk_10009F1D8;
  v13 = objc_retain(v9);
  v16 = a4;
  v14[4] = self;
  v15 = v13;
  +[lite_printer_t withLitePrinterForSessionEndpoint:completionHandler:](
    &OBJC_CLASS___lite_printer_t,
    "withLitePrinterForSessionEndpoint:completionHandler:",
    v12,
    v14);
  objc_release(v12);
  objc_release(v11);
  objc_release(v15);
  objc_release(v13);
  objc_release(v8);
}