_dispatch_block_wait
intptr_t __cdecl dispatch_block_wait(dispatch_block_t block, dispatch_time_t timeout)
{
  return _dispatch_block_wait(block, timeout);
}