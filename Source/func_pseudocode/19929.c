-[lite_job_t make_progress:]
void __cdecl -[lite_job_t make_progress:](lite_job_t *self, SEL a2, signed __int64 a3)
{
  lite_job_t *v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retain(self);
  objc_sync_enter(v3);
  (*((void (**)(void))v3->zmake_progress + 2))();
  objc_sync_exit(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}