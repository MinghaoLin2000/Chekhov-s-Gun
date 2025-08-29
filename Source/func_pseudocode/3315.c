_dispatch_queue_attr_make_with_qos_class
dispatch_queue_attr_t __cdecl dispatch_queue_attr_make_with_qos_class(
        dispatch_queue_attr_t attr,
        dispatch_qos_class_t qos_class,
        int relative_priority)
{
  return _dispatch_queue_attr_make_with_qos_class(attr, qos_class, relative_priority);
}