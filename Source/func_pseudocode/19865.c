-[job_spool_client_t OutputBin]
NSString *__cdecl -[job_spool_client_t OutputBin](job_spool_client_t *self, SEL a2)
{
  return (NSString *)-[PKPrintSettings outputBin](self->_printSettings, "outputBin");
}