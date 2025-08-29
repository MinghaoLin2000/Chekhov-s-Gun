__Z21quantized_notify_post16PostableMessagesPKc
void __fastcall quantized_notify_post(unsigned int a1)
{
  os_log_s *v2; // x20
  _DWORD v3[2]; // [xsp+0h] [xbp-20h] BYREF

  if ( qword_1000C3F70 != -1 )
    dispatch_once(&qword_1000C3F70, &stru_10009F018);
  v2 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v2, OS_LOG_TYPE_DEFAULT) )
  {
    v3[0] = 67109120;
    v3[1] = a1;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v2,
      OS_LOG_TYPE_DEFAULT,
      "quantized_notify issue: 0x%x",
      (uint8_t *)v3,
      8u);
  }
  objc_release(v2);
  dispatch_source_merge_data((dispatch_source_t)qword_1000C3F68, a1);
}