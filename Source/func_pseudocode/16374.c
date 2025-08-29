-[EAFirmwareUpdater updateProgress:]
void __cdecl -[EAFirmwareUpdater updateProgress:](EAFirmwareUpdater *self, SEL a2, double a3)
{
  void (__fastcall **progressHandler)(double); // x0

  progressHandler = (void (__fastcall **)(double))self->_progressHandler;
  if ( progressHandler )
    progressHandler[2](a3);
}