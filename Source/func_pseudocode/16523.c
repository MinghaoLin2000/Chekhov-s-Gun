-[iAUPServer setDelegate:]
void __cdecl -[iAUPServer setDelegate:](iAUPServer *self, SEL a2, id a3)
{
  self->_delegate = (iAUPServerDelegate *)a3;
}