-[DeviceSettingsTVShowsViewController effectiveStateForNode:withDimNodes:]
signed __int64 __cdecl -[DeviceSettingsTVShowsViewController effectiveStateForNode:withDimNodes:](
        DeviceSettingsTVShowsViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x20
  unsigned int v6; // w19
  void *v7; // x21

  v5 = objc_retain(a3);
  v6 = (unsigned int)objc_msgSend(a4, "containsObject:", v5);
  v7 = objc_msgSend(v5, "state");
  objc_release(v5);
  if ( v7 == (void *)1 )
    return 1LL;
  else
    return v6;
}