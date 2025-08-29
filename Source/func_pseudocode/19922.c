-[lite_job_t openDriver:format:orient:num_sheets:passthru:]
int __cdecl -[lite_job_t openDriver:format:orient:num_sheets:passthru:](
        lite_job_t *self,
        SEL a2,
        lite_driver_s *a3,
        id a4,
        int a5,
        int a6,
        int a7)
{
  return liteOpenDriver(self, a3, (NSString *)a4, (ipp_orient_e)a5, a6, a7);
}