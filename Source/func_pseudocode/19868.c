-[job_spool_client_t PrintColorMode]
NSString *__cdecl -[job_spool_client_t PrintColorMode](job_spool_client_t *self, SEL a2)
{
  id v2; // x19
  id v4; // [xsp+0h] [xbp-20h] BYREF
  id v5; // [xsp+8h] [xbp-18h]
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = 0LL;
  v5 = 0LL;
  -[job_spool_client_t figureOutputOrPrintColorMode:](self, "figureOutputOrPrintColorMode:", &v4);
  v2 = objc_retain(v5);
  objc_release(v2);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v2);
}