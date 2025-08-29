-[OSLogService setCallingProcessIdentifier:]
void __cdecl -[OSLogService setCallingProcessIdentifier:](OSLogService *self, SEL a2, int a3)
{
  self->_callingProcessIdentifier = a3;
}