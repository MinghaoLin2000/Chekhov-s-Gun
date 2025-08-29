_dispatch_io_read
void __cdecl dispatch_io_read(
        dispatch_io_t channel,
        off_t offset,
        size_t length,
        dispatch_queue_t queue,
        dispatch_io_handler_t io_handler)
{
  _dispatch_io_read(channel, offset, length, queue, io_handler);
}