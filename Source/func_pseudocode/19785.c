-[lite_printer_t bonjourName]
PKPrinterBonjourEndpoint *__cdecl -[lite_printer_t bonjourName](lite_printer_t *self, SEL a2)
{
  return (PKPrinterBonjourEndpoint *)-[PKPrinterBrowseInfo bonjourName](self->_browseInfo, "bonjourName");
}