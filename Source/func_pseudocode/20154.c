__ZNK17Printd_Parameters27_has_PrinterIsAcceptingJobsEv
bool __fastcall Printd_Parameters::_has_PrinterIsAcceptingJobs(id *this)
{
  return objc_msgSend(*this, "_findAttribute0:valueTag:", CFSTR("printer-is-accepting-jobs"), 34LL) != 0LL;
}