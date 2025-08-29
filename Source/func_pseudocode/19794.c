-[lite_printer_t max_jpeg]
int __cdecl -[lite_printer_t max_jpeg](lite_printer_t *self, SEL a2)
{
  return (unsigned int)-[PKPrinterDescription max_jpeg](self->_printerDescription, "max_jpeg");
}