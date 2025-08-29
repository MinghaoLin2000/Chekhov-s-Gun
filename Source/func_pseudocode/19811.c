-[lite_printer_t _updateDescPrinterDescription:]
void __cdecl -[lite_printer_t _updateDescPrinterDescription:](lite_printer_t *self, SEL a2, id a3)
{
  id v5; // x19
  NSDate *v6; // x0
  NSDate *printerDescriptionTime; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( v5 )
    objc_storeStrong((id *)&self->_printerDescription, a3);
  v6 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
  printerDescriptionTime = self->_printerDescriptionTime;
  self->_printerDescriptionTime = v6;
  objc_release(printerDescriptionTime);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}