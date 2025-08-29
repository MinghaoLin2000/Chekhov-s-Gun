-[PrintdRPCService _commonInvalidation]
void __cdecl -[PrintdRPCService _commonInvalidation](PrintdRPCService *self, SEL a2)
{
  job_spool_client_t *spoolClient; // x0
  BrowseService *browser; // x0
  BrowseService *v5; // x0
  os_log_s *v6; // x20
  IPPSession *standardSession; // x8
  IPPSession *v8; // x0
  os_log_s *v9; // x20
  IPPSession *streamingSession; // x8
  IPPSession *v11; // x0
  int v12; // [xsp+0h] [xbp-40h] BYREF
  IPPSession *v13; // [xsp+4h] [xbp-3Ch]

  spoolClient = self->_spoolClient;
  if ( spoolClient )
    -[job_spool_client_t invalidate](spoolClient, "invalidate");
  browser = self->_browser;
  if ( browser )
  {
    -[BrowseService stopBrowsing](browser, "stopBrowsing");
    v5 = self->_browser;
    self->_browser = 0LL;
    objc_release(v5);
  }
  if ( self->_standardSession )
  {
    v6 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v6, OS_LOG_TYPE_DEFAULT) )
    {
      standardSession = self->_standardSession;
      v12 = 138543362;
      v13 = standardSession;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v6,
        OS_LOG_TYPE_DEFAULT,
        "Releasing standard session %{public}@",
        (uint8_t *)&v12,
        0xCu);
    }
    objc_release(v6);
    v8 = self->_standardSession;
    self->_standardSession = 0LL;
    objc_release(v8);
  }
  if ( self->_streamingSession )
  {
    v9 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
    {
      streamingSession = self->_streamingSession;
      v12 = 138543362;
      v13 = streamingSession;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v9,
        OS_LOG_TYPE_DEFAULT,
        "Releasing streaming session %{public}@",
        (uint8_t *)&v12,
        0xCu);
    }
    objc_release(v9);
    v11 = self->_streamingSession;
    self->_streamingSession = 0LL;
    objc_release(v11);
  }
}