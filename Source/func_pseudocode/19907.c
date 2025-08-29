-[lite_job_t _setupCancelSource]
void __cdecl -[lite_job_t _setupCancelSource](lite_job_t *self, SEL a2)
{
  lite_job_t *v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retain(self);
  objc_sync_enter(v2);
  -[lite_job_t _setupCancelSource0](v2, "_setupCancelSource0");
  objc_sync_exit(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}