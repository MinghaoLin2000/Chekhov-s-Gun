-[lite_job_t is_canceled]
bool __cdecl -[lite_job_t is_canceled](lite_job_t *self, SEL a2)
{
  lite_job_t *v2; // x19
  char v3; // w20

  v2 = objc_retain(self);
  objc_sync_enter(v2);
  v3 = (*((__int64 (**)(void))v2->zis_canceled + 2))();
  objc_sync_exit(v2);
  objc_release(v2);
  return v3;
}