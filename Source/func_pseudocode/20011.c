-[LocalProxyConnection _canWriteToSocket]
void __cdecl -[LocalProxyConnection _canWriteToSocket](LocalProxyConnection *self, SEL a2)
{
  self->_writeOK = 1;
  -[LocalProxyConnection _checkWrite](self, "_checkWrite");
}