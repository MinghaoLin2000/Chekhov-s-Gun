-[iAUPServer serverStateString:]
char *__cdecl -[iAUPServer serverStateString:](iAUPServer *self, SEL a2, int a3)
{
  if ( (unsigned int)a3 > 7 )
    return "Unknown";
  else
    return off_1000318E0[a3];
}