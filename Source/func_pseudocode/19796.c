-[lite_printer_t max_jpeg_y]
int __cdecl -[lite_printer_t max_jpeg_y](lite_printer_t *self, SEL a2)
{
  return (unsigned int)-[PKPrinterDescription max_jpeg_y](self->_printerDescription, "max_jpeg_y");
}