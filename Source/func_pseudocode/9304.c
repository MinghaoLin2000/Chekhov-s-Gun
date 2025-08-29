-[TSPPackageConverter isPasswordProtected]
bool __cdecl -[TSPPackageConverter isPasswordProtected](TSPPackageConverter *self, SEL a2)
{
  return -[TSPPackage isPasswordProtected](self->_package, "isPasswordProtected");
}