-[job_spool_client_t PresetName]
NSString *__cdecl -[job_spool_client_t PresetName](job_spool_client_t *self, SEL a2)
{
  return (NSString *)-[PKPrintSettings jobPresetName](self->_printSettings, "jobPresetName");
}