-[lite_job_t set_processing]
void __cdecl -[lite_job_t set_processing](lite_job_t *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[lite_job_t setReadyTime:](self, "setReadyTime:", time(0LL));
  -[lite_job_t setLocalJobState:](self, "setLocalJobState:", 5LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[lite_job_t postGlobalNotification:logMsg:](self, "postGlobalNotification:logMsg:", 2048LL, CFSTR("Job printing."));
}