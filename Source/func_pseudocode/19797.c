-[lite_printer_t preferred_landscape]
int __cdecl -[lite_printer_t preferred_landscape](lite_printer_t *self, SEL a2)
{
  return (unsigned int)-[PKPrinterDescription preferred_landscape](self->_printerDescription, "preferred_landscape");
}