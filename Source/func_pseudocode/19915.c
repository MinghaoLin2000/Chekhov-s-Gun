-[lite_job_t logInfo]
id __cdecl -[lite_job_t logInfo](lite_job_t *self, SEL a2)
{
  const __CFString *v3; // x8
  NSString *v4; // x23
  NSString *v5; // x24
  id v6; // x25
  NSNumber *v7; // x27
  NSDate *v8; // x28
  __int64 v9; // x1
  NSString *v10; // x19
  const __CFString *v11; // x8
  const __CFString *v12; // x8
  NSNumber *v13; // x20
  NSDictionary *v14; // x26
  void *v16; // [xsp+10h] [xbp-150h]
  lite_printer_t *v17; // [xsp+18h] [xbp-148h]
  NSNumber *v18; // [xsp+20h] [xbp-140h]
  NSNumber *v19; // [xsp+28h] [xbp-138h]
  _QWORD v20[13]; // [xsp+30h] [xbp-130h] BYREF
  _QWORD v21[13]; // [xsp+98h] [xbp-C8h] BYREF
  __int64 vars8; // [xsp+168h] [xbp+8h]

  v20[0] = CFSTR("isCanceled");
  if ( -[lite_job_t is_canceled](self, "is_canceled") )
    v3 = CFSTR("yes");
  else
    v3 = CFSTR("no");
  v21[0] = v3;
  v20[1] = CFSTR("printd_job_id");
  v19 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", (unsigned int)self->_printd_job_id));
  v21[1] = v19;
  v20[2] = CFSTR("printer_job_id");
  v18 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithInt:](
            &OBJC_CLASS___NSNumber,
            "numberWithInt:",
            -[lite_job_t destination_job_id](self, "destination_job_id")));
  v21[2] = v18;
  v20[3] = CFSTR("printer");
  v17 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
  v16 = objc_retainAutoreleasedReturnValue(-[lite_printer_t debugDescription](v17, "debugDescription"));
  v21[3] = v16;
  v20[4] = CFSTR("format");
  v4 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFormat](self, "spoolDocumentFormat"));
  v21[4] = v4;
  v20[5] = CFSTR("filename");
  v5 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFilename](self, "spoolDocumentFilename"));
  v21[5] = v5;
  v20[6] = CFSTR("state");
  v6 = objc_retainAutoreleasedReturnValue((id)jobStateString(self->_localJobState));
  v21[6] = v6;
  v20[7] = CFSTR("mediaProgress");
  v7 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", (unsigned int)self->_mediaProgress));
  v21[7] = v7;
  v20[8] = CFSTR("ready_time");
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSDate dateWithTimeIntervalSince1970:](
           &OBJC_CLASS___NSDate,
           "dateWithTimeIntervalSince1970:",
           (double)-[lite_job_t readyTime](self, "readyTime")));
  v21[8] = v8;
  v20[9] = CFSTR("ptr");
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("<%@@%p>"),
            objc_opt_class(self, v9),
            self));
  v21[9] = v10;
  v20[10] = CFSTR("in_active_jobs");
  if ( (unsigned int)objc_msgSend((id)qword_1000C3EF0, "containsObject:", self) )
    v11 = CFSTR("yes");
  else
    v11 = CFSTR("no");
  v21[10] = v11;
  v20[11] = CFSTR("in_processing_jobs");
  if ( (unsigned int)objc_msgSend((id)qword_1000C3EF8, "containsObject:", self) )
    v12 = CFSTR("yes");
  else
    v12 = CFSTR("no");
  v21[11] = v12;
  v20[12] = CFSTR("try_count");
  v13 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithUnsignedInteger:](
            &OBJC_CLASS___NSNumber,
            "numberWithUnsignedInteger:",
            -[lite_job_t printTriesCount](self, "printTriesCount")));
  v21[12] = v13;
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v21,
            v20,
            13LL));
  objc_release(v13);
  objc_release(v10);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  objc_release(v16);
  objc_release(v17);
  objc_release(v18);
  objc_release(v19);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}