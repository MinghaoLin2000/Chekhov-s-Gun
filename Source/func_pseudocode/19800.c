-[lite_printer_t dids]
NSDictionary *__cdecl -[lite_printer_t dids](lite_printer_t *self, SEL a2)
{
  return (NSDictionary *)-[PKPrinterDescription dids](self->_printerDescription, "dids");
}