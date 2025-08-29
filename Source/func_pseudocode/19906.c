-[lite_job_t _clearCancelFlag:]
void __cdecl -[lite_job_t _clearCancelFlag:](lite_job_t *self, SEL a2, id a3)
{
  OS_dispatch_source *v4; // x19
  os_log_s *v5; // x21
  unsigned int v6; // w22
  unsigned int v7; // w0
  OS_dispatch_source *cancel_source; // x8
  os_log_s *v9; // x21
  int v10; // [xsp+0h] [xbp-50h] BYREF
  unsigned int v11; // [xsp+4h] [xbp-4Ch]
  __int16 v12; // [xsp+8h] [xbp-48h]
  unsigned int v13; // [xsp+Ah] [xbp-46h]
  __int16 v14; // [xsp+Eh] [xbp-42h]
  OS_dispatch_source *v15; // [xsp+10h] [xbp-40h]
  __int16 v16; // [xsp+18h] [xbp-38h]
  OS_dispatch_source *v17; // [xsp+1Ah] [xbp-36h]

  v4 = (OS_dispatch_source *)objc_retain(a3);
  if ( self->_cancel_source == v4 )
  {
    v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
    {
      v10 = 67109634;
      v11 = -[lite_job_t printd_job_id](self, "printd_job_id");
      v12 = 1024;
      v13 = -[lite_job_t destination_job_id](self, "destination_job_id");
      v14 = 2112;
      v15 = v4;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v9,
        OS_LOG_TYPE_DEFAULT,
        "[Job %d][%d] clearing cancel flag %@",
        (uint8_t *)&v10,
        0x18u);
    }
    objc_release(v9);
    -[lite_job_t _setupCancelSource](self, "_setupCancelSource");
  }
  else
  {
    v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
    {
      v6 = -[lite_job_t printd_job_id](self, "printd_job_id");
      v7 = -[lite_job_t destination_job_id](self, "destination_job_id");
      cancel_source = self->_cancel_source;
      v10 = 67109890;
      v11 = v6;
      v12 = 1024;
      v13 = v7;
      v14 = 2112;
      v15 = cancel_source;
      v16 = 2112;
      v17 = v4;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v5,
        OS_LOG_TYPE_DEFAULT,
        "[Job %d][%d] _clearCancelFlag - already cleared (%@ currently, trying to clear %@)",
        (uint8_t *)&v10,
        0x22u);
    }
    objc_release(v5);
  }
  objc_release(v4);
}