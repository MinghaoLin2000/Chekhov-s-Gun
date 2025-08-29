-[lite_job_t debugDescription]
NSString *__cdecl -[lite_job_t debugDescription](lite_job_t *self, SEL a2)
{
  NSString *v3; // x19
  id v4; // x20
  NSString *v5; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[lite_job_t description](self, "description"));
  v4 = objc_retainAutoreleasedReturnValue(-[lite_job_t logInfo](self, "logInfo"));
  v5 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@ %@"), v3, v4));
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}