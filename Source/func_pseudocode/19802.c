-[lite_printer_t mandatoryJobAttributes]
NSSet *__cdecl -[lite_printer_t mandatoryJobAttributes](lite_printer_t *self, SEL a2)
{
  return (NSSet *)-[PKPrinterDescription mandatoryJobAttributes](self->_printerDescription, "mandatoryJobAttributes");
}