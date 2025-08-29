-[lite_printer_t clearCredential]
void __cdecl -[lite_printer_t clearCredential](lite_printer_t *self, SEL a2)
{
  NSURLCredential *defaultCredentialForPrinter; // x8

  defaultCredentialForPrinter = self->_defaultCredentialForPrinter;
  self->_defaultCredentialForPrinter = 0LL;
  objc_release(defaultCredentialForPrinter);
}