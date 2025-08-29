-[TSUSafeSaveAssistant endSaveWithSuccess:toURL:addingAttributes:error:]
bool __cdecl -[TSUSafeSaveAssistant endSaveWithSuccess:toURL:addingAttributes:error:](
        TSUSafeSaveAssistant *self,
        SEL a2,
        bool a3,
        id a4,
        id a5,
        id *a6)
{
  _BOOL4 v8; // w24
  id v11; // x19
  id v12; // x21
  unsigned __int8 v13; // w22
  __int64 v14; // x23
  void *v15; // x24
  NSString *v16; // x24
  NSString *v17; // x25
  NSString *v18; // x22
  TSUTemporaryDirectory *temporaryDirectory; // x0

  v8 = a3;
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  if ( !self->_temporaryDirectory )
  {
    v14 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DEB28);
    v15 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100173458(v15, a2, v14);
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[TSUSafeSaveAssistant endSaveWithSuccess:toURL:addingAttributes:error:]"));
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUSafeSaveAssistant.m"));
    v18 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v16,
      v17,
      57LL,
      0LL,
      "%{public}@ should only be called once.",
      v18);
    objc_release(v18);
    objc_release(v17);
    objc_release(v16);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    goto LABEL_9;
  }
  if ( !v8 )
  {
LABEL_9:
    v13 = 0;
    goto LABEL_10;
  }
  v13 = (unsigned __int8)objc_msgSend(
                           (id)objc_opt_class(self),
                           "finishWritingToURL:byMovingOrCopyingItemAtURL:addingAttributes:error:",
                           v11,
                           self->_writeURL,
                           v12,
                           a6);
LABEL_10:
  temporaryDirectory = self->_temporaryDirectory;
  self->_temporaryDirectory = 0LL;
  objc_release(temporaryDirectory);
  objc_release(v12);
  objc_release(v11);
  return v13;
}