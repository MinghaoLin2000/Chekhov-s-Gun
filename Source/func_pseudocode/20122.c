__ZNK17Printd_Parameters13_has_JobStateEv
bool __fastcall Printd_Parameters::_has_JobState(id *this)
{
  return objc_msgSend(*this, "_findAttribute0:valueTag:", CFSTR("job-state"), 35LL) != 0LL;
}