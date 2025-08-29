-[ExportSessionVideoTranscodingTask outputFileTypeForExportSession:]
id __cdecl -[ExportSessionVideoTranscodingTask outputFileTypeForExportSession:](
        ExportSessionVideoTranscodingTask *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  NSMutableDictionary *v6; // x21
  void *v7; // x22
  void *v8; // x0
  void *v9; // x21
  void *v10; // x23
  NSDictionary *v11; // x23
  NSError *v12; // x22
  NSAssertionHandler *v14; // x22
  NSErrorUserInfoKey v15; // [xsp+8h] [xbp-48h] BYREF
  const __CFString *v16; // [xsp+10h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v14 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v14,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("VideoConversionService.m"),
      1149LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("exportSession"));
    objc_release(v14);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
  v7 = objc_retainAutoreleasedReturnValue(
         -[NSMutableDictionary objectForKey:](
           v6,
           "objectForKey:",
           CFSTR("PAMediaConversionServiceOptionOutputFileTypeKey")));
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "supportedFileTypes"));
  v9 = v8;
  if ( !v7 || ((unsigned int)objc_msgSend(v8, "containsObject:", v7) & 1) == 0 )
  {
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "firstObject"));
    objc_release(v7);
    v7 = v10;
    if ( !v10 )
    {
      -[VideoConversionTask setStatus:](self, "setStatus:", 2LL);
      v15 = NSLocalizedDescriptionKey;
      v16 = CFSTR("Unable to determine export output file type");
      v11 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v16,
                &v15,
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
      -[VideoTranscodingTask callCompletionHandler](self, "callCompletionHandler");
      v7 = 0LL;
    }
  }
  objc_release(v9);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}