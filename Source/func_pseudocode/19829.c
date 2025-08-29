-[job_spool_client_t getLogCategory]
id __cdecl -[job_spool_client_t getLogCategory](job_spool_client_t *self, SEL a2)
{
  return objc_retainAutoreleaseReturnValue(PKLogCategoryProgress[0]);
}