-[lite_printer_t documentPasswordSupported]
int __cdecl -[lite_printer_t documentPasswordSupported](lite_printer_t *self, SEL a2)
{
  return (unsigned int)-[PKPrinterDescription documentPasswordSupported](
                         self->_printerDescription,
                         "documentPasswordSupported");
}