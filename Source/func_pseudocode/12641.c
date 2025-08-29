+[NSError tsu_fileWritePOSIXErrorWithNumber:userInfo:]
id __cdecl +[NSError tsu_fileWritePOSIXErrorWithNumber:userInfo:](id a1, SEL a2, int a3, id a4)
{
  id v6; // x22
  id v7; // x21
  void *v8; // x20
  void *v9; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_alloc((Class)&OBJC_CLASS___NSError);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsu_userInfoWithErrorType:userInfo:", 2LL, v6));
  objc_release(v6);
  v9 = objc_msgSend(v7, "initWithDomain:code:userInfo:", NSPOSIXErrorDomain, a3, v8);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}