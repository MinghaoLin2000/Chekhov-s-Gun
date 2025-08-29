_objc_msgSend$wait_sema
id objc_msgSend_wait_sema(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "wait_sema");
}