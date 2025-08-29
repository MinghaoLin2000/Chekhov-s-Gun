-[job_spool_client_t validateJobRequestAgainstPrinter:]
bool __cdecl -[job_spool_client_t validateJobRequestAgainstPrinter:](job_spool_client_t *self, SEL a2, id a3)
{
  id v4; // x19
  NSString *v5; // x21
  void *v6; // x22
  unsigned __int8 v7; // w23
  unsigned int v8; // w0
  os_log_s *v9; // x20
  os_log_s *v10; // x20
  const char *v11; // x3
  bool v12; // w20
  NSString *v14; // x21
  unsigned int v15; // w22
  id v16; // x0
  unsigned int v17; // w21
  unsigned int v18; // w21
  NSString *v19; // x20
  os_log_s *v20; // x20
  os_log_s *v21; // x20
  id v22; // x0
  __CFString *v23; // x21
  os_log_s *v24; // x22
  uint8_t v25[12]; // [xsp+10h] [xbp-70h] BYREF
  int v26; // [xsp+1Ch] [xbp-64h] BYREF
  __int64 (__fastcall **v27)(); // [xsp+20h] [xbp-60h] BYREF
  id v28; // [xsp+28h] [xbp-58h]
  uint8_t buf[4]; // [xsp+30h] [xbp-50h] BYREF
  __CFString *v30; // [xsp+34h] [xbp-4Ch]
  int v31; // [xsp+3Ch] [xbp-44h]
  int v32; // [xsp+40h] [xbp-40h]
  int v33; // [xsp+44h] [xbp-3Ch]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[job_spool_client_t DocumentFormat](self, "DocumentFormat"));
  if ( !v5 )
  {
    v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)buf = 0;
      v11 = "Unsupported (nil) document-format";
LABEL_12:
      _os_log_impl((void *)&_mh_execute_header, v10, OS_LOG_TYPE_ERROR, v11, buf, 2u);
    }
LABEL_13:
    objc_release(v10);
    objc_release(v5);
    goto LABEL_14;
  }
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "attrs_document_format_supported"));
  v7 = (unsigned __int8)objc_msgSend(v6, "containsObject:", v5);
  objc_release(v6);
  if ( (v7 & 1) == 0 )
  {
    v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)buf = 0;
      v11 = "Unsupported document-format";
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  objc_release(v5);
  if ( !-[job_spool_client_t hasCopies](self, "hasCopies") )
    goto LABEL_18;
  v8 = -[job_spool_client_t Copies](self, "Copies");
  if ( v8 >> 4 < 0x271 )
  {
    if ( v8 != 1 )
    {
      v14 = objc_retainAutoreleasedReturnValue(-[job_spool_client_t DocumentFormat](self, "DocumentFormat"));
      v15 = (unsigned int)-[NSString caseInsensitiveCompare:](v14, "caseInsensitiveCompare:", CFSTR("image/urf"));
      objc_release(v14);
      if ( !v15 )
      {
        v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v9, OS_LOG_TYPE_ERROR) )
        {
          *(_WORD *)buf = 0;
          _os_log_impl((void *)&_mh_execute_header, v9, OS_LOG_TYPE_ERROR, "Unsupported copies", buf, 2u);
        }
        goto LABEL_7;
      }
    }
