-[lite_printer_t driverformat]
NSString *__cdecl -[lite_printer_t driverformat](lite_printer_t *self, SEL a2)
{
  return (NSString *)-[PKPrinterDescription driverformat](self->_printerDescription, "driverformat");
}