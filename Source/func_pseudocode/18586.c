j__mach_absolute_time
// attributes: thunk
uint64_t j__mach_absolute_time(void)
{
  return mach_absolute_time();
}