LABEL_18:
    -[job_spool_client_t hasFinishings](self, "hasFinishings");
    if ( !-[job_spool_client_t hasMediaCol](self, "hasMediaCol") )
    {
LABEL_24:
      -[job_spool_client_t hasOutputBin](self, "hasOutputBin");
      if ( -[job_spool_client_t hasOrientationRequested](self, "hasOrientationRequested")
        && (v17 = -[job_spool_client_t OrientationRequested](self, "OrientationRequested"), v17 - 3 >= 5) )
      {
        v21 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v21, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 67109120;
          LODWORD(v30) = v17;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v21,
            OS_LOG_TYPE_ERROR,
            "Unsupported orientation-requested %d.",
            buf,
            8u);
        }
      }
      else
      {
        -[job_spool_client_t hasPageRanges](self, "hasPageRanges");
        if ( !-[job_spool_client_t hasPrintQuality](self, "hasPrintQuality")
          || (v18 = -[job_spool_client_t PrintQuality](self, "PrintQuality"), v18 - 3 < 3) )
        {
          if ( !-[job_spool_client_t hasSides](self, "hasSides") )
          {
LABEL_31:
            v12 = 1;
            goto LABEL_15;
          }
          v19 = objc_retainAutoreleasedReturnValue(-[job_spool_client_t Sides](self, "Sides"));
          if ( -[NSString isEqualToString:](v19, "isEqualToString:", CFSTR("one-sided")) )
          {
LABEL_30:
            objc_release(v19);
            goto LABEL_31;
          }
          if ( ((unsigned int)objc_msgSend(v4, "printer_type_from_cups") & 1) != 0 )
          {
            if ( -[NSString isEqualToString:](v19, "isEqualToString:", CFSTR("two-sided-long-edge")) )
              goto LABEL_30;
            if ( -[NSString isEqualToString:](v19, "isEqualToString:", CFSTR("two-sided-short-edge")) )
              goto LABEL_30;
            v23 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithFormat:](
                      &OBJC_CLASS___NSString,
                      "stringWithFormat:",
                      CFSTR("Unknown Sides attribute '%@'"),
                      v19));
            if ( !v23 )
              goto LABEL_30;
          }
          else
          {
            v23 = CFSTR("Printer doesn't support specifying sides");
          }
          v24 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
          if ( os_log_type_enabled(v24, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = 138412290;
            v30 = v23;
            _os_log_impl((void *)&_mh_execute_header, v24, OS_LOG_TYPE_ERROR, "Unsupported sides \"%@\".", buf, 0xCu);
          }
          objc_release(v24);
          objc_release(v23);
          objc_release(v19);
          goto LABEL_14;
        }
        v21 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v21, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 67109120;
          LODWORD(v30) = v18;
          _os_log_impl((void *)&_mh_execute_header, v21, OS_LOG_TYPE_ERROR, "Unsupported print-quality %d.", buf, 8u);
        }
      }
      objc_release(v21);
      goto LABEL_14;
    }
    v27 = off_10009C260;
    v28 = objc_retain(self);
    v26 = 0;
    if ( (unsigned int)pwgInitSize(buf, &v27, &v26) )
    {
      if ( !v26 || v32 + HIDWORD(v30) < *(int *)buf && v33 + v31 < (int)v30 )
      {
        v16 = v28;
        v27 = off_10009C260;
        v28 = 0LL;
        objc_release(v16);
        objc_release(v28);
        goto LABEL_24;
      }
      v20 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v20, OS_LOG_TYPE_ERROR) )
      {
        *(_WORD *)v25 = 0;
        goto LABEL_39;
      }
    }
    else
    {
      v20 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v20, OS_LOG_TYPE_ERROR) )
      {
        *(_WORD *)v25 = 0;
LABEL_39:
        _os_log_impl((void *)&_mh_execute_header, v20, OS_LOG_TYPE_ERROR, "Unsupported MediaCol value.", v25, 2u);
      }
    }
    objc_release(v20);
    v22 = v28;
    v27 = off_10009C260;
    v28 = 0LL;
    objc_release(v22);
    objc_release(v28);
    goto LABEL_14;
  }
  v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v9, OS_LOG_TYPE_ERROR) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl((void *)&_mh_execute_header, v9, OS_LOG_TYPE_ERROR, "Unsupported copies", buf, 2u);
  }
LABEL_7:
  objc_release(v9);
LABEL_14:
  v12 = 0;
LABEL_15:
  objc_release(v4);
  return v12;
}