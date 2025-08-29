_$s13DisplayMarkup0B8DelegateC5startyyys6UInt64VcF
__int64 __fastcall MarkupDelegate.start(_:)(__int64 (__fastcall *a1)(__int64))
{
  __int64 ProcessUniqueID; // x0

  ProcessUniqueID = SidecarGetProcessUniqueID();
  return a1(ProcessUniqueID);
}