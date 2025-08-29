_objc_msgSend$raise
id objc_msgSend_raise(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "raise");
}