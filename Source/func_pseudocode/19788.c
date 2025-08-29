-[lite_printer_t pin_required]
bool __cdecl -[lite_printer_t pin_required](lite_printer_t *self, SEL a2)
{
  return (unsigned __int8)-[PKPrinterDescription pin_required](self->_printerDescription, "pin_required");
}