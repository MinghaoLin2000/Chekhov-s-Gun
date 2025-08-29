-[iAUPServer accessoryDisconnected]
void __cdecl -[iAUPServer accessoryDisconnected](iAUPServer *self, SEL a2)
{
  HSModel *hsModel; // x0

  NSLog(&CFSTR("%s()\n").isa, a2, "-[iAUPServer accessoryDisconnected]");
  hsModel = self->_hsModel;
  if ( hsModel )
  {
    -[HSModel setDelegate:](hsModel, "setDelegate:", 0LL);
    objc_release(self->_hsModel);
    self->_hsModel = 0LL;
  }
}