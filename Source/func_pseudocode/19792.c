-[lite_printer_t attrs_media_source_supported]
NSArray *__cdecl -[lite_printer_t attrs_media_source_supported](lite_printer_t *self, SEL a2)
{
  return (NSArray *)-[PKPrinterDescription attrs_media_source_supported](
                      self->_printerDescription,
                      "attrs_media_source_supported");
}