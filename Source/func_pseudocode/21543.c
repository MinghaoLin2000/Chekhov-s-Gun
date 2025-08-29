-[LSRConnection _auditToken]
$115C4C562B26FF47E01F9F4EA65B5887 *__cdecl -[LSRConnection _auditToken](
        $115C4C562B26FF47E01F9F4EA65B5887 *__return_ptr retstr,
        LSRConnection *self,
        SEL a3)
{
  $115C4C562B26FF47E01F9F4EA65B5887 *result; // x0

  result = ($115C4C562B26FF47E01F9F4EA65B5887 *)self->_connection;
  if ( result )
    return ($115C4C562B26FF47E01F9F4EA65B5887 *)-[$115C4C562B26FF47E01F9F4EA65B5887 auditToken](result, "auditToken");
  *(_OWORD *)retstr->var0 = 0u;
  *(_OWORD *)&retstr->var0[4] = 0u;
  return result;
}