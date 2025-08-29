_dispatch_io_create
dispatch_io_t __cdecl dispatch_io_create(
        dispatch_io_type_t type,
        dispatch_fd_t fd,
        dispatch_queue_t queue,
        void *cleanup_handler)
{
  return _dispatch_io_create(type, fd, queue, cleanup_handler);
}