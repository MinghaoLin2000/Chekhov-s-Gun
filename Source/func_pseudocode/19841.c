-[job_spool_client_t AppleThumbnailPosition]
NSString *__cdecl -[job_spool_client_t AppleThumbnailPosition](job_spool_client_t *self, SEL a2)
{
  return (NSString *)-[PKPrintSettings thumbnailPosition](self->_printSettings, "thumbnailPosition");
}