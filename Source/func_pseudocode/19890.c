-[lite_job_t notifyJobHeldPinRequired:logMessage:]
void __cdecl -[lite_job_t notifyJobHeldPinRequired:logMessage:](lite_job_t *self, SEL a2, bool a3, id a4)
{
  _BOOL4 v4; // w21
  id v6; // x19
  lite_printer_t *v7; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a3;
  v6 = objc_retain(a4);
  pthread_mutex_lock(&stru_1000C3AA0);
  -[lite_job_t setLocalJobState:](self, "setLocalJobState:", 4LL);
  self->release_wait = 1;
  v7 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
  -[lite_printer_t setCurrentJob:](v7, "setCurrentJob:", 0LL);
  objc_release(v7);
  -[lite_job_t postGlobalNotification:logMsg:](self, "postGlobalNotification:logMsg:", 2048LL, v6);
  if ( v4 )
    liteNotifyPINRequired(self);
  pthread_mutex_unlock(&stru_1000C3AA0);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}