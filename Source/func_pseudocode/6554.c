-[MediaConversionRequestTracker storeDebugDumpInputInformationToURL:updatingDebugInformation:]
void __cdecl -[MediaConversionRequestTracker storeDebugDumpInputInformationToURL:updatingDebugInformation:](
        MediaConversionRequestTracker *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  NSDictionary *v8; // x22
  NSString *v9; // x23
  NSDictionary *v10; // x23
  NSData *v11; // x22
  id v12; // x24
  void *v13; // x25
  unsigned __int8 v14; // w26
  id v15; // x23
  PAMediaConversionServiceResourceURLCollection *v16; // x24
  unsigned __int64 v17; // x25
  PAMediaConversionServiceResourceURLCollection *v18; // x24
  PAMediaConversionServiceResourceURLCollection *v19; // x24
  unsigned __int64 v20; // x25
  PAMediaConversionServiceResourceURLCollection *v21; // x24
  id v22; // [xsp+0h] [xbp-70h] BYREF
  id v23; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-60h] BYREF
  id v25; // [xsp+14h] [xbp-5Ch]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker requestOptions](self, "requestOptions"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSDictionary description](v8, "description"));
  objc_msgSend(v7, "setObject:forKeyedSubscript:", v9, CFSTR("requestOptionsDescription"));
  objc_release(v9);
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker requestOptions](self, "requestOptions"));
  v23 = 0LL;
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSKeyedArchiver archivedDataWithRootObject:requiringSecureCoding:error:](
            &OBJC_CLASS___NSKeyedArchiver,
            "archivedDataWithRootObject:requiringSecureCoding:error:",
            v10,
            0LL,
            &v23));
  v12 = objc_retain(v23);
  objc_release(v10);
  if ( v11 )
  {
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "URLByAppendingPathComponent:", CFSTR("request-options.keyedarchive")));
    v22 = v12;
    v14 = -[NSData writeToURL:options:error:](v11, "writeToURL:options:error:", v13, 1LL, &v22);
    v15 = objc_retain(v22);
    objc_release(v12);
    if ( (v14 & 1) == 0 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 138543362;
      v25 = v15;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to write request options: %{public}@",
        buf,
        0xCu);
    }
    objc_release(v13);
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 138543362;
      v25 = v12;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to serialize request options: %{public}@",
        buf,
        0xCu);
    }
    v15 = v12;
  }
  v16 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker sourceURLCollection](self, "sourceURLCollection"));
  v17 = -[PAMediaConversionServiceResourceURLCollection urlCount](v16, "urlCount");
  objc_release(v16);
  if ( v17 )
  {
    v18 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker sourceURLCollection](self, "sourceURLCollection"));
    -[MediaConversionRequestTracker dumpResourceURLCollection:toParentDirectory:directoryName:updatingDebugInformation:](
      self,
      "dumpResourceURLCollection:toParentDirectory:directoryName:updatingDebugInformation:",
      v18,
      v6,
      CFSTR("sourceResourceURLCollection"),
      v7);
    objc_release(v18);
  }
  v19 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker destinationURLCollection](self, "destinationURLCollection"));
  v20 = -[PAMediaConversionServiceResourceURLCollection urlCount](v19, "urlCount");
  objc_release(v19);
  if ( v20 )
  {
    v21 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker destinationURLCollection](self, "destinationURLCollection"));
    -[MediaConversionRequestTracker dumpResourceURLCollection:toParentDirectory:directoryName:updatingDebugInformation:](
      self,
      "dumpResourceURLCollection:toParentDirectory:directoryName:updatingDebugInformation:",
      v21,
      v6,
      CFSTR("destinationResourceURLCollection"),
      v7);
    objc_release(v21);
  }
  objc_release(v11);
  objc_release(v15);
  objc_release(v7);
  objc_release(v6);
}