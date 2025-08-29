-[iAUPServer setServerState:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[iAUPServer setServerState:](iAUPServer *self, SEL a2, int a3)
{
  NSLog(
    &CFSTR("[iAUPv2 State]: %s -> %s").isa,
    -[iAUPServer serverStateString:](self, "serverStateString:", (unsigned int)self->_serverState),
    -[iAUPServer serverStateString:](self, "serverStateString:", *(_QWORD *)&a3));
  self->_serverState = a3;
}