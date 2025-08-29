-[job_spool_client_t finalizeFilePosition:forJobID:session:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[job_spool_client_t finalizeFilePosition:forJobID:session:](
        job_spool_client_t *self,
        SEL a2,
        signed __int64 *a3,
        int a4,
        id a5)
{
  __int64 v5; // x24
  id v8; // x19
  __CFString *v9; // x0
  __CFString *v10; // x21
  __CFString *v11; // x20
  NSString *v12; // x21
  const __CFString *v13; // x23
  NSString *v14; // x22
  NSFileManager *v15; // x27
  NSURL *v16; // x28
  NSURL *v17; // x23
  os_log_s *v18; // x27
  signed __int64 v19; // x0
  os_log_s *v20; // x26
  unsigned int v21; // w0
  void *v22; // x26
  lite_printer_t *v23; // x25
  dispatch_queue_global_s *v24; // x27
  lite_printer_t *v25; // x25
  id v26; // x24
  _QWORD block[4]; // [xsp+28h] [xbp-D8h] BYREF
  NSURL *v29; // [xsp+48h] [xbp-B8h]
  __CFString *v30; // [xsp+50h] [xbp-B0h]
  id v31; // [xsp+58h] [xbp-A8h]
  NSString *v32; // [xsp+60h] [xbp-A0h]
  id v33; // [xsp+68h] [xbp-98h]
  lite_printer_t *v34; // [xsp+70h] [xbp-90h]
  int v35; // [xsp+78h] [xbp-88h]
  uint8_t buf[4]; // [xsp+80h] [xbp-80h] BYREF
  unsigned int v37; // [xsp+84h] [xbp-7Ch]
  __int16 v38; // [xsp+88h] [xbp-78h]
  NSURL *v39; // [xsp+8Ah] [xbp-76h]
  __int64 vars8; // [xsp+108h] [xbp+8h]

  v5 = *(_QWORD *)&a4;
  v8 = objc_retain(a5);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "clientBundleIdentifier"));
  v10 = v9;
  if ( !v9 )
    v9 = CFSTR("unknown_bundle");
  v11 = objc_retain(v9);
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(-[job_spool_client_t DocumentFormat](self, "DocumentFormat"));
  if ( (unsigned int)-[NSString caseInsensitiveCompare:](v12, "caseInsensitiveCompare:", CFSTR("image/jpeg")) )
  {
    if ( (unsigned int)-[NSString caseInsensitiveCompare:](v12, "caseInsensitiveCompare:", CFSTR("image/png")) )
    {
      if ( (unsigned int)-[NSString caseInsensitiveCompare:](v12, "caseInsensitiveCompare:", CFSTR("application/pdf")) )
      {
        if ( (unsigned int)-[NSString caseInsensitiveCompare:](v12, "caseInsensitiveCompare:", CFSTR("application/urf")) )
          v13 = CFSTR("prn");
        else
          v13 = CFSTR("urf");
      }
      else
      {
        v13 = CFSTR("pdf");
      }
    }
    else
    {
      v13 = CFSTR("png");
    }
  }
  else
  {
    v13 = CFSTR("jpg");
  }
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("%@_%d_%d.%@"),
            v11,
            getpid(),
            v5,
            v13));
  v15 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v16 = objc_retainAutoreleasedReturnValue(-[NSFileManager temporaryDirectory](v15, "temporaryDirectory"));
  v17 = objc_retainAutoreleasedReturnValue(-[NSURL URLByAppendingPathComponent:](v16, "URLByAppendingPathComponent:", v14));
  objc_release(v16);
  objc_release(v15);
  v18 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v18, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 67109378;
    v37 = -[job_spool_client_t clientID](self, "clientID");
    v38 = 2114;
    v39 = v17;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v18,
      OS_LOG_TYPE_DEFAULT,
      "[Client %d] Saving print job to \"%{public}@\".",
      buf,
      0x12u);
  }
  objc_release(v18);
  v19 = -[job_spool_client_t moveStreamingFileTo:](self, "moveStreamingFileTo:", v17);
  *a3 = v19;
  if ( v19 < 0 )
  {
    v20 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v20, OS_LOG_TYPE_DEFAULT) )
    {
      v21 = -[job_spool_client_t clientID](self, "clientID");
      *(_DWORD *)buf = 67109378;
      v37 = v21;
      v38 = 2114;
      v39 = v17;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v20,
        OS_LOG_TYPE_DEFAULT,
        "[Client %d] Unable to move print file to %{public}@",
        buf,
        0x12u);
    }
    objc_release(v20);
  }
  if ( PreserveControlFiles )
  {
    v22 = -[PKPrintSettings copyWithZone:](self->_printSettings, "copyWithZone:", 0LL);
    v23 = objc_retain(self->_printer);
    v24 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(-2LL, 0LL));
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_1000162D0;
    block[3] = &unk_10009C200;
    v29 = objc_retain(v17);
    v35 = v5;
    v30 = objc_retain(v11);
    v31 = v22;
    v32 = objc_retain(v12);
    v33 = objc_retain(v8);
    v34 = v23;
    v25 = objc_retain(v23);
    v26 = objc_retain(v22);
    dispatch_async(v24, block);
    objc_release(v24);
    objc_release(v34);
    objc_release(v33);
    objc_release(v32);
    objc_release(v31);
    objc_release(v30);
    objc_release(v29);
    objc_release(v25);
    objc_release(v26);
  }
  objc_release(v14);
  objc_release(v12);
  objc_release(v11);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v17);
}