-[lite_job_t cancelNoLock]
void __cdecl -[lite_job_t cancelNoLock](lite_job_t *self, SEL a2)
{
  const __CFString *v3; // x3
  lite_job_t *v4; // x0
  __int64 v5; // x2
  dispatch_source_s *v6; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (void *)-[lite_job_t localJobState](self, "localJobState") == (void *)5 )
  {
    -[lite_job_t set_cancel_flag](self, "set_cancel_flag");
    v3 = CFSTR("Canceling job.");
    v4 = self;
    v5 = 2048LL;
  }
  else
  {
    objc_msgSend((id)qword_1000C3EF0, "removeObject:", self);
    objc_msgSend((id)qword_1000C3EF8, "removeObject:", self);
    -[lite_job_t setLocalJobState:](self, "setLocalJobState:", 7LL);
    -[lite_job_t setCompletedTime:](self, "setCompletedTime:", time(0LL));
    -[lite_job_t set_cancel_flag](self, "set_cancel_flag");
    v3 = CFSTR("Job canceled.");
    v4 = self;
    v5 = 0x2000LL;
  }
  -[lite_job_t postGlobalNotification:logMsg:](v4, "postGlobalNotification:logMsg:", v5, v3);
  v6 = (dispatch_source_s *)qword_1000C3F00;
  if ( qword_1000C3F00 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    dispatch_source_set_timer(v6, 0LL, 0xFFFFFFFFFFFFFFFFLL, 0LL);
  }
}