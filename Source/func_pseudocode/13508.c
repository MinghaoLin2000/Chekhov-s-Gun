-[NSString tsu_regexForTitleParsingWithLocalizedCopyString:isFirstCopyFormatString:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[NSString tsu_regexForTitleParsingWithLocalizedCopyString:isFirstCopyFormatString:](
        NSString *self,
        SEL a2,
        id a3,
        bool a4)
{
  _BOOL8 v4; // x21
  id v6; // x19
  NSString *v7; // x20
  NSString *v8; // x21
  NSString *v9; // x22
  NSString *v10; // x23
  NSDictionary *v11; // x24
  id v12; // x22
  NSRegularExpression *v13; // x21
  unsigned int v14; // w23
  os_log_s *v15; // x22
  NSString *v16; // x23
  NSString *v17; // x24
  _QWORD v19[3]; // [xsp+10h] [xbp-B0h] BYREF
  _QWORD v20[3]; // [xsp+28h] [xbp-98h] BYREF
  uint8_t buf[4]; // [xsp+40h] [xbp-80h] BYREF
  unsigned int v22; // [xsp+44h] [xbp-7Ch]
  __int16 v23; // [xsp+48h] [xbp-78h]
  const char *v24; // [xsp+4Ah] [xbp-76h]
  __int16 v25; // [xsp+52h] [xbp-6Eh]
  const char *v26; // [xsp+54h] [xbp-6Ch]
  __int16 v27; // [xsp+5Ch] [xbp-64h]
  int v28; // [xsp+5Eh] [xbp-62h]
  __int16 v29; // [xsp+62h] [xbp-5Eh]
  NSString *v30; // [xsp+64h] [xbp-5Ch]
  __int16 v31; // [xsp+6Ch] [xbp-54h]
  _BOOL4 v32; // [xsp+6Eh] [xbp-52h]
  __int64 vars8; // [xsp+C8h] [xbp+8h]

  v4 = a4;
  v6 = objc_retain(a3);
  if ( (void *)-[NSString tsu_countInstancesOfString:options:](
                 self,
                 "tsu_countInstancesOfString:options:",
                 CFSTR("%1$@"),
                 0LL) == (void *)1
    && (void *)-[NSString tsu_countInstancesOfString:options:](
                 self,
                 "tsu_countInstancesOfString:options:",
                 CFSTR("%2$@"),
                 0LL) == (void *)1
    && (v4
     || (void *)-[NSString tsu_countInstancesOfString:options:](
                  self,
                  "tsu_countInstancesOfString:options:",
                  CFSTR("%3$@"),
                  0LL) == (void *)1) )
  {
    v7 = objc_retainAutoreleasedReturnValue(
           +[NSRegularExpression escapedPatternForString:](
             &OBJC_CLASS___NSRegularExpression,
             "escapedPatternForString:",
             self));
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSRegularExpression escapedPatternForString:](
             &OBJC_CLASS___NSRegularExpression,
             "escapedPatternForString:",
             CFSTR("%1$@")));
    v19[0] = v8;
    v20[0] = CFSTR("(.*)");
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSRegularExpression escapedPatternForString:](
             &OBJC_CLASS___NSRegularExpression,
             "escapedPatternForString:",
             CFSTR("%2$@")));
    v19[1] = v9;
    v20[1] = v6;
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSRegularExpression escapedPatternForString:](
              &OBJC_CLASS___NSRegularExpression,
              "escapedPatternForString:",
              CFSTR("%3$@")));
    v19[2] = v10;
    v20[2] = CFSTR("(\\d+)");
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v20,
              v19,
              3LL));
    objc_release(v10);
    objc_release(v9);
    objc_release(v8);
    v12 = objc_retainAutoreleasedReturnValue(-[NSString tsu_stringByApplyingSubstitutions:](v7, "tsu_stringByApplyingSubstitutions:", v11));
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSRegularExpression regularExpressionWithPattern:options:error:](
              &OBJC_CLASS___NSRegularExpression,
              "regularExpressionWithPattern:options:error:",
              v12,
              0LL,
              0LL));
    objc_release(v12);
    objc_release(v11);
    objc_release(v7);
  }
  else
  {
    v14 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DF4C8);
    v15 = (os_log_s *)TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 67110402;
      v22 = v14;
      v23 = 2082;
      v24 = "-[NSString(TSUAdditions) tsu_regexForTitleParsingWithLocalizedCopyString:isFirstCopyFormatString:]";
      v25 = 2082;
      v26 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/utility/NSString_TSUAdditions.m";
      v27 = 1024;
      v28 = 868;
      v29 = 2114;
      v30 = self;
      v31 = 1024;
      v32 = v4;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v15,
        OS_LOG_TYPE_ERROR,
        "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Invalid format string: %{public}@, isFirstCopyFormatString: %d",
        buf,
        0x32u);
    }
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "-[NSString(TSUAdditions) tsu_regexForTitleParsingWithLocalizedCopyString:isFirstCopyFormatString:]"));
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/NSString_TSUAdditions.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v16,
      v17,
      868LL,
      0LL,
      "Invalid format string: %{public}@, isFirstCopyFormatString: %d",
      self,
      v4);
    objc_release(v17);
    objc_release(v16);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v13 = 0LL;
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}