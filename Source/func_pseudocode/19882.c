-[job_spool_client_t Sides]
NSString *__cdecl -[job_spool_client_t Sides](job_spool_client_t *self, SEL a2)
{
  void *v3; // x19
  PKPrinterDescription *v4; // x20
  void *v5; // x21
  unsigned int v6; // w22
  id v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings duplex](self->_printSettings, "duplex"));
  if ( v3
    && (v4 = objc_retainAutoreleasedReturnValue(-[lite_printer_t printerDescription](self->_printer, "printerDescription")),
        v5 = objc_retainAutoreleasedReturnValue(-[PKPrinterDescription sides](v4, "sides")),
        v6 = (unsigned int)objc_msgSend(v5, "containsObject:", v3),
        objc_release(v5),
        objc_release(v4),
        v6) )
  {
    v7 = objc_retain(v3);
  }
  else
  {
    v7 = 0LL;
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v7);
}