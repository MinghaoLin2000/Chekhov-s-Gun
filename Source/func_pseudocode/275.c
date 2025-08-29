_objc_msgSend$barrier
id objc_msgSend_barrier(void *a1, const char *a2, ...)
{
  return _objc_msgSend(a1, "barrier");
}