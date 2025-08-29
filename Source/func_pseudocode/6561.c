-[MediaConversionRequestTracker didCompleteRequest]
void __cdecl -[MediaConversionRequestTracker didCompleteRequest](MediaConversionRequestTracker *self, SEL a2)
{
  NSDate *v3; // x20
  id v4; // x0
  os_signpost_id_t signpostId; // x20
  NSString *v6; // x20
  id v7; // x21
  NSURL *v8; // x22
  NSURL *v9; // x23
  NSString *v10; // x24
  __CFString *v11; // x22
  __CFString *v12; // x24
  __CFString *v13; // x23
  PAMediaConversionServiceResourceURLCollection *v14; // x24
  NSDate *v15; // x25
  NSDate *v16; // x26
  __int64 v17; // d0
  __int64 v18; // d8
  NSDate *v19; // x25
  NSDate *v20; // x26
  __int64 v21; // d0
  __int64 v22; // d9
  NSDate *v23; // x25
  NSDate *v24; // x26
  __int64 v25; // d0
  __int64 v26; // d10
  NSError *v27; // x19
  uint8_t buf[4]; // [xsp+10h] [xbp-D0h] BYREF
  NSString *v29; // [xsp+14h] [xbp-CCh]
  __int16 v30; // [xsp+1Ch] [xbp-C4h]
  __CFString *v31; // [xsp+1Eh] [xbp-C2h]
  __int16 v32; // [xsp+26h] [xbp-BAh]
  __CFString *v33; // [xsp+28h] [xbp-B8h]
  __int16 v34; // [xsp+30h] [xbp-B0h]
  __int64 v35; // [xsp+32h] [xbp-AEh]
  __int16 v36; // [xsp+3Ah] [xbp-A6h]
  __int64 v37; // [xsp+3Ch] [xbp-A4h]
  __int16 v38; // [xsp+44h] [xbp-9Ch]
  __int64 v39; // [xsp+46h] [xbp-9Ah]
  __int16 v40; // [xsp+4Eh] [xbp-92h]
  NSError *v41; // [xsp+50h] [xbp-90h]
  __int16 v42; // [xsp+58h] [xbp-88h]
  id v43; // [xsp+5Ah] [xbp-86h]
  __int16 v44; // [xsp+62h] [xbp-7Eh]
  __CFString *v45; // [xsp+64h] [xbp-7Ch]

  v3 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
  -[MediaConversionRequestTracker setEndTime:](self, "setEndTime:", v3);
  objc_release(v3);
  v4 = objc_retain(&_os_log_default);
  signpostId = self->_signpostId;
  if ( signpostId - 1 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled((os_log_t)&_os_log_default) )
  {
    *(_WORD *)buf = 0;
    _os_signpost_emit_with_name_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_SIGNPOST_INTERVAL_END,
      signpostId,
      "com.apple.photos.mediaconversion.service.processing",
      (const char *)&unk_10003D69F,
      buf,
      2u);
  }
  objc_release(&_os_log_default);
  v6 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker requestIdentifier](self, "requestIdentifier"));
  v7 = objc_retainAutoreleasedReturnValue(
         -[MediaConversionRequestTracker requestCompletionPerfCheckExtraInformationLogString](
           self,
           "requestCompletionPerfCheckExtraInformationLogString"));
  -[MediaConversionRequestTracker storeDebugDump](self, "storeDebugDump");
  v8 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker debugDumpDirectoryURL](self, "debugDumpDirectoryURL"));
  objc_release(v8);
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker debugDumpDirectoryURL](self, "debugDumpDirectoryURL"));
    v10 = objc_retainAutoreleasedReturnValue(-[NSURL path](v9, "path"));
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR(", debug dump saved to %@ because %@ user default is set"),
              v10,
              CFSTR("MediaConversionServiceKeepTemporaryFiles")));
    objc_release(v10);
    objc_release(v9);
  }
  else
  {
    v11 = &stru_1000430C0;
  }
  if ( self->_originalRequestIdentifier )
  {
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR(" (duplicate of %@)"),
              self->_originalRequestIdentifier));
    v13 = CFSTR("(omitted)");
  }
  else
  {
    v14 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker sourceURLCollection](self, "sourceURLCollection"));
    v13 = (__CFString *)objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceResourceURLCollection logMessageSummary](v14, "logMessageSummary"));
    objc_release(v14);
    v12 = &stru_1000430C0;
  }
  v15 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker endTime](self, "endTime"));
  v16 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker enqueueTime](self, "enqueueTime"));
  -[NSDate timeIntervalSinceDate:](v15, "timeIntervalSinceDate:", v16);
  v18 = v17;
  objc_release(v16);
  objc_release(v15);
  v19 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker dequeueAndStartProcessingTime](self, "dequeueAndStartProcessingTime"));
  v20 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker enqueueTime](self, "enqueueTime"));
  -[NSDate timeIntervalSinceDate:](v19, "timeIntervalSinceDate:", v20);
  v22 = v21;
  objc_release(v20);
  objc_release(v19);
  v23 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker endTime](self, "endTime"));
  v24 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker dequeueAndStartProcessingTime](self, "dequeueAndStartProcessingTime"));
  -[NSDate timeIntervalSinceDate:](v23, "timeIntervalSinceDate:", v24);
  v26 = v25;
  objc_release(v24);
  objc_release(v23);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v27 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker error](self, "error"));
    *(_DWORD *)buf = 138545411;
    v29 = v6;
    v30 = 2114;
    v31 = v12;
    v32 = 2113;
    v33 = v13;
    v34 = 2048;
    v35 = v18;
    v36 = 2048;
    v37 = v22;
    v38 = 2048;
    v39 = v26;
    v40 = 2114;
    v41 = v27;
    v42 = 2114;
    v43 = v7;
    v44 = 2114;
    v45 = v11;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Completed media conversion for job %{public}@%{public}@, source URL Collection \"%{private}@\", request duration %"
      ".3fs (%.3fs enqueued/waiting, %.3fs processing), error = %{public}@%{public}@%{public}@",
      buf,
      0x5Cu);
    objc_release(v27);
  }
  objc_release(v12);
  objc_release(v13);
  objc_release(v11);
  objc_release(v7);
  objc_release(v6);
}