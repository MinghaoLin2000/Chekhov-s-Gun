_piston_close_sock
__int64 __fastcall piston_close_sock(_DWORD *a1)
{
  __int64 result; // x0

  result = (unsigned int)*a1;
  if ( (int)result >= 1 )
    result = close(result);
  *a1 = -1;
  return result;
}