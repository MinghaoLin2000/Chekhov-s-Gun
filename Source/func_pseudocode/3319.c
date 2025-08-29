_notify_register_dispatch
uint32_t __cdecl notify_register_dispatch(
        const char *name,
        int *out_token,
        dispatch_queue_t queue,
        notify_handler_t handler)
{
  return _notify_register_dispatch(name, out_token, queue, handler);
}