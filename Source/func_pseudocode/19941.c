-[lite_job_t printer]
lite_printer_t *__cdecl -[lite_job_t printer](lite_job_t *self, SEL a2)
{
  return (lite_printer_t *)objc_getProperty(self, a2, 200LL, 1);
}