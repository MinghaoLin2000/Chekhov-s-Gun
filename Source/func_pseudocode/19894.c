-[lite_job_t allowThisJobToProceedNoLock]
id __cdecl -[lite_job_t allowThisJobToProceedNoLock](lite_job_t *self, SEL a2)
{
  id result; // x0

  if ( (void *)-[lite_job_t localJobState](self, "localJobState") != (void *)4 )
    return CFSTR("Job is in the wrong state to start");
  -[lite_job_t setLocalJobState:](self, "setLocalJobState:", 3LL);
  -[lite_job_t setJobHoldUntil:](self, "setJobHoldUntil:", 0LL);
  -[lite_job_t postGlobalNotification:logMsg:](self, "postGlobalNotification:logMsg:", 2048LL, CFSTR("Job released."));
  -[lite_job_t postGlobalNotification:logMsg:](self, "postGlobalNotification:logMsg:", 0x8000LL, CFSTR("Job released."));
  result = (id)qword_1000C3F00;
  if ( qword_1000C3F00 )
  {
    dispatch_source_set_timer((dispatch_source_t)qword_1000C3F00, 0LL, 0xFFFFFFFFFFFFFFFFLL, 0LL);
    return 0LL;
  }
  return result;
}