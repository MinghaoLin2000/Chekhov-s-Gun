-[job_spool_client_t hasFinishings]
bool __cdecl -[job_spool_client_t hasFinishings](job_spool_client_t *self, SEL a2)
{
  void *v3; // x19
  bool v4; // w20
  id v5; // x0

  v3 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings finishingTemplate](self->_printSettings, "finishingTemplate"));
  if ( v3 )
  {
    v4 = 0;
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings finishings](self->_printSettings, "finishings"));
    v4 = v5 != 0LL;
    objc_release(v5);
  }
  objc_release(v3);
  return v4;
}