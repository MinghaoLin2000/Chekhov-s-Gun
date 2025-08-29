-[IPPSessionDelegate URLSession:didBecomeInvalidWithError:]
void __cdecl -[IPPSessionDelegate URLSession:didBecomeInvalidWithError:](
        IPPSessionDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x19
  os_log_s *v5; // x20
  void *v6; // x21
  int v7; // [xsp+0h] [xbp-40h] BYREF
  id v8; // [xsp+4h] [xbp-3Ch]
  __int16 v9; // [xsp+Ch] [xbp-34h]
  void *v10; // [xsp+Eh] [xbp-32h]

  v4 = objc_retain(a4);
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_INFO) )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "userInfo"));
    v7 = 138543618;
    v8 = v4;
    v9 = 2114;
    v10 = v6;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_INFO,
      "IPPSession invalidated: %{public}@ - %{public}@",
      (uint8_t *)&v7,
      0x16u);
    objc_release(v6);
  }
  objc_release(v5);
  objc_release(v4);
}