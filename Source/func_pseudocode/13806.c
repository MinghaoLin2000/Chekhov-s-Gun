_dispatch_queue_set_specific
void __cdecl dispatch_queue_set_specific(
        dispatch_queue_t queue,
        const void *key,
        void *context,
        dispatch_function_t destructor)
{
  _dispatch_queue_set_specific(queue, key, context, destructor);
}