+[NSError tsp_errorWithCode:userInfo:]
id __cdecl +[NSError tsp_errorWithCode:userInfo:](id a1, SEL a2, signed __int64 a3, id a4)
{
  void *v4; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_errorWithCode:userInfo:isRecoverable:", a3, a4, 0LL));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}