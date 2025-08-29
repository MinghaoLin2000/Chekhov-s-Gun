-[job_spool_client_t submitRequestWithSession:completionHandler:]
void __cdecl -[job_spool_client_t submitRequestWithSession:completionHandler:](
        job_spool_client_t *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  void (__fastcall **v7)(id, NSNumber *); // x20
  os_log_s *v8; // x21
  lite_job_t *v9; // x21
  id v10; // x22
  void *v11; // x25
  os_log_s *v12; // x24
  unsigned int v13; // w25
  unsigned int v14; // w27
  os_log_s *v15; // x21
  lite_printer_t *v16; // x8
  lite_printer_t *printer; // x25
  unsigned int v18; // w27
  NSString *v19; // x26
  __CFString *v20; // x24
  __int64 v21; // x28
  void *v22; // x26
  os_log_s *v23; // x24
  unsigned int v24; // w23
  unsigned int v25; // w0
  NSNumber *v26; // x25
  os_log_s *v27; // x25
  unsigned int v28; // w23
  unsigned int v29; // w0
  __int64 v30; // [xsp+8h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  _BYTE v32[10]; // [xsp+14h] [xbp-7Ch]
  _BYTE v33[10]; // [xsp+1Eh] [xbp-72h]
  __int16 v34; // [xsp+28h] [xbp-68h]
  void *v35; // [xsp+2Ah] [xbp-66h]

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, NSNumber *))objc_retain(a4);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 134217984;
    *(_QWORD *)v32 = v6;
    _os_log_impl((void *)&_mh_execute_header, v8, OS_LOG_TYPE_DEFAULT, "submitRequestWithSession %p", buf, 0xCu);
  }
  objc_release(v8);
  if ( self->_printer )
  {
    if ( -[job_spool_client_t validateJobRequestAgainstPrinter:](self, "validateJobRequestAgainstPrinter:") )
    {
      v9 = -[lite_job_t initWithRequestParams:session:printer:printSettings:](
             objc_alloc(&OBJC_CLASS___lite_job_t),
             "initWithRequestParams:session:printer:printSettings:",
             self,
             v6,
             self->_printer,
             self->_printSettings);
      v30 = 0LL;
      v10 = objc_retainAutoreleasedReturnValue(
              -[job_spool_client_t finalizeFilePosition:forJobID:session:](
                self,
                "finalizeFilePosition:forJobID:session:",
                &v30,
                -[lite_job_t printd_job_id](v9, "printd_job_id"),
                v6));
      if ( v10 )
      {
        -[lite_job_t setPayloadTotal:](v9, "setPayloadTotal:", v30);
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "path"));
        -[lite_job_t setSpoolDocumentFilename:](v9, "setSpoolDocumentFilename:", v11);
        objc_release(v11);
        v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
        if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEFAULT) )
        {
          v13 = -[lite_job_t printd_job_id](v9, "printd_job_id");
          if ( v9 )
            v14 = -[lite_job_t destination_job_id](v9, "destination_job_id");
          else
            v14 = -1;
          v21 = v30;
          v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "absoluteURL"));
          *(_DWORD *)buf = 67109890;
          *(_DWORD *)v32 = v13;
          *(_WORD *)&v32[4] = 1024;
          *(_DWORD *)&v32[6] = v14;
          *(_WORD *)v33 = 2048;
          *(_QWORD *)&v33[2] = v21;
          v34 = 2114;
          v35 = v22;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v12,
            OS_LOG_TYPE_DEFAULT,
            "[Job %d][%d] Copied %lld bytes to \"%{public}@\".",
            buf,
            0x22u);
          objc_release(v22);
        }
        objc_release(v12);
        if ( (unsigned int)liteUpdateJobAttrs(v9) <= 1 )
        {
          if ( -[lite_job_t is_canceled](v9, "is_canceled") )
          {
            v20 = CFSTR("Job was canceled before it began");
          }
          else if ( (void *)-[lite_job_t localJobState](v9, "localJobState") == (void *)4 )
          {
            v20 = (__CFString *)objc_retainAutoreleasedReturnValue(-[lite_job_t addJobAndAllowToProceed](v9, "addJobAndAllowToProceed"));
            if ( !v20 )
            {
              v23 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
              if ( os_log_type_enabled(v23, OS_LOG_TYPE_DEFAULT) )
              {
                v24 = -[job_spool_client_t clientID](self, "clientID");
                v25 = -[lite_job_t printd_job_id](v9, "printd_job_id");
                *(_DWORD *)buf = 67109376;
                *(_DWORD *)v32 = v24;
                *(_WORD *)&v32[4] = 1024;
                *(_DWORD *)&v32[6] = v25;
                _os_log_impl(
                  (void *)&_mh_execute_header,
                  v23,
                  OS_LOG_TYPE_DEFAULT,
                  "[Client %d] Job id %d ready and sent for processing",
                  buf,
                  0xEu);
              }
              objc_release(v23);
              v26 = objc_retainAutoreleasedReturnValue(
                      +[NSNumber numberWithInt:](
                        &OBJC_CLASS___NSNumber,
                        "numberWithInt:",
                        -[lite_job_t printd_job_id](v9, "printd_job_id")));
              v7[2](v7, v26);
              objc_release(v26);
              v20 = 0LL;
              goto LABEL_29;
            }
          }
          else
          {
            v20 = CFSTR("Job is not in the held state");
          }
        }
        else
        {
          v20 = CFSTR("Job attributes did not match print document.");
        }
      }
      else
      {
        printer = self->_printer;
        v18 = -[lite_printer_t reasons](printer, "reasons");
        v19 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithUTF8String:](
                  &OBJC_CLASS___NSString,
                  "stringWithUTF8String:",
                  "-[job_spool_client_t submitRequestWithSession:completionHandler:]"));
        liteNotifyPrinter(printer, v18 | 0x40000, v19);
        objc_release(v19);
        v20 = CFSTR("No space for spool file");
      }
      v27 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v27, OS_LOG_TYPE_DEFAULT) )
      {
        v28 = -[job_spool_client_t clientID](self, "clientID");
        v29 = -[lite_job_t printd_job_id](v9, "printd_job_id");
        *(_DWORD *)buf = 67109634;
        *(_DWORD *)v32 = v28;
        *(_WORD *)&v32[4] = 1024;
        *(_DWORD *)&v32[6] = v29;
        *(_WORD *)v33 = 2112;
        *(_QWORD *)&v33[2] = v20;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v27,
          OS_LOG_TYPE_DEFAULT,
          "[Client %d] Job id %d failed to prepare and will be aborted: %@",
          buf,
          0x18u);
      }
      objc_release(v27);
      -[lite_job_t finishJob:](v9, "finishJob:", 8LL);
      v7[2](v7, 0LL);
LABEL_29:
      objc_release(v20);
      objc_release(v10);
      objc_release(v9);
      goto LABEL_30;
    }
    v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v15, OS_LOG_TYPE_ERROR) )
    {
      v16 = self->_printer;
      *(_DWORD *)buf = 134218242;
      *(_QWORD *)v32 = self;
      *(_WORD *)&v32[8] = 2114;
      *(_QWORD *)v33 = v16;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v15,
        OS_LOG_TYPE_ERROR,
        "Can't validate job request %p against printer %{public}@",
        buf,
        0x16u);
    }
    objc_release(v15);
  }
  v7[2](v7, 0LL);
LABEL_30:
  objc_release(v7);
  objc_release(v6);
}