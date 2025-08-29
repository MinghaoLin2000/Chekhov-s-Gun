-[UARPUpdaterDisplayControllerDelegate getIsBusy]
bool __cdecl -[UARPUpdaterDisplayControllerDelegate getIsBusy](UARPUpdaterDisplayControllerDelegate *self, SEL a2)
{
  return self->_numProcess > 0
      || -[NSMutableSet count](self->_checkInfo, "count")
      || -[NSMutableDictionary count](self->_restoreInfo, "count") != 0LL;
}