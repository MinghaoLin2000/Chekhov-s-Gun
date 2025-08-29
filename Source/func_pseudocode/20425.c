-[PrintdRPCService finishRequestWithCancel:reply:]
void __cdecl -[PrintdRPCService finishRequestWithCancel:reply:](PrintdRPCService *self, SEL a2, bool a3, id a4)
{
  void (__fastcall **v6)(id, _QWORD); // x19
  os_log_s *v7; // x20
  job_spool_client_t *spoolClient; // x0
  job_spool_client_t *v9; // x20
  job_spool_client_t *v10; // x0
  id v11; // x22
  uint8_t v12[16]; // [xsp+0h] [xbp-30h] BYREF

  v6 = (void (__fastcall **)(id, _QWORD))objc_retain(a4);
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v12 = 0;
    _os_log_impl((void *)&_mh_execute_header, v7, OS_LOG_TYPE_DEFAULT, "finishRequestWithCancel", v12, 2u);
  }
  objc_release(v7);
  spoolClient = self->_spoolClient;
  if ( spoolClient )
  {
    v9 = objc_retain(spoolClient);
    v10 = self->_spoolClient;
    self->_spoolClient = 0LL;
    objc_release(v10);
    if ( a3 )
    {
      -[job_spool_client_t invalidate](v9, "invalidate");
      v6[2](v6, 0LL);
    }
    else
    {
      v11 = objc_retainAutoreleasedReturnValue(-[PrintdRPCService ippNetworkingSessionForStreaming](self, "ippNetworkingSessionForStreaming"));
      -[job_spool_client_t submitRequestWithSession:completionHandler:](
        v9,
        "submitRequestWithSession:completionHandler:",
        v11,
        v6);
      objc_release(v11);
    }
    objc_release(v9);
  }
  else
  {
    v6[2](v6, 0LL);
  }
  objc_release(v6);
}