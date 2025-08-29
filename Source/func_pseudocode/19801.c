-[lite_printer_t deviceID]
NSString *__cdecl -[lite_printer_t deviceID](lite_printer_t *self, SEL a2)
{
  return (NSString *)-[PKPrinterDescription deviceID](self->_printerDescription, "deviceID");
}