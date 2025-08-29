-[lite_printer_t _checkAccessWithSession:]
signed __int64 __cdecl -[lite_printer_t _checkAccessWithSession:](lite_printer_t *self, SEL a2, id a3)
{
  id v4; // x19
  Printd_Parameters *v5; // x22
  NSURL *v6; // x21
  Printd_Parameters *v7; // x22
  id v8; // x21
  NSSet *v9; // x21
  NSSet *v10; // x21
  unsigned int v11; // w22
  NSSet *v12; // x21
  unsigned int v13; // w22
  Printd_Parameters *v14; // x22
  id v15; // x21
  id v16; // x22
  os_log_s *v17; // x23
  NSString *v18; // x27
  const char *v19; // x21
  NSURL *v20; // x28
  NSString *v21; // x24
  int v22; // w0
  NSString *v23; // x23
  NSString *v24; // x21
  NSString *v25; // x21
  NSString *v26; // x21
  signed __int64 v27; // x20
  _QWORD v29[3]; // [xsp+38h] [xbp-B8h] BYREF
  Printd_Parameters *v30; // [xsp+50h] [xbp-A0h]
  uint8_t buf[4]; // [xsp+60h] [xbp-90h] BYREF
  lite_printer_t *v32; // [xsp+64h] [xbp-8Ch]
  __int16 v33; // [xsp+6Ch] [xbp-84h]
  const char *v34; // [xsp+6Eh] [xbp-82h]
  __int16 v35; // [xsp+76h] [xbp-7Ah]
  NSString *v36; // [xsp+78h] [xbp-78h]
  __int16 v37; // [xsp+80h] [xbp-70h]
  id v38; // [xsp+82h] [xbp-6Eh]

  v4 = objc_retain(a3);
  while ( 1 )
  {
    sub_100014634(v29, 4LL, CFSTR("_checkAccessWithSession"));
    v29[0] = &off_100091A60;
    v5 = v30;
    v6 = objc_retainAutoreleasedReturnValue(-[lite_printer_t device_uri](self, "device_uri"));
    Printd_Parameters::_set_PrinterURI(v5, v6);
    objc_release(v6);
    v7 = v30;
    v8 = objc_retainAutoreleasedReturnValue((id)usernameFromPreviouslyAuthedPrinterOrJustMobile(self));
    Printd_Parameters::_set_RequestingUserName(v7, v8);
    objc_release(v8);
    v9 = objc_retainAutoreleasedReturnValue(-[lite_printer_t mandatoryJobAttributes](self, "mandatoryJobAttributes"));
    LOBYTE(v7) = -[NSSet count](v9, "count") == 0;
    objc_release(v9);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      v10 = objc_retainAutoreleasedReturnValue(-[lite_printer_t mandatoryJobAttributes](self, "mandatoryJobAttributes"));
      v11 = -[NSSet containsObject:](v10, "containsObject:", CFSTR("job-password"));
      objc_release(v10);
      if ( v11 )
        sub_100012C38(v30);
      v12 = objc_retainAutoreleasedReturnValue(-[lite_printer_t mandatoryJobAttributes](self, "mandatoryJobAttributes"));
      v13 = -[NSSet containsObject:](v12, "containsObject:", CFSTR("job-accounting-user-id"));
      objc_release(v12);
      if ( v13 )
      {
        v14 = v30;
        v15 = objc_retainAutoreleasedReturnValue((id)usernameFromPreviouslyAuthedPrinterOrJustMobile(self));
        Printd_Parameters::_set_JobAccountingUserID(v14, v15);
        objc_release(v15);
      }
    }
    v16 = objc_retainAutoreleasedReturnValue(-[lite_printer_t sendSingleIPPRequest:session:](self, "sendSingleIPPRequest:session:", v29, v4));
    v17 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v17, OS_LOG_TYPE_DEFAULT) )
    {
      v18 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[lite_printer_t displayName](self, "displayName")));
      v19 = -[NSString UTF8String](v18, "UTF8String");
      v20 = objc_retainAutoreleasedReturnValue(-[lite_printer_t device_uri](self, "device_uri"));
      v21 = objc_retainAutoreleasedReturnValue(-[NSURL absoluteString](v20, "absoluteString"));
      *(_DWORD *)buf = 134218754;
      v32 = self;
      v33 = 2082;
      v34 = v19;
      v35 = 2112;
      v36 = v21;
      v37 = 2112;
      v38 = v16;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v17,
        OS_LOG_TYPE_DEFAULT,
        "[Printer<%p> %{public}s] %@ Validate-Job: %@",
        buf,
        0x2Au);
      objc_release(v21);
      objc_release(v20);
      objc_release(v18);
    }
    objc_release(v17);
    v22 = (unsigned int)objc_msgSend(v16, "ippStatus");
    if ( v22 <= 1179 )
      break;
    if ( v22 != 1180 && v22 != 1183 )
      goto LABEL_18;
LABEL_12:
    v23 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("ipp status 0x%x"),
              objc_msgSend(v16, "ippStatus")));
    v24 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%s:%d/%@"),
              "-[lite_printer_t _checkAccessWithSession:]",
              524LL,
              v23));
    liteNotifyPrinter(self, 0x80000u, v24);
    objc_release(v24);
    objc_release(v23);
    v25 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[lite_printer_t _checkAccessWithSession:]"));
    LODWORD(v23) = PKCheckAlert(86400, v25) == 1;
    objc_release(v25);
    if ( !(_DWORD)v23 )
    {
      v26 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[lite_printer_t _checkAccessWithSession:]"));
      PKCancelAlert(v26);
      objc_release(v26);
      goto LABEL_18;
    }
    -[lite_printer_t clearCredential](self, "clearCredential");
    objc_release(v16);
    sub_10001472C(v29);
  }
  if ( (unsigned int)(v22 - 1025) > 0x1E )
    goto LABEL_21;
  if ( ((1 << (v22 - 1)) & 0x48000007) != 0 )
    goto LABEL_12;
  if ( v22 != 1030 )
  {
LABEL_21:
    if ( (unsigned int)v22 < 2 )
    {
      v27 = 2LL;
      goto LABEL_23;
    }
LABEL_18:
    v27 = 1LL;
    goto LABEL_23;
  }
  v27 = 3LL;
LABEL_23:
  objc_release(v16);
  sub_10001472C(v29);
  objc_release(v4);
  return v27;
}