-[lite_job_t setPrinter:]
void __cdecl -[lite_job_t setPrinter:](lite_job_t *self, SEL a2, id a3)
{
  objc_setProperty_atomic(self, a2, a3, 200LL);
}