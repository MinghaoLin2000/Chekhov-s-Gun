+[NSError tsu_fileWriteUnknownErrorWithUserInfo:]
id __cdecl +[NSError tsu_fileWriteUnknownErrorWithUserInfo:](id a1, SEL a2, id a3)
{
  void *v3; // x21
  NSError *v4; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsu_userInfoWithErrorType:userInfo:", 2LL, a3));
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSError errorWithDomain:code:userInfo:](
           &OBJC_CLASS___NSError,
           "errorWithDomain:code:userInfo:",
           NSCocoaErrorDomain,
           512LL,
           v3));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}