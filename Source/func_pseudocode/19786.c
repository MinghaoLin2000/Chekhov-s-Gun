-[lite_printer_t location]
NSString *__cdecl -[lite_printer_t location](lite_printer_t *self, SEL a2)
{
  return (NSString *)-[PKPrinterBrowseInfo location](self->_browseInfo, "location");
}