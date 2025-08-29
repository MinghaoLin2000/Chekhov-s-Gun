-[VideoTranscodingTask transitionToRunningStateAndConditionallyRunBlock:]
void __cdecl -[VideoTranscodingTask transitionToRunningStateAndConditionallyRunBlock:](
        VideoTranscodingTask *self,
        SEL a2,
        id a3)
{
  void (__fastcall **v4)(_QWORD); // x19
  VideoTranscodingTask *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (void (__fastcall **)(_QWORD))objc_retain(a3);
  v5 = objc_retain(self);
  objc_sync_enter(v5);
  if ( (void *)-[VideoConversionTask status](v5, "status") != (void *)4 )
  {
    -[VideoConversionTask setStatus:](v5, "setStatus:", 6LL);
    v4[2](v4);
  }
  objc_sync_exit(v5);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}