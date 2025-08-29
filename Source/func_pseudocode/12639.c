+[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:]
id __cdecl +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](id a1, SEL a2, int a3, id a4)
{
  __int64 v4; // x21
  void *v5; // x22
  NSError *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a3;
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsu_userInfoWithErrorType:userInfo:", 1LL, a4));
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSError errorWithDomain:code:userInfo:](
           &OBJC_CLASS___NSError,
           "errorWithDomain:code:userInfo:",
           NSPOSIXErrorDomain,
           v4,
           v5));
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}