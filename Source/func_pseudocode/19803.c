-[lite_printer_t quotaManagementURL]
NSURL *__cdecl -[lite_printer_t quotaManagementURL](lite_printer_t *self, SEL a2)
{
  return (NSURL *)-[PKPrinterDescription quotaManagementURL](self->_printerDescription, "quotaManagementURL");
}