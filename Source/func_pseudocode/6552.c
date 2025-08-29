-[MediaConversionRequestTracker storeDebugDumpOutputInformationToURL:updatingDebugInformation:]
void __cdecl -[MediaConversionRequestTracker storeDebugDumpOutputInformationToURL:updatingDebugInformation:](
        MediaConversionRequestTracker *self,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x19
  id v8; // x20
  NSFileManager *v9; // x21
  NSData *v10; // x24
  NSString *v11; // x24
  NSString *v12; // x24
  UTType *v13; // x25
  NSString *v14; // x23
  NSString *v15; // x25
  void *v16; // x26
  NSData *v17; // x27
  unsigned int v18; // w28
  id v19; // x24
  void *v20; // x27
  NSURL *v21; // x23
  NSURL *v22; // x24
  NSString *v23; // x25
  void *v24; // x26
  NSURL *v25; // x25
  NSDictionary *v26; // x23
  NSDictionary *v27; // x24
  void *v28; // x23
  void *v29; // x0
  void *v30; // x24
  NSString *v31; // x25
  NSError *v32; // x23
  NSError *v33; // x22
  void *v34; // x23
  NSAssertionHandler *v35; // x24
  id v36; // [xsp+10h] [xbp-80h] BYREF
  id v37; // [xsp+18h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-70h] BYREF
  id v39; // [xsp+24h] [xbp-6Ch]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v10 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker outputData](self, "outputData"));
  objc_release(v10);
  if ( v10 )
  {
    v11 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker outputTypeIdentifier](self, "outputTypeIdentifier"));
    objc_release(v11);
    if ( !v11 )
    {
      v35 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v35,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        self,
        CFSTR("MediaConversionDebugUtilities.m"),
        548LL,
        CFSTR("Unexpected nil result data UTI"));
      objc_release(v35);
    }
    v12 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker outputTypeIdentifier](self, "outputTypeIdentifier"));
    v13 = objc_retainAutoreleasedReturnValue(+[UTType typeWithIdentifier:](&OBJC_CLASS___UTType, "typeWithIdentifier:", v12));
    v14 = objc_retainAutoreleasedReturnValue(-[UTType preferredFilenameExtension](v13, "preferredFilenameExtension"));
    objc_release(v13);
    objc_release(v12);
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("outputData"), "stringByAppendingPathExtension:", v14));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "URLByAppendingPathComponent:", v15));
    v17 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker outputData](self, "outputData"));
    v37 = 0LL;
    v18 = -[NSData writeToURL:options:error:](v17, "writeToURL:options:error:", v16, 1LL, &v37);
    v19 = objc_retain(v37);
    objc_release(v17);
    if ( v18 )
    {
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "lastPathComponent"));
      objc_msgSend(v8, "setObject:forKeyedSubscript:", v20, CFSTR("outputFilename"));
      objc_release(v20);
    }
    else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 138543362;
      v39 = v19;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to write result data to debug dump: %{public}@",
        buf,
        0xCu);
    }
    objc_release(v16);
  }
  else
  {
    v21 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker outputURL](self, "outputURL"));
    objc_release(v21);
    if ( !v21 )
      goto LABEL_14;
    v22 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker outputURL](self, "outputURL"));
    v23 = objc_retainAutoreleasedReturnValue(-[NSURL pathExtension](v22, "pathExtension"));
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("output"), "stringByAppendingPathExtension:", v23));
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "URLByAppendingPathComponent:", v24));
    objc_release(v24);
    objc_release(v23);
    objc_release(v22);
    v25 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker outputURL](self, "outputURL"));
    v36 = 0LL;
    LODWORD(v24) = -[NSFileManager copyItemAtURL:toURL:error:](v9, "copyItemAtURL:toURL:error:", v25, v14, &v36);
    v19 = objc_retain(v36);
    objc_release(v25);
    if ( !(_DWORD)v24 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 138543362;
        v39 = v19;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "Unable to copy output file url to debug dump: %{public}@",
          buf,
          0xCu);
      }
      goto LABEL_13;
    }
    v15 = objc_retainAutoreleasedReturnValue(-[NSString lastPathComponent](v14, "lastPathComponent"));
    objc_msgSend(v8, "setObject:forKeyedSubscript:", v15, CFSTR("outputFilename"));
  }
  objc_release(v15);
LABEL_13:
  objc_release(v14);
  objc_release(v19);
LABEL_14:
  v26 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker outputInformation](self, "outputInformation"));
  objc_release(v26);
  if ( v26 )
  {
    v27 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker outputInformation](self, "outputInformation"));
    v28 = -[NSDictionary mutableCopy](v27, "mutableCopy");
    objc_release(v27);
    v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceResultDataKey")));
    v30 = v29;
    if ( v29 )
    {
      v31 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("<output data (%lu bytes) removed>"),
                objc_msgSend(v29, "length")));
      objc_msgSend(v28, "setObject:forKeyedSubscript:", v31, CFSTR("PAMediaConversionServiceResultDataKey"));
      objc_release(v31);
    }
    objc_msgSend(v8, "setObject:forKeyedSubscript:", v28, CFSTR("outputInformation"));
    objc_release(v30);
    objc_release(v28);
  }
  v32 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker error](self, "error"));
  objc_release(v32);
  if ( v32 )
  {
    v33 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker error](self, "error"));
    v34 = objc_retainAutoreleasedReturnValue(-[NSError description](v33, "description"));
    objc_msgSend(v8, "setObject:forKeyedSubscript:", v34, CFSTR("error"));
    objc_release(v34);
    objc_release(v33);
  }
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
}