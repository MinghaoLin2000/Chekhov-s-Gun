_urfErrorString
__int64 __fastcall urfErrorString(__int64 result)
{
  if ( result )
    return *(_QWORD *)(result + 112);
  return result;
}