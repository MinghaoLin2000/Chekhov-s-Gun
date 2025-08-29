-[PrintdRPCService _checkAccessState:reply:]
void __cdecl -[PrintdRPCService _checkAccessState:reply:](PrintdRPCService *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  os_log_s *v8; // x22
  IPPSession *v9; // x22
  id v10; // x23
  id v11; // x25
  _QWORD v12[5]; // [xsp+0h] [xbp-90h] BYREF
  id v13; // [xsp+28h] [xbp-68h]
  uint8_t buf[4]; // [xsp+30h] [xbp-60h] BYREF
  id v15; // [xsp+34h] [xbp-5Ch]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 138543362;
    v15 = v6;
    _os_log_impl((void *)&_mh_execute_header, v8, OS_LOG_TYPE_DEFAULT, "_checkAccessState: %{public}@", buf, 0xCu);
  }
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[PrintdRPCService ippNetworkingSession](self, "ippNetworkingSession"));
  v10 = objc_retainAutoreleasedReturnValue(-[IPPSession ippEndpoint:](v9, "ippEndpoint:", v6));
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_10004E1E8;
  v12[3] = &unk_10009F178;
  v11 = objc_retain(v7);
  v12[4] = self;
  v13 = v11;
  +[lite_printer_t withLitePrinterForSessionEndpoint:completionHandler:](
    &OBJC_CLASS___lite_printer_t,
    "withLitePrinterForSessionEndpoint:completionHandler:",
    v10,
    v12);
  objc_release(v10);
  objc_release(v9);
  objc_release(v13);
  objc_release(v11);
  objc_release(v6);
}