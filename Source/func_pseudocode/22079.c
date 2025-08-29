_GetGuidedVariableName
__int64 __fastcall GetGuidedVariableName(unsigned int *a1, char *__s, char *a3, size_t a4)
{
  if ( strlen(__s) + 37 > (int)a4 )
    return 4LL;
  PrintGuidToString(a1, a3, a4);
  snprintf(a3 + 36, (int)a4 - 36, ":%s", __s);
  return 0LL;
}