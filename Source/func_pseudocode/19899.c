-[lite_job_t getLogCategory]
id __cdecl -[lite_job_t getLogCategory](lite_job_t *self, SEL a2)
{
  return objc_retainAutoreleaseReturnValue(PKLogCategoryProgress[0]);
}