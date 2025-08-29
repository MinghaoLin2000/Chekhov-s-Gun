-[lite_printer_t txtRecord]
id __cdecl -[lite_printer_t txtRecord](lite_printer_t *self, SEL a2)
{
  return -[PKPrinterBrowseInfo txtRecord](self->_browseInfo, "txtRecord");
}