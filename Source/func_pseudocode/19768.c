-[lite_printer_t updatePrinterState:message:]
void __cdecl -[lite_printer_t updatePrinterState:message:](lite_printer_t *self, SEL a2, id a3, id a4)
{
  NSArray *v6; // x21
  id v7; // x19
  NSArray *printerStateReasons; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = (NSArray *)objc_retain(a3);
  objc_storeStrong((id *)&self->_printerStateMessage, a4);
  v7 = objc_retain(a4);
  printerStateReasons = self->_printerStateReasons;
  self->_printerStateReasons = v6;
  objc_release(printerStateReasons);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}