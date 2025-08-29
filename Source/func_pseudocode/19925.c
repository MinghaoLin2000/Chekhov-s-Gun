-[lite_job_t printer_driverformat]
NSString *__cdecl -[lite_job_t printer_driverformat](lite_job_t *self, SEL a2)
{
  lite_printer_t *v2; // x19
  NSString *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
  v3 = objc_retainAutoreleasedReturnValue(-[lite_printer_t driverformat](v2, "driverformat"));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}