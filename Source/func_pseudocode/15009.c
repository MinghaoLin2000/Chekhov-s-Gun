-[ATXHeuristicJSEnv _dateFromTimeIntervalOrDate:]
id __cdecl -[ATXHeuristicJSEnv _dateFromTimeIntervalOrDate:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  id v3; // x19
  __int64 v4; // x0
  NSDate *v5; // x0
  __int64 v6; // x0
  NSDate *v7; // x20
  NSAssertionHandler *v8; // x20
  NSString *v9; // x21
  objc_class *v10; // x0
  NSString *v11; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_opt_class(&OBJC_CLASS___NSNumber);
  if ( (objc_opt_isKindOfClass(v3, v4) & 1) != 0 )
  {
    objc_msgSend(v3, "doubleValue");
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSDate dateWithTimeIntervalSinceReferenceDate:](
             &OBJC_CLASS___NSDate,
             "dateWithTimeIntervalSinceReferenceDate:"));
LABEL_5:
    v7 = v5;
    goto LABEL_7;
  }
  v6 = objc_opt_class(&OBJC_CLASS___NSDate);
  if ( (objc_opt_isKindOfClass(v3, v6) & 1) != 0 )
  {
    v5 = (NSDate *)objc_retain(v3);
    goto LABEL_5;
  }
  v8 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithUTF8String:](
           &OBJC_CLASS___NSString,
           "stringWithUTF8String:",
           "-[ATXHeuristicJSEnv _dateFromTimeIntervalOrDate:]"));
  v10 = (objc_class *)objc_opt_class(v3);
  v11 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v10));
  -[NSAssertionHandler handleFailureInFunction:file:lineNumber:description:](
    v8,
    "handleFailureInFunction:file:lineNumber:description:",
    v9,
    CFSTR("ATXHeuristicJSEnv.m"),
    1216LL,
    CFSTR("Expected timestamp or date, got %@"),
    v11);
  objc_release(v11);
  objc_release(v9);
  objc_release(v8);
  v7 = 0LL;
LABEL_7:
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}