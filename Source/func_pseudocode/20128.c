__ZNK17Printd_Parameters28_has_JobImpressionsCompletedEv
bool __fastcall Printd_Parameters::_has_JobImpressionsCompleted(id *this)
{
  return objc_msgSend(*this, "_findAttribute0:valueTag:", CFSTR("job-impressions-completed"), 33LL) != 0LL;
}