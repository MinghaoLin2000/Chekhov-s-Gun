-[PrintdRPCService startStreamingRequest:printSettings:reply:]
void __cdecl -[PrintdRPCService startStreamingRequest:printSettings:reply:](
        PrintdRPCService *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  void (__fastcall **v10)(id, _QWORD); // x21
  os_log_s *v11; // x23
  os_log_s *v12; // x22
  id v13; // x22
  void *v14; // x23
  _QWORD v15[4]; // [xsp+0h] [xbp-90h] BYREF
  id v16; // [xsp+20h] [xbp-70h]
  id v17; // [xsp+28h] [xbp-68h]
  id v18; // [xsp+30h] [xbp-60h]
  id v19; // [xsp+38h] [xbp-58h] BYREF
  id buf[2]; // [xsp+40h] [xbp-50h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = (void (__fastcall **)(id, _QWORD))objc_retain(a5);
  v11 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEFAULT) )
  {
    LOWORD(buf[0]) = 0;
    _os_log_impl((void *)&_mh_execute_header, v11, OS_LOG_TYPE_DEFAULT, "startStreamingRequest", (uint8_t *)buf, 2u);
  }
  objc_release(v11);
  if ( self->_spoolClient )
  {
    v12 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
    {
      LOWORD(buf[0]) = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v12,
        OS_LOG_TYPE_ERROR,
        "Only one spool client allowed at a time",
        (uint8_t *)buf,
        2u);
    }
    objc_release(v12);
    v10[2](v10, 0LL);
  }
  else
  {
    objc_initWeak(buf, self);
    v13 = objc_retainAutoreleasedReturnValue(-[PrintdRPCService ippNetworkingSessionForStreaming](self, "ippNetworkingSessionForStreaming"));
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "ippEndpoint:", v8));
    v15[0] = _NSConcreteStackBlock;
    v15[1] = 3254779904LL;
    v15[2] = sub_10004C550;
    v15[3] = &unk_10009F118;
    objc_copyWeak(&v19, buf);
    v16 = objc_retain(v9);
    v18 = objc_retain(v10);
    v17 = objc_retain(v8);
    +[lite_printer_t withLitePrinterForSessionEndpoint:completionHandler:](
      &OBJC_CLASS___lite_printer_t,
      "withLitePrinterForSessionEndpoint:completionHandler:",
      v14,
      v15);
    objc_release(v14);
    objc_release(v13);
    objc_release(v17);
    objc_release(v18);
    objc_release(v16);
    objc_destroyWeak(&v19);
    objc_destroyWeak(buf);
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}