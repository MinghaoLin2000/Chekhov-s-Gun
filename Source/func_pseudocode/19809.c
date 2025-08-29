-[lite_printer_t refreshCurrentDescriptionForSession:completionHandler:]
void __cdecl -[lite_printer_t refreshCurrentDescriptionForSession:completionHandler:](
        lite_printer_t *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x0
  void *v8; // x20
  PKPrinterDescription *printerDescription; // x1
  NSDate *v10; // x21
  double v11; // d0
  os_log_s *v12; // x23
  NSString *v13; // x24
  NSDate *v14; // x0
  NSDate *printerDescriptionTime; // x8
  int v16; // [xsp+0h] [xbp-50h] BYREF
  lite_printer_t *v17; // [xsp+4h] [xbp-4Ch]
  __int16 v18; // [xsp+Ch] [xbp-44h]
  const char *v19; // [xsp+Eh] [xbp-42h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = v7;
  printerDescription = self->_printerDescription;
  if ( printerDescription )
  {
    (*((void (__fastcall **)(id, PKPrinterDescription *, PKPrinterBrowseInfo *))v7 + 2))(
      v7,
      printerDescription,
      self->_browseInfo);
    v10 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
    -[NSDate timeIntervalSinceDate:](v10, "timeIntervalSinceDate:", self->_printerDescriptionTime);
    if ( v11 > 5.0 )
    {
      v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEFAULT) )
      {
        v13 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[lite_printer_t displayName](self, "displayName")));
        v16 = 134218242;
        v17 = self;
        v18 = 2082;
        v19 = -[NSString UTF8String](v13, "UTF8String");
        _os_log_impl(
          (void *)&_mh_execute_header,
          v12,
          OS_LOG_TYPE_DEFAULT,
          "[Printer<%p> %{public}s] refreshing printer description after timeout",
          (uint8_t *)&v16,
          0x16u);
        objc_release(v13);
      }
      objc_release(v12);
      v14 = objc_retainAutoreleasedReturnValue(-[NSDate dateByAddingTimeInterval:](v10, "dateByAddingTimeInterval:", 30.0));
      printerDescriptionTime = self->_printerDescriptionTime;
      self->_printerDescriptionTime = v14;
      objc_release(printerDescriptionTime);
      -[lite_printer_t forceRefreshCurrentDescriptionForSession:completionHandler:](
        self,
        "forceRefreshCurrentDescriptionForSession:completionHandler:",
        v6,
        0LL);
    }
    objc_release(v10);
  }
  else
  {
    -[lite_printer_t forceRefreshCurrentDescriptionForSession:completionHandler:](
      self,
      "forceRefreshCurrentDescriptionForSession:completionHandler:",
      v6,
      v7);
  }
  objc_release(v8);
  objc_release(v6);
}