-[restoreInfo setRestoreDevice:]
void __cdecl -[restoreInfo setRestoreDevice:](restoreInfo *self, SEL a2, __AMRestorableDevice *a3)
{
  self->restoreDevice = a3;
}