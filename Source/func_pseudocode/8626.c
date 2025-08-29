_MachAbsoluteTimeToTimeInterval
double __fastcall MachAbsoluteTimeToTimeInterval(__int64 a1)
{
  unsigned int v2; // w8

  v2 = dword_100011C34;
  if ( !dword_100011C34 )
  {
    mach_timebase_info((mach_timebase_info_t)&dword_100011C30);
    v2 = dword_100011C34;
  }
  return (double)((unsigned __int64)(unsigned int)dword_100011C30 * a1 / v2) / 1000000000.0;
}