-[lite_printer_t _logInitialization]
void __cdecl -[lite_printer_t _logInitialization](lite_printer_t *self, SEL a2)
{
  void *v3; // x19
  NSMutableArray *v4; // x20
  os_log_s *v5; // x22
  NSString *v6; // x23
  const char *v7; // x25
  PKPrinterBrowseInfo *v8; // x24
  NSString *v9; // x22
  const char *v10; // x24
  PKPrinterBrowseInfo *v11; // x23
  NSString *v12; // x22
  const char *v13; // x0
  PKPrinterBrowseInfo *browseInfo; // x8
  PKPrinterDescription *printerDescription; // x9
  _QWORD v16[4]; // [xsp+8h] [xbp-A8h] BYREF
  id v17; // [xsp+28h] [xbp-88h]
  uint8_t buf[4]; // [xsp+30h] [xbp-80h] BYREF
  lite_printer_t *v19; // [xsp+34h] [xbp-7Ch]
  __int16 v20; // [xsp+3Ch] [xbp-74h]
  const char *v21; // [xsp+3Eh] [xbp-72h]
  __int16 v22; // [xsp+46h] [xbp-6Ah]
  PKPrinterBrowseInfo *v23; // [xsp+48h] [xbp-68h]
  __int16 v24; // [xsp+50h] [xbp-60h]
  PKPrinterDescription *v25; // [xsp+52h] [xbp-5Eh]

  v3 = objc_retainAutoreleasedReturnValue(-[PKPrinterBrowseInfo txtRecord](self->_browseInfo, "txtRecord"));
  if ( v3 )
  {
    v16[0] = _NSConcreteStackBlock;
    v16[1] = 3254779904LL;
    v16[2] = sub_10000FD30;
    v16[3] = &unk_100091470;
    v4 = objc_retain(objc_opt_new(&OBJC_CLASS___NSMutableArray));
    v17 = v4;
    objc_msgSend(v3, "enumerateKeysAndObjectsUsingBlock:", v16);
    v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
    {
      v6 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[lite_printer_t displayName](self, "displayName")));
      v7 = -[NSString UTF8String](v6, "UTF8String");
      v8 = objc_retainAutoreleasedReturnValue(-[NSMutableArray componentsJoinedByString:](v4, "componentsJoinedByString:", CFSTR(",")));
      *(_DWORD *)buf = 134218498;
      v19 = self;
      v20 = 2082;
      v21 = v7;
      v22 = 2112;
      v23 = v8;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v5,
        OS_LOG_TYPE_DEFAULT,
        "[Printer<%p> %{public}s] init from txt {%@}",
        buf,
        0x20u);
      objc_release(v6);
      objc_release(v8);
    }
    objc_release(v5);
    objc_release(v17);
  }
  else if ( self->_printerDescription )
  {
    v4 = (NSMutableArray *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled((os_log_t)v4, OS_LOG_TYPE_DEFAULT) )
    {
      v9 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[lite_printer_t displayName](self, "displayName")));
      v10 = -[NSString UTF8String](v9, "UTF8String");
      v11 = objc_retainAutoreleasedReturnValue(-[PKPrinterDescription deviceID](self->_printerDescription, "deviceID"));
      *(_DWORD *)buf = 134218498;
      v19 = self;
      v20 = 2082;
      v21 = v10;
      v22 = 2112;
      v23 = v11;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v4,
        OS_LOG_TYPE_DEFAULT,
        "[Printer<%p> %{public}s] init from desc device id {%@}",
        buf,
        0x20u);
      objc_release(v11);
      objc_release(v9);
    }
  }
  else
  {
    v4 = (NSMutableArray *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled((os_log_t)v4, OS_LOG_TYPE_DEFAULT) )
    {
      v12 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[lite_printer_t displayName](self, "displayName")));
      v13 = -[NSString UTF8String](v12, "UTF8String");
      browseInfo = self->_browseInfo;
      printerDescription = self->_printerDescription;
      *(_DWORD *)buf = 134218754;
      v19 = self;
      v20 = 2082;
      v21 = v13;
      v22 = 2112;
      v23 = browseInfo;
      v24 = 2112;
      v25 = printerDescription;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v4,
        OS_LOG_TYPE_DEFAULT,
        "[Printer<%p> %{public}s] init from info {%@} desc {%@}",
        buf,
        0x2Au);
      objc_release(v12);
    }
  }
  objc_release(v4);
  objc_release(v3);
}