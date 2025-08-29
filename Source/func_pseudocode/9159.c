+[NSError tsp_saveDocumentErrorWithUserInfo:]
id __cdecl +[NSError tsp_saveDocumentErrorWithUserInfo:](id a1, SEL a2, id a3)
{
  void *v3; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_errorWithCode:userInfo:", 2LL, a3));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}