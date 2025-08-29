-[lite_printer_t displayName]
NSString *__cdecl -[lite_printer_t displayName](lite_printer_t *self, SEL a2)
{
  void *v2; // x19
  void *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[PKPrinterBrowseInfo bonjourName](self->_browseInfo, "bonjourName"));
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "displayNameForPrintKitUI"));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v3);
}