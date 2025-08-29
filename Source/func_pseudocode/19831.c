-[job_spool_client_t startStreamingCompletionHandler:]
void __cdecl -[job_spool_client_t startStreamingCompletionHandler:](job_spool_client_t *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, id); // x19
  os_log_s *v5; // x21
  id v6; // x20
  uint8_t v7[16]; // [xsp+0h] [xbp-30h] BYREF

  v4 = (void (__fastcall **)(id, id))objc_retain(a3);
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v7 = 0;
    _os_log_impl((void *)&_mh_execute_header, v5, OS_LOG_TYPE_DEFAULT, "startStreamingCompletionHandler", v7, 2u);
  }
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[job_spool_client_t fileHandleForStreaming](self, "fileHandleForStreaming"));
  v4[2](v4, v6);
  objc_release(v6);
  objc_release(v4);
}