-[lite_job_t printSettings]
PKPrintSettings *__cdecl -[lite_job_t printSettings](lite_job_t *self, SEL a2)
{
  return (PKPrintSettings *)objc_getProperty(self, a2, 192LL, 1);
}