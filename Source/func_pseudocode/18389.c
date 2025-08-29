-[GTPMService .cxx_destruct]
void __cdecl -[GTPMService .cxx_destruct](GTPMService *self, SEL a2)
{
  objc_release(self->_igpm.gpuName);
}