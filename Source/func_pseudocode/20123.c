__ZNK17Printd_Parameters13_get_JobStateEv
__int64 __fastcall Printd_Parameters::_get_JobState(void **this)
{
  return getNamedAttr<PKJobState>(*this, CFSTR("job-state"));
}