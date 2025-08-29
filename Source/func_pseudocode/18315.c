+[AUCrashHandlerService _deanonymizeUserHomePath:]
id __cdecl +[AUCrashHandlerService _deanonymizeUserHomePath:](id a1, SEL a2, id a3)
{
  id v3; // x19
  NSString *v4; // x21
  NSString *v5; // x22
  NSString *v6; // x20
  NSString *v7; // x21
  void *v8; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(NSHomeDirectory());
  v5 = objc_retainAutoreleasedReturnValue(NSUserName());
  v6 = objc_retainAutoreleasedReturnValue(
         -[NSString stringByReplacingOccurrencesOfString:withString:](
           v4,
           "stringByReplacingOccurrencesOfString:withString:",
           v5,
           CFSTR("USER")));
  objc_release(v5);
  objc_release(v4);
  v7 = objc_retainAutoreleasedReturnValue(NSHomeDirectory());
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "stringByReplacingOccurrencesOfString:withString:", v6, v7));
  objc_release(v7);
  objc_release(v6);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}