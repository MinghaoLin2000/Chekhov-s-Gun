__ZNK17Printd_Parameters24_has_OutputModeSupportedEv
bool __fastcall Printd_Parameters::_has_OutputModeSupported(id *this)
{
  return objc_msgSend(*this, "_findAttribute0:valueTag:", CFSTR("output-mode-supported"), 68LL) != 0LL;
}