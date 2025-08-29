-[job_spool_client_t hasFinishingsCol]
bool __cdecl -[job_spool_client_t hasFinishingsCol](job_spool_client_t *self, SEL a2)
{
  id v2; // x0
  bool v3; // w19

  v2 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings finishingTemplate](self->_printSettings, "finishingTemplate"));
  v3 = v2 != 0LL;
  objc_release(v2);
  return v3;
}