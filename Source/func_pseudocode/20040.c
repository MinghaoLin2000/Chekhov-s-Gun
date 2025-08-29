__PKLogCategory
id __fastcall _PKLogCategory(void *a1)
{
  id v1; // x19
  void *v2; // x20
  id v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = objc_retain(a1);
  if ( qword_1000C3F18 != -1 )
    dispatch_once(&qword_1000C3F18, &stru_10009E328);
  v2 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)qword_1000C3F10, "objectForKeyedSubscript:", v1));
  if ( !v2 )
  {
    v2 = &_os_log_default;
    v3 = objc_retain(&_os_log_default);
  }
  objc_release(v1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}