-[lite_job_t addJobAndAllowToProceed]
id __cdecl -[lite_job_t addJobAndAllowToProceed](lite_job_t *self, SEL a2)
{
  id v3; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[lite_job_t addJobAndReturnLogMessageOnFailure](self, "addJobAndReturnLogMessageOnFailure"));
  if ( !v3 )
  {
    pthread_mutex_lock(&stru_1000C3AA0);
    v3 = objc_retainAutoreleasedReturnValue(-[lite_job_t allowThisJobToProceedNoLock](self, "allowThisJobToProceedNoLock"));
    pthread_mutex_unlock(&stru_1000C3AA0);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}