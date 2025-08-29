-[device_http_t clearCredential]
void __cdecl -[device_http_t clearCredential](device_http_t *self, SEL a2)
{
  NSURLCredential *defaultCredential; // x8

  defaultCredential = self->_defaultCredential;
  self->_defaultCredential = 0LL;
  objc_release(defaultCredential);
}