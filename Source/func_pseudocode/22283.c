_xpc_connection_create
xpc_connection_t __cdecl xpc_connection_create(const char *name, dispatch_queue_t targetq)
{
  return _xpc_connection_create(name, targetq);
}