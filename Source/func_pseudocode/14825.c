-[TBXPCService cancelMaintenanceTask]
void __cdecl -[TBXPCService cancelMaintenanceTask](TBXPCService *self, SEL a2)
{
  NSLog(&CFSTR("%s: _isCancelled = %d").isa, a2, "-[TBXPCService cancelMaintenanceTask]", self->_isCancelled);
  self->_isCancelled = 1;
}