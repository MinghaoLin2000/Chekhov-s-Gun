-[lite_job_t closeDriver:]
int __cdecl -[lite_job_t closeDriver:](lite_job_t *self, SEL a2, lite_driver_s *a3)
{
  return liteCloseDriver(self, a3);
}