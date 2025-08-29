-[iAUPServer assetTypeString:]
char *__cdecl -[iAUPServer assetTypeString:](iAUPServer *self, SEL a2, int a3)
{
  if ( (unsigned int)a3 > 2 )
    return "unknown";
  else
    return off_1000318C8[a3];
}