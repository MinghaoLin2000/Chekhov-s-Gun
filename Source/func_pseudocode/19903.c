-[lite_job_t _workAdded:]
void __cdecl -[lite_job_t _workAdded:](lite_job_t *self, SEL a2, unsigned __int64 a3)
{
  char *v4; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (char *)-[lite_job_t payloadSent](self, "payloadSent") + a3;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[lite_job_t setPayloadSent:](self, "setPayloadSent:", v4);
}