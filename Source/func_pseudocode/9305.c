-[TSPPackageConverter checkPassword:]
bool __cdecl -[TSPPackageConverter checkPassword:](TSPPackageConverter *self, SEL a2, id a3)
{
  return -[TSPPackage checkPassword:](self->_package, "checkPassword:", a3);
}