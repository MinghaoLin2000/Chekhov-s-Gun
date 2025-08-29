_objc_msgSend$proxy
id objc_msgSend_proxy(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "proxy");
}