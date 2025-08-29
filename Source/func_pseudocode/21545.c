-[LSRConnection _delegate]
id __cdecl -[LSRConnection _delegate](LSRConnection *self, SEL a2)
{
  return -[NSXPCConnection remoteObjectProxy](self->_connection, "remoteObjectProxy");
}