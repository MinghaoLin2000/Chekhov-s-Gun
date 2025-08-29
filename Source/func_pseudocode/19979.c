_PKDefaultPortForScheme
_UNKNOWN **__fastcall PKDefaultPortForScheme(void *a1)
{
  id v1; // x19
  void *v2; // x21
  void *v3; // x20
  _UNKNOWN **v4; // x21
  os_log_s *v5; // x21
  int v7; // [xsp+0h] [xbp-40h] BYREF
  id v8; // [xsp+4h] [xbp-3Ch]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "lowercaseString"));
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(&off_1000B47B0, "objectForKeyedSubscript:", v2));
  objc_release(v2);
  if ( v3 )
  {
    v4 = objc_retain(v3);
  }
  else
  {
    v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryNetwork[0]));
    if ( os_log_type_enabled(v5, OS_LOG_TYPE_ERROR) )
    {
      v7 = 138412290;
      v8 = v1;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v5,
        OS_LOG_TYPE_ERROR,
        "Unknown scheme %@ - defaulting to 631",
        (uint8_t *)&v7,
        0xCu);
    }
    objc_release(v5);
    v4 = &off_1000B4888;
  }
  objc_release(v3);
  objc_release(v1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}