__ZNK17Printd_Parameters28_has_PrintColorModeSupportedEv
bool __fastcall Printd_Parameters::_has_PrintColorModeSupported(id *this)
{
  return objc_msgSend(*this, "_findAttribute0:valueTag:", CFSTR("print-color-mode-supported"), 68LL) != 0LL;
}