_PrintGuidToString
__int64 __fastcall PrintGuidToString(unsigned int *a1, char *__str, size_t __size)
{
  if ( (int)__size >= 36 )
    return snprintf(
             __str,
             (unsigned int)__size,
             &GuidFormatString,
             *a1,
             *((unsigned __int16 *)a1 + 2),
             *((unsigned __int16 *)a1 + 3),
             *((unsigned __int8 *)a1 + 8),
             *((unsigned __int8 *)a1 + 9),
             *((unsigned __int8 *)a1 + 10),
             *((unsigned __int8 *)a1 + 11),
             *((unsigned __int8 *)a1 + 12),
             *((unsigned __int8 *)a1 + 13),
             *((unsigned __int8 *)a1 + 14),
             *((unsigned __int8 *)a1 + 15));
  else
    return 0LL;
}