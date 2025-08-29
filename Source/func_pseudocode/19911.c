-[lite_job_t cancelThisJob]
void __cdecl -[lite_job_t cancelThisJob](lite_job_t *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  pthread_mutex_lock(&stru_1000C3AA0);
  -[lite_job_t cancelNoLock](self, "cancelNoLock");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  pthread_mutex_unlock(&stru_1000C3AA0);
}