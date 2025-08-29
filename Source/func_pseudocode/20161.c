__ZNK17Printd_Parameters22_has_PrinterStringsURIEv
bool __fastcall Printd_Parameters::_has_PrinterStringsURI(id *this)
{
  return objc_msgSend(*this, "_findAttribute0:valueTag:", CFSTR("printer-strings-uri"), 69LL) != 0LL;
}