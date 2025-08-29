-[PlugInLibraryService xpcConnectionAuditToken]
$115C4C562B26FF47E01F9F4EA65B5887 *__cdecl -[PlugInLibraryService xpcConnectionAuditToken](
        $115C4C562B26FF47E01F9F4EA65B5887 *__return_ptr retstr,
        PlugInLibraryService *self,
        SEL a3)
{
  $115C4C562B26FF47E01F9F4EA65B5887 *result; // x0

  objc_copyStruct(retstr, &self->_xpcConnectionAuditToken, 32LL, 1, 0);
  return result;
}