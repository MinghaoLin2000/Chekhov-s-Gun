-[lite_printer_t attrs_document_format_supported]
NSSet *__cdecl -[lite_printer_t attrs_document_format_supported](lite_printer_t *self, SEL a2)
{
  return (NSSet *)-[PKPrinterDescription attrs_document_format_supported](
                    self->_printerDescription,
                    "attrs_document_format_supported");
}