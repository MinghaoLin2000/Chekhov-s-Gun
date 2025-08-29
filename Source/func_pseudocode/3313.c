_dispatch_group_wait
intptr_t __cdecl dispatch_group_wait(dispatch_group_t group, dispatch_time_t timeout)
{
  return _dispatch_group_wait(group, timeout);
}