-[lite_job_t _isCanceled:]
bool __cdecl -[lite_job_t _isCanceled:](lite_job_t *self, SEL a2, id a3)
{
  intptr_t v4; // x19
  os_log_s *v5; // x20
  unsigned int v6; // w22
  unsigned int v7; // w0
  _DWORD v9[2]; // [xsp+0h] [xbp-40h] BYREF
  __int16 v10; // [xsp+8h] [xbp-38h]
  unsigned int v11; // [xsp+Ah] [xbp-36h]

  v4 = dispatch_source_testcancel((dispatch_source_t)a3);
  if ( v4 )
  {
    v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
    {
      v6 = -[lite_job_t printd_job_id](self, "printd_job_id");
      if ( self )
        v7 = -[lite_job_t destination_job_id](self, "destination_job_id");
      else
        v7 = -1;
      v9[0] = 67109376;
      v9[1] = v6;
      v10 = 1024;
      v11 = v7;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v5,
        OS_LOG_TYPE_DEFAULT,
        "[Job %d][%d] job shows as canceled",
        (uint8_t *)v9,
        0xEu);
    }
    objc_release(v5);
  }
  return v4 != 0;
}