_urfNew
_QWORD *__fastcall urfNew(__int64 a1, __int64 a2)
{
  _QWORD *result; // x0

  result = malloc_type_calloc(1uLL, 0x90uLL, 0x10D00403A2F05C1uLL);
  if ( result )
  {
    *result = a1;
    result[1] = a2;
  }
  return result;
}