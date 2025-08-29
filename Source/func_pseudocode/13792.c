_dispatch_data_create
dispatch_data_t __cdecl dispatch_data_create(
        const void *buffer,
        size_t size,
        dispatch_queue_t queue,
        dispatch_block_t destructor)
{
  return _dispatch_data_create(buffer, size, queue, destructor);
}