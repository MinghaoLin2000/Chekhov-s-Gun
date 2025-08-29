-[lite_printer_t setReasonsBits:]
void __cdecl -[lite_printer_t setReasonsBits:](lite_printer_t *self, SEL a2, unsigned int a3)
{
  if ( self->_reasons != a3 )
  {
    self->_reasons = a3;
    self->_reasons_changed = time(0LL);
  }
}