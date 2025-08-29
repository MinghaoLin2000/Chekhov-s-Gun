-[lite_job_t addJobAndReturnLogMessageOnFailure]
id __cdecl -[lite_job_t addJobAndReturnLogMessageOnFailure](lite_job_t *self, SEL a2)
{
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  NSString *v6; // x19
  void *v7; // x0
  void *v8; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  pthread_mutex_lock(&stru_1000C3AA0);
  v3 = -[lite_job_t setReadyTime:](self, "setReadyTime:", time(0LL));
  sub_100019FC4(v3);
  if ( MaxJobs >= 1 && (v4 = objc_msgSend((id)qword_1000C3EE8, "count"), (unsigned __int64)v4 >= MaxJobs) )
  {
    v7 = objc_msgSend((id)qword_1000C3EE8, "count");
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithFormat:](
             &OBJC_CLASS___NSString,
             "stringWithFormat:",
             CFSTR("Unable to create job: Too many jobs (%d >= %d)."),
             v7,
             (unsigned int)MaxJobs));
    pthread_mutex_unlock(&stru_1000C3AA0);
  }
  else if ( MaxActiveJobs >= 1
         && (v5 = objc_msgSend((id)qword_1000C3EF0, "count"), (unsigned __int64)v5 >= MaxActiveJobs) )
  {
    v8 = objc_msgSend((id)qword_1000C3EF0, "count");
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithFormat:](
             &OBJC_CLASS___NSString,
             "stringWithFormat:",
             CFSTR("Unable to create job: Too many active jobs (%d >= %d)."),
             v8,
             (unsigned int)MaxActiveJobs));
    pthread_mutex_unlock(&stru_1000C3AA0);
  }
  else
  {
    objc_msgSend((id)qword_1000C3EE8, "addObject:", self);
    objc_msgSend((id)qword_1000C3EF0, "addObject:", self);
    pthread_mutex_unlock(&stru_1000C3AA0);
    -[lite_job_t postGlobalNotification:logMsg:](self, "postGlobalNotification:logMsg:", 4096LL, CFSTR("Job created."));
    v6 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}