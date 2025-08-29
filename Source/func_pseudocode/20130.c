__ZNK17Printd_Parameters28_has_JobMediaSheetsCompletedEv
bool __fastcall Printd_Parameters::_has_JobMediaSheetsCompleted(id *this)
{
  return objc_msgSend(*this, "_findAttribute0:valueTag:", CFSTR("job-media-sheets-completed"), 33LL) != 0LL;
}