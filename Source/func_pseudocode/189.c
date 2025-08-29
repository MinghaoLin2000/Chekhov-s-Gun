_dispatch_group_notify
void __cdecl dispatch_group_notify(dispatch_group_t group, dispatch_queue_t queue, dispatch_block_t block)
{
  _dispatch_group_notify(group, queue, block);
}