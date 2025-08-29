_clock_gettime
int __cdecl clock_gettime(clockid_t __clock_id, timespec *__tp)
{
  return _clock_gettime(__clock_id, __tp);
}