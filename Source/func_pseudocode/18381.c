-[GTAMDPMService dealloc]
void __cdecl -[GTAMDPMService dealloc](GTAMDPMService *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[GTAMDPMService _setToDefault](self, "_setToDefault");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___GTAMDPMService;
  -[GTAMDPMService dealloc](&v3, "dealloc");
}