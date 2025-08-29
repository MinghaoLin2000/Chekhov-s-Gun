-[iAUPServer dealloc]
void __cdecl -[iAUPServer dealloc](iAUPServer *self, SEL a2)
{
  objc_super v3; // [xsp+10h] [xbp-20h] BYREF

  NSLog(&CFSTR("%s(): iAUPServer dealloc\n").isa, a2, "-[iAUPServer dealloc]");
  objc_release(self->_telegramDataIn);
  self->_telegramDataIn = 0LL;
  objc_release(self->_firmwareBundle);
  objc_release(self->_dispatchQ);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___iAUPServer;
  -[iAUPServer dealloc](&v3, "dealloc");
}