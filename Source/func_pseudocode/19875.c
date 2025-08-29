-[job_spool_client_t hasPrintQuality]
bool __cdecl -[job_spool_client_t hasPrintQuality](job_spool_client_t *self, SEL a2)
{
  id v2; // x0
  bool v3; // w19

  v2 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings printQuality](self->_printSettings, "printQuality"));
  v3 = v2 != 0LL;
  objc_release(v2);
  return v3;
}