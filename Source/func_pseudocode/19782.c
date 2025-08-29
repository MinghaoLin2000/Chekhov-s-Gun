-[lite_printer_t device_uri]
NSURL *__cdecl -[lite_printer_t device_uri](lite_printer_t *self, SEL a2)
{
  return (NSURL *)-[PKPrinterBrowseInfo printerURL](self->_browseInfo, "printerURL");
}