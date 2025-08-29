-[PrintdRPCService startStreamingRequestWithPrinter:printSettings:completionHandler:]
void __cdecl -[PrintdRPCService startStreamingRequestWithPrinter:printSettings:completionHandler:](
        PrintdRPCService *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  void (__fastcall **v10)(id, _QWORD); // x21
  job_spool_client_t *v11; // x0
  job_spool_client_t *spoolClient; // x8
  job_spool_client_t *v13; // x0
  os_log_s *v14; // x22
  void *v15; // x23
  int v16; // [xsp+0h] [xbp-50h] BYREF
  id v17; // [xsp+4h] [xbp-4Ch]
  __int16 v18; // [xsp+Ch] [xbp-44h]
  void *v19; // [xsp+Eh] [xbp-42h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = (void (__fastcall **)(id, _QWORD))objc_retain(a5);
  v11 = -[job_spool_client_t initWithClientID:printer:printSettings:](
          objc_alloc(&OBJC_CLASS___job_spool_client_t),
          "initWithClientID:printer:printSettings:",
          (unsigned int)self->_clientID,
          v8,
          v9);
  spoolClient = self->_spoolClient;
  self->_spoolClient = v11;
  objc_release(spoolClient);
  v13 = self->_spoolClient;
  if ( v13 )
  {
    -[job_spool_client_t startStreamingCompletionHandler:](v13, "startStreamingCompletionHandler:", v10);
  }
  else
  {
    v14 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v14, OS_LOG_TYPE_ERROR) )
    {
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "debugDescription"));
      v16 = 138543618;
      v17 = v8;
      v18 = 2114;
      v19 = v15;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v14,
        OS_LOG_TYPE_ERROR,
        "Could not create spool for printer %{public}@ and print settings %{public}@",
        (uint8_t *)&v16,
        0x16u);
      objc_release(v15);
    }
    objc_release(v14);
    v10[2](v10, 0LL);
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}