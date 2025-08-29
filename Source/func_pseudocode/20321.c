__Z21liteNotifyPINRequiredP10lite_job_t
void __fastcall liteNotifyPINRequired(lite_job_t *a1)
{
  lite_job_t *v1; // x19
  NSData *v2; // x0
  NSData *v3; // x20
  os_log_s *v4; // x21
  unsigned int v5; // w23
  unsigned int v6; // w25
  lite_printer_t *v7; // x22
  lite_printer_t *v8; // x24
  PKPrinterBonjourEndpoint *v9; // x26
  JobRequestAttributes_Base *v10; // x0
  __CFString *v11; // x0
  __CFString *v12; // x21
  void *v13; // x0
  bool v14; // cc
  __CFString *v15; // x0
  const char *v16; // x1
  id v17; // x22
  __CFString *v18; // x25
  id v19; // x24
  lite_printer_t *v20; // x26
  __CFString *v21; // x27
  NSString *v22; // x23
  id v23; // [xsp+18h] [xbp-118h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-110h] BYREF
  unsigned int v25; // [xsp+24h] [xbp-10Ch]
  __int16 v26; // [xsp+28h] [xbp-108h]
  unsigned int v27; // [xsp+2Ah] [xbp-106h]
  __int16 v28; // [xsp+2Eh] [xbp-102h]
  lite_printer_t *v29; // [xsp+30h] [xbp-100h]
  __int16 v30; // [xsp+38h] [xbp-F8h]
  PKPrinterBonjourEndpoint *v31; // [xsp+3Ah] [xbp-F6h]
  __int16 v32; // [xsp+42h] [xbp-EEh]
  _BYTE *v33; // [xsp+44h] [xbp-ECh]
  _BYTE v34[128]; // [xsp+50h] [xbp-E0h] BYREF

  v1 = objc_retain(a1);
  if ( v1 && time(0LL) - v1->pin_alert_shown >= 60 )
  {
    v2 = objc_retainAutoreleasedReturnValue(-[lite_job_t jobPassword](v1, "jobPassword"));
    v3 = v2;
    if ( v2 && -[NSData length](v2, "length") <= 0x7E )
    {
      -[NSData getBytes:length:](v3, "getBytes:length:", v34, -[NSData length](v3, "length"));
      v34[-[NSData length](v3, "length")] = 0;
      v4 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT) )
      {
        v5 = -[lite_job_t printd_job_id](v1, "printd_job_id");
        v6 = -[lite_job_t destination_job_id](v1, "destination_job_id");
        v7 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
        v8 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
        v9 = objc_retainAutoreleasedReturnValue(-[lite_printer_t bonjourName](v8, "bonjourName"));
        *(_DWORD *)buf = 67110146;
        v25 = v5;
        v26 = 1024;
        v27 = v6;
        v28 = 2048;
        v29 = v7;
        v30 = 2112;
        v31 = v9;
        v32 = 2080;
        v33 = v34;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v4,
          OS_LOG_TYPE_DEFAULT,
          "[Job %d][%d] liteNotifyPINRequired(printer=%p(%@), PIN=%s)",
          buf,
          0x2Cu);
        objc_release(v9);
        objc_release(v8);
        objc_release(v7);
      }
      objc_release(v4);
      v10 = -[lite_job_t request_attrs](v1, "request_attrs");
      v11 = (__CFString *)objc_retainAutoreleasedReturnValue((id)(*((__int64 (__fastcall **)(JobRequestAttributes_Base *))v10->var0
                                                                  + 44))(v10));
      if ( v11 )
        v12 = v11;
      else
        v12 = CFSTR("Unknown");
      v13 = -[__CFString length](v12, "length");
      v14 = (unsigned __int64)v13 > 0xFE;
      if ( (unsigned __int64)v13 <= 0xFE )
        v15 = CFSTR("Enter \"%s\" on the printer to start printing \"%@\".");
      else
        v15 = CFSTR("Enter \"%s\" on the printer to start printing \"%@…\".");
      if ( v14 )
        v16 = "PIN release alert with long job name.";
      else
        v16 = "PIN release alert.";
      v17 = objc_retainAutoreleasedReturnValue((id)PKLocalizedString(&v15->isa, v16));
      v23 = 0LL;
      v18 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithValidatedFormat:validFormatSpecifiers:error:](
                &OBJC_CLASS___NSString,
                "stringWithValidatedFormat:validFormatSpecifiers:error:",
                v17,
                CFSTR("%s%@"),
                &v23,
                v34,
                v12));
      v19 = objc_retain(v23);
      if ( -[__CFString length](v18, "length") )
      {
        liteLockPrinters();
        v20 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](v1, "printer"));
        v21 = objc_retainAutoreleasedReturnValue(-[lite_printer_t displayName](v20, "displayName"));
        v22 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "liteNotifyPINRequired"));
        PKDisplayAlert(v21, v18, v22);
        objc_release(v22);
        objc_release(v21);
        objc_release(v20);
        v1->pin_alert_shown = time(0LL);
        liteUnlockPrinters();
      }
      objc_release(v18);
      objc_release(v19);
      objc_release(v17);
      objc_release(v12);
    }
    objc_release(v3);
  }
  objc_release(v1);
}