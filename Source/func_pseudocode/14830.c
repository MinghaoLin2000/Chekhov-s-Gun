-[TBXPCService .cxx_destruct]
void __cdecl -[TBXPCService .cxx_destruct](TBXPCService *self, SEL a2)
{
  objc_storeStrong((id *)&self->_processingQueue, 0LL);
}