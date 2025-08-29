+[NSError tsu_errorWithWarning:]
id __cdecl +[NSError tsu_errorWithWarning:](id a1, SEL a2, id a3)
{
  void *v3; // x20
  NSDictionary *v4; // x21
  NSError *v5; // x19
  NSErrorUserInfoKey v7; // [xsp+8h] [xbp-38h] BYREF
  void *v8; // [xsp+10h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v7 = NSLocalizedDescriptionKey;
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "message"));
  v8 = v3;
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           &v8,
           &v7,
           1LL));
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSError errorWithDomain:code:userInfo:](
           &OBJC_CLASS___NSError,
           "errorWithDomain:code:userInfo:",
           CFSTR("com.apple.iWork.TSUWarningErrorDomain"),
           0LL,
           v4));
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}