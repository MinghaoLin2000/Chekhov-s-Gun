+[NSError tsp_readPOSIXErrorWithNumber:userInfo:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[NSError tsp_readPOSIXErrorWithNumber:userInfo:](id a1, SEL a2, int a3, id a4)
{
  __int64 v4; // x20
  void *v6; // x19
  void *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = *(_QWORD *)&a3;
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_userInfoWithUserInfo:additionalUserInfo:", a4, 0LL));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsu_fileReadPOSIXErrorWithNumber:userInfo:", v4, v6));
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}