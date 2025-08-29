-[lite_printer_t .cxx_destruct]
void __cdecl -[lite_printer_t .cxx_destruct](lite_printer_t *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_printerDescription, 0LL);
  objc_storeStrong((id *)&self->_printerStateReasons, 0LL);
  objc_storeStrong((id *)&self->_printerStateMessage, 0LL);
  objc_storeStrong((id *)&self->_defaultCredentialForPrinter, 0LL);
  objc_storeStrong((id *)&self->_currentJob, 0LL);
  objc_storeStrong((id *)&self->_printerOperationQueue, 0LL);
  objc_storeStrong((id *)&self->_printerDescriptionTime, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_browseInfo, 0LL);
}