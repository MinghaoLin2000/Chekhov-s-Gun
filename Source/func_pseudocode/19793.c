-[lite_printer_t max_pdf]
int __cdecl -[lite_printer_t max_pdf](lite_printer_t *self, SEL a2)
{
  return (unsigned int)-[PKPrinterDescription max_pdf](self->_printerDescription, "max_pdf");
}