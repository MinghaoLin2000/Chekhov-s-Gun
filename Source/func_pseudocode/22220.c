-[QLSatellite setConnection:]
void __cdecl -[QLSatellite setConnection:](QLSatellite *self, SEL a2, id a3)
{
  self->_connection = (OS_xpc_object *)a3;
}