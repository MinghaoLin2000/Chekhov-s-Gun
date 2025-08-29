-[lite_printer_t currentJob]
lite_job_t *__cdecl -[lite_printer_t currentJob](lite_printer_t *self, SEL a2)
{
  return (lite_job_t *)objc_getProperty(self, a2, 40LL, 1);
}