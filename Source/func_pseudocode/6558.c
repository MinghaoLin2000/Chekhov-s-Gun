-[MediaConversionRequestTracker storeDebugDump]
void __cdecl -[MediaConversionRequestTracker storeDebugDump](MediaConversionRequestTracker *self, SEL a2)
{
  NSString *v3; // x19
  NSString *v4; // x21
  NSString *v5; // x22
  NSURL *v6; // x20
  NSURL *v7; // x21
  NSFileManager *v8; // x22
  unsigned __int8 v9; // w24
  id v10; // x23
  void *v11; // x24
  NSDate *v12; // x27
  NSDate *v13; // x28
  NSNumber *v14; // x26
  NSDate *v15; // x27
  NSDate *v16; // x28
  NSNumber *v17; // x26
  NSNumber *v18; // x26
  NSString *v19; // x26
  NSDictionary *v20; // x26
  NSString *v21; // x25
  NSURL *v22; // x25
  NSData *v23; // x26
  id v24; // x27
  unsigned __int8 v25; // w28
  id v26; // [xsp+8h] [xbp-88h] BYREF
  id v27; // [xsp+10h] [xbp-80h] BYREF
  id v28; // [xsp+18h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-70h] BYREF
  NSString *v30; // [xsp+24h] [xbp-6Ch]
  __int16 v31; // [xsp+2Ch] [xbp-64h]
  id v32; // [xsp+2Eh] [xbp-62h]

  if ( -[MediaConversionRequestTracker shouldDump](self, "shouldDump") )
  {
    unsetenv("CI_PRINT_TREE");
    v3 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker requestIdentifier](self, "requestIdentifier"));
    v4 = objc_retainAutoreleasedReturnValue(NSTemporaryDirectory());
    v5 = objc_retainAutoreleasedReturnValue(
           -[NSString stringByAppendingPathComponent:](
             v4,
             "stringByAppendingPathComponent:",
             CFSTR("MediaConversionServiceDebugging")));
    v6 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:isDirectory:](&OBJC_CLASS___NSURL, "fileURLWithPath:isDirectory:", v5, 1LL));
    objc_release(v5);
    objc_release(v4);
    v7 = objc_retainAutoreleasedReturnValue(-[NSURL URLByAppendingPathComponent:](v6, "URLByAppendingPathComponent:", v3));
    v8 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v28 = 0LL;
    v9 = -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
           v8,
           "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
           v7,
           1LL,
           0LL,
           &v28);
    v10 = objc_retain(v28);
    if ( (v9 & 1) != 0 )
    {
      -[MediaConversionRequestTracker setDebugDumpDirectoryURL:](self, "setDebugDumpDirectoryURL:", v7);
      v11 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
      -[MediaConversionRequestTracker storeDebugDumpInputInformationToURL:updatingDebugInformation:](
        self,
        "storeDebugDumpInputInformationToURL:updatingDebugInformation:",
        v7,
        v11);
      -[MediaConversionRequestTracker storeDebugDumpOutputInformationToURL:updatingDebugInformation:](
        self,
        "storeDebugDumpOutputInformationToURL:updatingDebugInformation:",
        v7,
        v11);
      -[MediaConversionRequestTracker copyCoreImageGraphDumpsToURL:](self, "copyCoreImageGraphDumpsToURL:", v7);
      v12 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker endTime](self, "endTime"));
      v13 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker enqueueTime](self, "enqueueTime"));
      -[NSDate timeIntervalSinceDate:](v12, "timeIntervalSinceDate:", v13);
      v14 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:"));
      objc_msgSend(v11, "setObject:forKeyedSubscript:", v14, CFSTR("requestDurationSeconds"));
      objc_release(v14);
      objc_release(v13);
      objc_release(v12);
      v15 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker endTime](self, "endTime"));
      v16 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker dequeueAndStartProcessingTime](self, "dequeueAndStartProcessingTime"));
      -[NSDate timeIntervalSinceDate:](v15, "timeIntervalSinceDate:", v16);
      v17 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:"));
      objc_msgSend(v11, "setObject:forKeyedSubscript:", v17, CFSTR("processingDurationSeconds"));
      objc_release(v17);
      objc_release(v16);
      objc_release(v15);
      objc_msgSend(v11, "setObject:forKeyedSubscript:", self->_serviceInformation, CFSTR("serviceInformation"));
      v18 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", getpid()));
      objc_msgSend(v11, "setObject:forKeyedSubscript:", v18, CFSTR("processIdentifier"));
      objc_release(v18);
      v19 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", getprogname()));
      objc_msgSend(v11, "setObject:forKeyedSubscript:", v19, CFSTR("processName"));
      objc_release(v19);
      v20 = objc_retainAutoreleasedReturnValue(
              -[MediaConversionRequestTracker requestCompletionPerfCheckExtraInformation](
                self,
                "requestCompletionPerfCheckExtraInformation"));
      objc_msgSend(v11, "setObject:forKeyedSubscript:", v20, CFSTR("perfCheckInformation"));
      objc_release(v20);
      v21 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker requestOptionsSignatureString](self, "requestOptionsSignatureString"));
      objc_msgSend(v11, "setObject:forKeyedSubscript:", v21, CFSTR("requestOptionsSignature"));
      objc_release(v21);
      v22 = objc_retainAutoreleasedReturnValue(-[NSURL URLByAppendingPathComponent:](v7, "URLByAppendingPathComponent:", CFSTR("debug-info.plist")));
      v27 = 0LL;
      v23 = objc_retainAutoreleasedReturnValue(
              +[NSPropertyListSerialization dataWithPropertyList:format:options:error:](
                &OBJC_CLASS___NSPropertyListSerialization,
                "dataWithPropertyList:format:options:error:",
                v11,
                100LL,
                0LL,
                &v27));
      v24 = objc_retain(v27);
      objc_release(v10);
      if ( v23 )
      {
        v26 = v24;
        v25 = -[NSData writeToURL:options:error:](v23, "writeToURL:options:error:", v22, 1LL, &v26);
        v10 = objc_retain(v26);
        objc_release(v24);
        if ( (v25 & 1) == 0 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 138543362;
          v30 = (NSString *)v10;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_ERROR,
            "Unable to write debug dump info property list: %{public}@",
            buf,
            0xCu);
        }
      }
      else
      {
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 138543362;
          v30 = (NSString *)v24;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_ERROR,
            "Unable to serialize debug dump info property list: %{public}@",
            buf,
            0xCu);
        }
        v10 = v24;
      }
      objc_release(v23);
      objc_release(v22);
      objc_release(v11);
    }
    else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 138412546;
      v30 = v3;
      v31 = 2112;
      v32 = v10;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to create dump directory for media conversion request %@: %@",
        buf,
        0x16u);
    }
    objc_release(v8);
    objc_release(v10);
    objc_release(v7);
    objc_release(v6);
    objc_release(v3);
  }
}