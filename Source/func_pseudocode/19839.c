-[job_spool_client_t AppleImagePDFAnnotations]
bool __cdecl -[job_spool_client_t AppleImagePDFAnnotations](job_spool_client_t *self, SEL a2)
{
  return (unsigned __int8)-[PKPrintSettings annotationsImaged](self->_printSettings, "annotationsImaged");
}