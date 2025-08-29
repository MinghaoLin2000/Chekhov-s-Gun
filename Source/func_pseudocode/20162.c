__ZNK17Printd_Parameters22_get_PrinterStringsURIEv
NSURL *__fastcall Printd_Parameters::_get_PrinterStringsURI(Printd_Parameters *this)
{
  NSURL *v1; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v1 = objc_retainAutoreleasedReturnValue(getNamedAttr<NSURL * {__strong}>(*(_QWORD *)this, (int)CFSTR("printer-strings-uri")));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v1);
}