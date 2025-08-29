-[PlugInLibraryService initWithToken:]
PlugInLibraryService *__cdecl -[PlugInLibraryService initWithToken:](
        PlugInLibraryService *self,
        SEL a2,
        $115C4C562B26FF47E01F9F4EA65B5887 *a3)
{
  PlugInLibraryService *result; // x0
  __int128 v5; // q0

  result = -[PlugInLibraryService init](self, "init");
  if ( result )
  {
    v5 = *(_OWORD *)a3->var0;
    *(_OWORD *)&result->_xpcConnectionAuditToken.val[4] = *(_OWORD *)&a3->var0[4];
    *(_OWORD *)result->_xpcConnectionAuditToken.val = v5;
  }
  return result;
}