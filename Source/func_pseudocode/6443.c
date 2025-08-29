-[ExportSessionVideoTranscodingTask exportSessionForInputAsset:presetName:]
id __cdecl -[ExportSessionVideoTranscodingTask exportSessionForInputAsset:presetName:](
        ExportSessionVideoTranscodingTask *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x23
  void *v8; // x21
  NSString *v9; // x22
  NSString *v10; // x24
  NSDictionary *v11; // x25
  NSError *v12; // x23
  uint8_t buf[4]; // [xsp+10h] [xbp-70h] BYREF
  NSString *v15; // [xsp+14h] [xbp-6Ch]
  __int16 v16; // [xsp+1Ch] [xbp-64h]
  id v17; // [xsp+1Eh] [xbp-62h]
  NSErrorUserInfoKey v18; // [xsp+28h] [xbp-58h] BYREF
  NSString *v19; // [xsp+30h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___AVAssetExportSession), "initWithAsset:presetName:", v6, v7);
  objc_release(v7);
  if ( !v8 )
  {
    -[VideoConversionTask setStatus:](self, "setStatus:", 2LL);
    v9 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
    v18 = NSLocalizedDescriptionKey;
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("Unable to create export session for job %@"),
              v9));
    v19 = v10;
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v19,
              &v18,
              1LL));
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              CFSTR("PAMediaConversionServiceErrorDomain"),
              3LL,
              v11));
    -[VideoConversionTask setError:](self, "setError:", v12);
    objc_release(v12);
    objc_release(v11);
    objc_release(v10);
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 138543619;
      v15 = v9;
      v16 = 2113;
      v17 = v6;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to create export session for job %{public}@, asset %{private}@",
        buf,
        0x16u);
    }
    -[VideoTranscodingTask callCompletionHandler](self, "callCompletionHandler");
    objc_release(v9);
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}