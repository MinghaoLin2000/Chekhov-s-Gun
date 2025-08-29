-[lite_printer_t printer_type_from_cups]
printer_type_from_cups_t __cdecl -[lite_printer_t printer_type_from_cups](lite_printer_t *self, SEL a2)
{
  return (printer_type_from_cups_t)-[PKPrinterDescription printer_type_from_cups_scalar](
                                     self->_printerDescription,
                                     "printer_type_from_cups_scalar");
}