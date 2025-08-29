__ZNK17Printd_Parameters21_has_DestinationJobIDEv
bool __fastcall Printd_Parameters::_has_DestinationJobID(id *this)
{
  return objc_msgSend(*this, "_findAttribute0:valueTag:", CFSTR("job-id"), 33LL) != 0LL;
}