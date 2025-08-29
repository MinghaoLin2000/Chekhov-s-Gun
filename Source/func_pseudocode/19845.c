-[job_spool_client_t Copies]
int __cdecl -[job_spool_client_t Copies](job_spool_client_t *self, SEL a2)
{
  return (unsigned int)-[PKPrintSettings copies](self->_printSettings, "copies");
}