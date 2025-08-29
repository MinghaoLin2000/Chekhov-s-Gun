-[PrintdRPCService _queryPrinter:attributes:reply:]
void __cdecl -[PrintdRPCService _queryPrinter:attributes:reply:](PrintdRPCService *self, SEL a2, id a3, id a4, id a5)
{
  id v8; // x27
  id v9; // x19
  NSString *v10; // x20
  NSString *v11; // x22
  os_log_s *v12; // x20
  IPPSession *v13; // x24
  id v14; // x25
  id v15; // x26
  NSString *v16; // x28
  id v17; // x27
  id v18; // [xsp+18h] [xbp-B8h]
  _QWORD v19[4]; // [xsp+20h] [xbp-B0h] BYREF
  id v20; // [xsp+40h] [xbp-90h]
  id v21; // [xsp+48h] [xbp-88h]
  PrintdRPCService *v22; // [xsp+50h] [xbp-80h]
  id v23; // [xsp+58h] [xbp-78h]
  uint8_t buf[4]; // [xsp+60h] [xbp-70h] BYREF
  NSString *v25; // [xsp+64h] [xbp-6Ch]

  v18 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("_queryPrinter(%@)"),
            self->_logLeader));
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("%s:%d/%@"),
            "-[PrintdRPCService _queryPrinter:attributes:reply:]",
            587LL,
            v10));
  objc_release(v10);
  v12 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 138412290;
    v25 = v11;
    _os_log_impl((void *)&_mh_execute_header, v12, OS_LOG_TYPE_DEFAULT, "%@", buf, 0xCu);
  }
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(-[PrintdRPCService ippNetworkingSession](self, "ippNetworkingSession"));
  v14 = objc_retainAutoreleasedReturnValue(-[IPPSession ippEndpoint:](v13, "ippEndpoint:", v18));
  v19[0] = _NSConcreteStackBlock;
  v19[1] = 3254779904LL;
  v19[2] = sub_10004EB5C;
  v19[3] = &unk_10009F238;
  v15 = objc_retain(v9);
  v23 = v15;
  v16 = objc_retain(v11);
  v20 = v16;
  v17 = objc_retain(v8);
  v21 = v17;
  v22 = self;
  +[lite_printer_t withLitePrinterForSessionEndpoint:completionHandler:](
    &OBJC_CLASS___lite_printer_t,
    "withLitePrinterForSessionEndpoint:completionHandler:",
    v14,
    v19);
  objc_release(v14);
  objc_release(v13);
  objc_release(v21);
  objc_release(v20);
  objc_release(v23);
  objc_release(v16);
  objc_release(v15);
  objc_release(v17);
  objc_release(v18);
}