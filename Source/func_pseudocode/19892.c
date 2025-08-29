-[lite_job_t updateSheetsAndPostNotification:logMsg:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[lite_job_t updateSheetsAndPostNotification:logMsg:](lite_job_t *self, SEL a2, int a3, id a4)
{
  __int64 v4; // x21
  id v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = *(_QWORD *)&a3;
  v6 = objc_retain(a4);
  -[lite_job_t setSheetsCompleted:](self, "setSheetsCompleted:", v4);
  self->_mediaProgress = 0;
  -[lite_job_t postGlobalNotification:logMsg:](self, "postGlobalNotification:logMsg:", 0x10000LL, v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}