__Z14jobStateString10PKJobState
__int64 __fastcall jobStateString(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 3) >= 8 )
    sub_1000634C0();
  return *((_QWORD *)&off_10009C688 + a1 - 3);
}