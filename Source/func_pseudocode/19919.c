-[lite_job_t getJobAttributes:]
id __cdecl -[lite_job_t getJobAttributes:](lite_job_t *self, SEL a2, bool a3)
{
  _BOOL4 v3; // w21
  PKMutableJobState *v5; // x19
  lite_printer_t *v6; // x22
  PKPrinterBonjourEndpoint *v7; // x23
  void *v8; // x24
  lite_printer_t *v9; // x22
  NSString *v10; // x23
  lite_printer_t *v11; // x22
  const __CFString *v12; // x0
  __CFString *v13; // x23
  const __CFString *v14; // x2
  lite_printer_t *v15; // x22
  PKPrinterBrowseInfo *v16; // x23
  void *v17; // x24
  __int64 v18; // x2
  PKPrintSettings *v19; // x22
  NSDate *v20; // x22
  NSDate *v21; // x21
  NSDate *v22; // x21
  unsigned int v23; // w21
  JobRequestAttributes_Base *v24; // x0
  unsigned int v25; // w0
  int v26; // w8
  lite_printer_t *v27; // x21
  lite_job_t *v28; // x22
  lite_printer_t *v29; // x21
  NSString *v30; // x22
  lite_printer_t *v31; // x21
  NSArray *v32; // x22
  lite_job_t *v33; // x21
  __CFString *v34; // x20
  NSData *v35; // x20
  __CFString *v36; // x22
  NSArray *v37; // x23
  __int64 v38; // x2
  NSData *v39; // x0
  NSData *v40; // x21
  NSString *v41; // x22
  NSString *v43; // x20
  __CFString *v44; // [xsp+10h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = a3;
  v5 = objc_opt_new(&OBJC_CLASS___PKMutableJobState);
  -[PKMutableJobState setLocalJobID:](v5, "setLocalJobID:", -[lite_job_t printd_job_id](self, "printd_job_id"));
  v6 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
  v7 = objc_retainAutoreleasedReturnValue(-[lite_printer_t bonjourName](v6, "bonjourName"));
  v8 = objc_retainAutoreleasedReturnValue(-[PKPrinterBonjourEndpoint dataRepresentation](v7, "dataRepresentation"));
  -[PKMutableJobState setPrinterEndpointData:](v5, "setPrinterEndpointData:", v8);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
  v10 = objc_retainAutoreleasedReturnValue(-[lite_printer_t displayName](v9, "displayName"));
  -[PKMutableJobState setPrinterDisplayName:](v5, "setPrinterDisplayName:", v10);
  objc_release(v10);
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
  v12 = objc_retainAutoreleasedReturnValue(-[lite_printer_t location](v11, "location"));
  v13 = (__CFString *)v12;
  if ( v12 )
    v14 = v12;
  else
    v14 = &stru_1000A0688;
  -[PKMutableJobState setPrinterLocation:](v5, "setPrinterLocation:", v14);
  objc_release(v13);
  objc_release(v11);
  v15 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
  v16 = objc_retainAutoreleasedReturnValue(-[lite_printer_t browseInfo](v15, "browseInfo"));
  v17 = objc_retainAutoreleasedReturnValue(-[PKPrinterBrowseInfo bonjourName](v16, "bonjourName"));
  if ( (unsigned int)objc_msgSend(v17, "provenance") == 8 )
    v18 = 3LL;
  else
    v18 = 4LL;
  -[PKMutableJobState setPrinterKind:](v5, "setPrinterKind:", v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  v19 = objc_retainAutoreleasedReturnValue(-[lite_job_t printSettings](self, "printSettings"));
  -[PKMutableJobState setSettings:](v5, "setSettings:", v19);
  objc_release(v19);
  v20 = objc_retainAutoreleasedReturnValue(
          +[NSDate dateWithTimeIntervalSince1970:](
            &OBJC_CLASS___NSDate,
            "dateWithTimeIntervalSince1970:",
            (double)self->_createdTime));
  -[PKMutableJobState setTimeAtCreation:](v5, "setTimeAtCreation:", v20);
  objc_release(v20);
  if ( v3 )
    -[PKMutableJobState setThumbnailImage:](v5, "setThumbnailImage:", self->_thumbnail);
  -[PKMutableJobState setMediaSheetsCompleted:](
    v5,
    "setMediaSheetsCompleted:",
    -[lite_job_t sheetsCompleted](self, "sheetsCompleted"));
  v21 = objc_retainAutoreleasedReturnValue(
          +[NSDate dateWithTimeIntervalSince1970:](
            &OBJC_CLASS___NSDate,
            "dateWithTimeIntervalSince1970:",
            (double)-[lite_job_t readyTime](self, "readyTime")));
  -[PKMutableJobState setTimeAtProcessing:](v5, "setTimeAtProcessing:", v21);
  objc_release(v21);
  v22 = objc_retainAutoreleasedReturnValue(
          +[NSDate dateWithTimeIntervalSince1970:](
            &OBJC_CLASS___NSDate,
            "dateWithTimeIntervalSince1970:",
            (double)-[lite_job_t completedTime](self, "completedTime")));
  -[PKMutableJobState setTimeAtCompleted:](v5, "setTimeAtCompleted:", v22);
  objc_release(v22);
  v23 = -[lite_job_t numberOfSheetsPerCopy](self, "numberOfSheetsPerCopy");
  v24 = -[lite_job_t request_attrs](self, "request_attrs");
  v25 = (*((__int64 (__fastcall **)(JobRequestAttributes_Base *))v24->var0 + 16))(v24);
  if ( v25 <= 1 )
    v26 = 1;
  else
    v26 = v25;
  -[PKMutableJobState setMediaSheets:](v5, "setMediaSheets:", (int)(v26 * v23));
  -[PKMutableJobState setMediaProgress:](v5, "setMediaProgress:", self->_mediaProgress);
  -[PKMutableJobState setRemoteJobId:](
    v5,
    "setRemoteJobId:",
    -[lite_job_t destination_job_id](self, "destination_job_id"));
  v27 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
  v28 = objc_retainAutoreleasedReturnValue(-[lite_printer_t currentJob](v27, "currentJob"));
  objc_release(v28);
  objc_release(v27);
  if ( v28 == self )
  {
    v29 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
    v30 = objc_retainAutoreleasedReturnValue(-[lite_printer_t printerStateMessage](v29, "printerStateMessage"));
    -[PKMutableJobState setJobPrinterStateMessage:](v5, "setJobPrinterStateMessage:", v30);
    objc_release(v30);
    objc_release(v29);
    v31 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
    v32 = objc_retainAutoreleasedReturnValue(-[lite_printer_t printerStateReasons](v31, "printerStateReasons"));
    -[PKMutableJobState setJobPrinterStateReasons:](v5, "setJobPrinterStateReasons:", v32);
    objc_release(v32);
    objc_release(v31);
  }
  -[PKMutableJobState setJobStateMessage:](v5, "setJobStateMessage:", &stru_1000A0688);
  v33 = objc_retain(self);
  v34 = CFSTR("none");
  switch ( -[lite_job_t localJobState](v33, "localJobState") )
  {
    case 3LL:
      break;
    case 4LL:
      v35 = objc_retainAutoreleasedReturnValue(-[lite_job_t jobPassword](v33, "jobPassword"));
      objc_release(v35);
      if ( v35 )
      {
        v34 = CFSTR("job-password-wait");
      }
      else if ( v33->release_wait )
      {
        v34 = CFSTR("job-release-wait");
      }
      else
      {
        v43 = objc_retainAutoreleasedReturnValue(-[lite_job_t jobHoldUntil](v33, "jobHoldUntil"));
        objc_release(v43);
        if ( v43 )
          v34 = CFSTR("job-hold-until-specified");
        else
          v34 = CFSTR("job-incoming");
      }
      break;
    case 5LL:
      if ( -[lite_job_t is_canceled](v33, "is_canceled") )
        v34 = CFSTR("processing-to-stop-point");
      else
        v34 = CFSTR("job-printing");
      break;
    case 6LL:
      v34 = CFSTR("job-stopped");
      break;
    case 8LL:
      v34 = CFSTR("aborted-by-system");
      break;
    case 9LL:
      v34 = CFSTR("job-completed-successfully");
      break;
    default:
      v34 = CFSTR("job-canceled-by-user");
      break;
  }
  objc_release(v33);
  v36 = objc_retain(v34);
  v44 = v36;
  v37 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v44, 1LL));
  -[PKMutableJobState setJobStateReasons:](v5, "setJobStateReasons:", v37);
  objc_release(v37);
  objc_release(v36);
  if ( (void *)-[lite_job_t localJobState](v33, "localJobState") == (void *)5
    && -[lite_job_t is_canceled](v33, "is_canceled") )
  {
    v38 = 10LL;
  }
  else
  {
    v38 = -[lite_job_t localJobState](v33, "localJobState");
  }
  -[PKMutableJobState setState:](v5, "setState:", v38);
  v39 = objc_retainAutoreleasedReturnValue(-[lite_job_t jobPassword](v33, "jobPassword"));
  v40 = v39;
  if ( v39 )
  {
    v41 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%.*s"),
              -[NSData length](v39, "length"),
              -[NSData bytes](objc_retainAutorelease(v39), "bytes")));
    -[PKMutableJobState setPIN:](v5, "setPIN:", v41);
    objc_release(v41);
  }
  objc_release(v40);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}