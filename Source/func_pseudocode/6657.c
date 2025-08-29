_setenv
int __cdecl setenv(const char *__name, const char *__value, int __overwrite)
{
  return _setenv(__name, __value, __overwrite);
}