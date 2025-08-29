__Z17liteNotifyPrinterP14lite_printer_tjP8NSString
void __fastcall liteNotifyPrinter(lite_printer_t *a1, __int64 a2, NSString *a3)
{
  lite_printer_t *v4; // x19
  unsigned int v5; // w21
  int v6; // w26
  int v7; // w23
  int v8; // w8
  int v9; // w21
  int v10; // w27
  __int64 v11; // x22
  os_log_s *v12; // x22
  NSString *v13; // x21
  NSString *v14; // x22
  time_t v15; // x20
  time_t v16; // x21
  int v17; // w20
  __CFString *v18; // x25
  id v19; // x24
  NSString *v20; // x25
  NSString *v21; // x23
  NSString *v22; // x24
  NSURL *v23; // x22
  NSURL *v24; // x22
  __CFString *v25; // x24
  int v26; // [xsp+1Ch] [xbp-84h]
  const __CFString *v27; // [xsp+20h] [xbp-80h]
  const __CFString *cf; // [xsp+28h] [xbp-78h]
  uint8_t buf[4]; // [xsp+30h] [xbp-70h] BYREF
  NSString *v30; // [xsp+34h] [xbp-6Ch]

  v4 = objc_retain(a1);
  if ( v4 )
  {
    liteLockPrinters();
    if ( !-[lite_printer_t reasons](v4, "reasons") )
      dword_1000C3F30 = 0;
    v5 = -[lite_printer_t reasons](v4, "reasons");
    -[lite_printer_t setReasonsBits:](v4, "setReasonsBits:", a2);
    v6 = a2 & ~v5;
    if ( !v6 )
      goto LABEL_11;
    quantized_notify_post(1LL, "com.apple.printd.printer-reasons-changed");
    if ( (v6 & 2) != 0 )
    {
      v12 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEFAULT) )
      {
        v13 = objc_retainAutoreleasedReturnValue(-[lite_printer_t displayName](v4, "displayName"));
        *(_DWORD *)buf = 138412290;
        v30 = v13;
        _os_log_impl((void *)&_mh_execute_header, v12, OS_LOG_TYPE_DEFAULT, "%@: Connecting to printer.", buf, 0xCu);
        objc_release(v13);
      }
      objc_release(v12);
      goto LABEL_11;
    }
    if ( (v6 & 0x80000) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(
                                 CFSTR("You do not have permission to use this printer."),
                                 "User not in access control list alert.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 19LL;
      goto LABEL_62;
    }
    if ( (v6 & 0x400000) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(
                                 CFSTR("Your account limit has been reached."),
                                 "Quota limit reached alert.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v11 = 22LL;
      v10 = 1;
      goto LABEL_62;
    }
    if ( (v6 & 0x40000) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(
                                 CFSTR("There is not enough space available to print. You can make more space available by removing apps, songs, photos, or videos."),
                                 "Disk full alert.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 18LL;
      goto LABEL_62;
    }
    if ( (v6 & 0x10000) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(CFSTR("The printer is no longer available."), "Connection lost alert.");
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 16LL;
      v7 = 1;
      goto LABEL_62;
    }
    if ( (v6 & 0x40) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(CFSTR("The printer is out of paper."), "Out of paper alert.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 6LL;
      goto LABEL_62;
    }
    if ( (v6 & 0x80) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(CFSTR("The printer has a paper jam."), "Paper jam alert.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 7LL;
      goto LABEL_62;
    }
    if ( (v6 & 0x100) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(CFSTR("The printer needs paper."), "Paper needed alert.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 8LL;
      goto LABEL_62;
    }
    if ( (v6 & 0x200) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(CFSTR("The printer may be out of toner."), "Out of toner alert.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 9LL;
      goto LABEL_62;
    }
    if ( (v6 & 0x400) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(CFSTR("The printer may be out of ink."), "Out of ink alert.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 10LL;
      goto LABEL_62;
    }
    if ( (v6 & 0x800) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(CFSTR("A paper tray is missing."), "Input tray missing alert.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 11LL;
      goto LABEL_62;
    }
    if ( (v6 & 0x1000) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(CFSTR("The printer door is open."), "Door open alert.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 12LL;
      goto LABEL_62;
    }
    if ( (v6 & 0x2000) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(CFSTR("The printer cover is open."), "Cover open alert.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 13LL;
      goto LABEL_62;
    }
    if ( (v6 & 0x4000) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(CFSTR("The printer is offline."), "Offline/missing printer alert.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 14LL;
      goto LABEL_62;
    }
    if ( (v6 & 0x20) != 0 )
    {
      if ( !-[lite_printer_t busy](v4, "busy") )
      {
        -[lite_printer_t setBusy:](v4, "setBusy:", time(0LL));
        goto LABEL_11;
      }
      v16 = time(0LL);
      if ( v16 - -[lite_printer_t busy](v4, "busy") >= 31 )
      {
        cf = (const __CFString *)PKLocalizedString(CFSTR("The printer is busy."), "Busy printer alert.");
        v7 = 0;
        v8 = 0;
        v9 = 0;
        v10 = 0;
        v11 = 5LL;
        goto LABEL_62;
      }
    }
    if ( (v6 & 4) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(CFSTR("The printer is almost out of paper."), "Low paper notice.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 2LL;
    }
    else if ( (v6 & 8) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(CFSTR("The printer is low on toner."), "Low toner notice.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 3LL;
    }
    else if ( (v6 & 0x10) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(CFSTR("The printer is low on ink."), "Low ink notice.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 4LL;
    }
    else if ( (v6 & 0x20000) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(CFSTR("The printer is paused."), "Paused/stopped printer alert.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 17LL;
    }
    else if ( (v6 & 0x100000) != 0 )
    {
      cf = (const __CFString *)PKLocalizedString(
                                 CFSTR("This printer requires account information to print."),
                                 "Missing account id alert.");
      v7 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 20LL;
      v8 = 1;
    }
    else
    {
      if ( (v6 & 0x8000) == 0 )
      {
        if ( (v6 & 0x200000) != 0 )
        {
          cf = (const __CFString *)PKLocalizedString(
                                     CFSTR("An error occurred printing this document."),
                                     "Print job failed for an unknown reason.");
          v7 = 0;
          v8 = 0;
          v10 = 0;
          v11 = 21LL;
          v9 = 1;
          goto LABEL_62;
        }
LABEL_11:
        LOBYTE(v11) = 0;
        goto LABEL_12;
      }
      cf = (const __CFString *)PKLocalizedString(CFSTR("Check the printer for errors."), "Unknown/other error alert.");
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 15LL;
    }
LABEL_62:
    if ( cf )
    {
      v17 = v8;
      if ( !((unsigned int)dword_1000C3F30 >> v11) )
      {
        v18 = objc_retainAutoreleasedReturnValue(-[lite_printer_t displayName](v4, "displayName"));
        if ( v18 )
        {
          v26 = v7;
          v27 = v18;
          v19 = objc_retainAutoreleasedReturnValue((id)sub_100042810(&dword_1000C3F30));
          v20 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithFormat:](
                    &OBJC_CLASS___NSString,
                    "stringWithFormat:",
                    CFSTR("%@ for %@"),
                    v19,
                    v18));
          v21 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithFormat:](
                    &OBJC_CLASS___NSString,
                    "stringWithFormat:",
                    CFSTR("%s:%d/%@"),
                    "liteNotifyPrinter",
                    413LL,
                    v20));
          objc_release(v20);
          objc_release(v19);
          v18 = (__CFString *)v27;
          if ( dword_1000C3F30 )
          {
            PKCancelAlert(v21);
            v22 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithFormat:](
                      &OBJC_CLASS___NSString,
                      "stringWithFormat:",
                      CFSTR("%s:%d"),
                      "liteNotifyPrinter",
                      418LL));
            PKCheckAlert(0, v22);
            objc_release(v22);
          }
          sub_100042A5C(&dword_1000C3F30, v11);
          if ( (v6 & 0x80000) != 0 || v26 | v17 | v9 )
          {
            PKDisplayRetry(v27, cf, v21);
          }
          else if ( ((1 << v11) & 0x21FFE0) != 0 )
          {
            PKCancelAlert(v21);
            PKDisplayAlert(v27, cf, v21);
          }
          else if ( v10 )
          {
            v23 = objc_retainAutoreleasedReturnValue(-[lite_printer_t quotaManagementURL](v4, "quotaManagementURL"));
            objc_release(v23);
            if ( v23 )
            {
              v24 = objc_retainAutoreleasedReturnValue(-[lite_printer_t quotaManagementURL](v4, "quotaManagementURL"));
              v25 = objc_retainAutoreleasedReturnValue(-[NSURL absoluteString](v24, "absoluteString"));
              objc_release(v25);
              objc_release(v24);
            }
            else
            {
              v25 = 0LL;
            }
            PKDisplayQuotaAlert(v27, cf, v25, v21);
          }
          else
          {
            PKDisplayNotice(v27, cf, v21);
          }
          objc_release(v21);
        }
        objc_release(v18);
      }
      CFRelease(cf);
LABEL_75:
      liteUnlockPrinters();
      goto LABEL_76;
    }
LABEL_12:
    if ( dword_1000C3F30 && (dword_1000C3F30 & (1 << v11)) == 0 )
    {
      v14 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("%s/shouldCancelAlertSinceThereIsNoMessage"),
                "liteNotifyPrinter"));
      PKCancelAlert(v14);
      objc_release(v14);
    }
    if ( (a2 & 0x21FFE0) != 0 && !v6 )
    {
      v15 = time(0LL);
      if ( v15 - -[lite_printer_t reasons_changed](v4, "reasons_changed") >= 151 )
      {
        -[lite_printer_t setReasonsBits:](v4, "setReasonsBits:", -[lite_printer_t reasons](v4, "reasons") & 2);
        dword_1000C3F30 = 0;
      }
    }
    goto LABEL_75;
  }
LABEL_76:
  objc_release(v4);
}