-[TSUTemporaryDirectory leakTemporaryDirectory]
void __cdecl -[TSUTemporaryDirectory leakTemporaryDirectory](TSUTemporaryDirectory *self, SEL a2)
{
  self->_leak = 1;
}