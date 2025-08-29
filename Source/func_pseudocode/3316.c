_dispatch_queue_create
dispatch_queue_t __cdecl dispatch_queue_create(const char *label, dispatch_queue_attr_t attr)
{
  return _dispatch_queue_create(label, attr);
}