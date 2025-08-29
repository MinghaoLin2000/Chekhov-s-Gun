+[ATEnforcementService appTrackingTransparencyBag]
id __cdecl +[ATEnforcementService appTrackingTransparencyBag](id a1, SEL a2)
{
  void *v2; // x19
  void *v3; // x20
  void *v4; // x21
  NSProcessInfo *v5; // x20
  NSString *v6; // x21
  NSString *v7; // x21
  NSString *v8; // x22
  void *v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( qword_100008E18 != -1 )
    dispatch_once(&qword_100008E18, &stru_100004280);
  v2 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___AMSProcessInfo),
         "initWithBundleIdentifier:",
         CFSTR("com.apple.AppTrackingTransparency.EnforcementService"));
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "executableName"));
  v4 = objc_msgSend(v3, "length");
  objc_release(v3);
  if ( !v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
    v6 = objc_retainAutoreleasedReturnValue(-[NSProcessInfo processName](v5, "processName"));
    objc_msgSend(v2, "setExecutableName:", v6);
    objc_release(v6);
    objc_release(v5);
  }
  v7 = objc_retainAutoreleasedReturnValue(+[ATEnforcementService bagSubProfile](&OBJC_CLASS___ATEnforcementService, "bagSubProfile"));
  v8 = objc_retainAutoreleasedReturnValue(+[ATEnforcementService bagSubProfileVersion](&OBJC_CLASS___ATEnforcementService, "bagSubProfileVersion"));
  v9 = objc_retainAutoreleasedReturnValue(
         +[AMSBag bagForProfile:profileVersion:processInfo:](
           &OBJC_CLASS___AMSBag,
           "bagForProfile:profileVersion:processInfo:",
           v7,
           v8,
           v2));
  objc_release(v8);
  objc_release(v7);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}