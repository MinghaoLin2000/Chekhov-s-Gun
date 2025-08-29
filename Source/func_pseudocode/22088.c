_ConvertToEfiCompatibleChar16
void *__fastcall ConvertToEfiCompatibleChar16(const char *a1, _QWORD *a2, _WORD *a3)
{
  const char *v5; // x20
  int v6; // w22
  void *result; // x0
  _WORD *v8; // x8
  __int64 v9; // x9
  __int16 v10; // t1
  int v11; // w8

  v5 = a1;
  v6 = strlen(a1);
  result = malloc_type_malloc(2 * v6 + 2, 0xFABC33DuLL);
  *a2 = result;
  if ( result )
  {
    bzero(result, 2 * v6 + 2);
    if ( v6 >= 1 )
    {
      v8 = (_WORD *)*a2;
      v9 = (unsigned int)v6;
      do
      {
        v10 = *v5++;
        *v8++ = v10;
        --v9;
      }
      while ( v9 );
    }
    if ( *a3 == 1 )
      v11 = 1;
    else
      v11 = 2;
    return (void *)(unsigned int)(v11 + 2 * v6);
  }
  return result;
}