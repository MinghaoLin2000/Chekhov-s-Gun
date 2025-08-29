-[IPPSessionDelegate URLSession:didCreateTask:]
void __cdecl -[IPPSessionDelegate URLSession:didCreateTask:](IPPSessionDelegate *self, SEL a2, id a3, id a4)
{
  id v4; // x19
  os_log_s *v5; // x20
  int v6; // [xsp+0h] [xbp-30h] BYREF
  id v7; // [xsp+4h] [xbp-2Ch]

  v4 = objc_retain(a4);
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
  {
    v6 = 138543362;
    v7 = v4;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_DEFAULT,
      "IPPSession didCreateTask: %{public}@",
      (uint8_t *)&v6,
      0xCu);
  }
  objc_release(v5);
  objc_release(v4);
}