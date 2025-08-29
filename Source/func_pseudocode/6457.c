-[SinglePassVideoTranscodingTask cancelTranscode]
void __cdecl -[SinglePassVideoTranscodingTask cancelTranscode](SinglePassVideoTranscodingTask *self, SEL a2)
{
  PFSinglePassVideoExportItem *v4; // x21
  NSString *v5; // x20
  PFSinglePassVideoExportItem *v6; // x21
  void *v7; // x22
  PFSinglePassVideoExportItem *v8; // x19
  void *v9; // x20
  NSAssertionHandler *v10; // x21
  int v11; // [xsp+0h] [xbp-40h] BYREF
  NSString *v12; // [xsp+4h] [xbp-3Ch]
  __int16 v13; // [xsp+Ch] [xbp-34h]
  void *v14; // [xsp+Eh] [xbp-32h]

  v4 = objc_retainAutoreleasedReturnValue(-[SinglePassVideoTranscodingTask singlePassExportItem](self, "singlePassExportItem"));
  objc_release(v4);
  if ( !v4 )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v10,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("VideoConversionService.m"),
      1270LL,
      CFSTR("Unexpected missing single pass export session with job in running state"));
    objc_release(v10);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
    v6 = objc_retainAutoreleasedReturnValue(-[SinglePassVideoTranscodingTask singlePassExportItem](self, "singlePassExportItem"));
    v7 = objc_retainAutoreleasedReturnValue(-[PFSinglePassVideoExportItem identifier](v6, "identifier"));
    v11 = 138543618;
    v12 = v5;
    v13 = 2114;
    v14 = v7;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "Cancelling single pass conversion task %{public}@ (export item %{public}@)",
      (uint8_t *)&v11,
      0x16u);
    objc_release(v7);
    objc_release(v6);
    objc_release(v5);
  }
  v8 = objc_retainAutoreleasedReturnValue(-[SinglePassVideoTranscodingTask singlePassExportItem](self, "singlePassExportItem"));
  v9 = objc_retainAutoreleasedReturnValue(-[PFSinglePassVideoExportItem progress](v8, "progress"));
  objc_msgSend(v9, "cancel");
  objc_release(v9);
  objc_release(v8);
}