-[lite_job_t updateProgressAndPostNotification:logMsg:]
void __cdecl -[lite_job_t updateProgressAndPostNotification:logMsg:](lite_job_t *self, SEL a2, int a3, id a4)
{
  self->_mediaProgress = a3;
  -[lite_job_t postGlobalNotification:logMsg:](self, "postGlobalNotification:logMsg:", 0x10000LL, a4);
}