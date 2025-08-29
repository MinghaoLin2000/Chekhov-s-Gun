-[lite_printer_t makeAndModel]
id __cdecl -[lite_printer_t makeAndModel](lite_printer_t *self, SEL a2)
{
  return -[PKPrinterBrowseInfo makeAndModel](self->_browseInfo, "makeAndModel");
}