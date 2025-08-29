_dispatch_io_write
void __cdecl dispatch_io_write(
        dispatch_io_t channel,
        off_t offset,
        dispatch_data_t data,
        dispatch_queue_t queue,
        dispatch_io_handler_t io_handler)
{
  _dispatch_io_write(channel, offset, data, queue, io_handler);
}