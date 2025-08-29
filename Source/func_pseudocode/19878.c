-[job_spool_client_t PrintScaling]
NSString *__cdecl -[job_spool_client_t PrintScaling](job_spool_client_t *self, SEL a2)
{
  NSString *result; // x0
  NSString *v4; // x19
  void *v5; // x20
  void *v6; // x21

  if ( -[job_spool_client_t PrintQuality](self, "PrintQuality") == 5 )
    return 0LL;
  result = objc_retainAutoreleasedReturnValue(-[PKPrintSettings fileType](self->_printSettings, "fileType"));
  if ( result )
  {
    v4 = result;
    v5 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings fileType](self->_printSettings, "fileType"));
    v6 = objc_msgSend(v5, "caseInsensitiveCompare:", CFSTR("application/pdf"));
    objc_release(v5);
    objc_release(v4);
    if ( v6 )
      return 0LL;
    else
      return (NSString *)CFSTR("auto-fit");
  }
  return result;
}