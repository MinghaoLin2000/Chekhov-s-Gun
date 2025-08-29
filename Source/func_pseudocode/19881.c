-[job_spool_client_t hasSides]
bool __cdecl -[job_spool_client_t hasSides](job_spool_client_t *self, SEL a2)
{
  id v2; // x0
  bool v3; // w19

  v2 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings duplex](self->_printSettings, "duplex"));
  v3 = v2 != 0LL;
  objc_release(v2);
  return v3;
}