+[NSError tsp_unknownWriteErrorWithUserInfo:]
id __cdecl +[NSError tsp_unknownWriteErrorWithUserInfo:](id a1, SEL a2, id a3)
{
  void *v4; // x19
  void *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_userInfoWithUserInfo:additionalUserInfo:", a3, 0LL));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsu_fileWriteUnknownErrorWithUserInfo:", v4));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}