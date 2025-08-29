__Z47usernameFromPreviouslyAuthedPrinterOrJustMobileP14lite_printer_t
__CFString *__fastcall usernameFromPreviouslyAuthedPrinterOrJustMobile(lite_printer_t *a1)
{
  lite_printer_t *v1; // x19
  NSURLCredential *v2; // x20
  NSURLCredential *v3; // x20
  __CFString *v4; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(-[lite_printer_t defaultCredentialForPrinter](v1, "defaultCredentialForPrinter"));
  objc_release(v2);
  if ( v2 )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[lite_printer_t defaultCredentialForPrinter](v1, "defaultCredentialForPrinter"));
    v4 = objc_retainAutoreleasedReturnValue(-[NSURLCredential user](v3, "user"));
    objc_release(v3);
  }
  else
  {
    v4 = CFSTR("mobile");
  }
  objc_release(v1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}