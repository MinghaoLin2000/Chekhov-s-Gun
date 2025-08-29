-[lite_printer_t print_scaling_supported]
int __cdecl -[lite_printer_t print_scaling_supported](lite_printer_t *self, SEL a2)
{
  return (unsigned int)-[PKPrinterDescription print_scaling_supported](
                         self->_printerDescription,
                         "print_scaling_supported");
}