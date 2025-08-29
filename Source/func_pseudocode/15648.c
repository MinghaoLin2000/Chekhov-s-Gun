-[USBDFUUpdater initCurrentState]
int __cdecl -[USBDFUUpdater initCurrentState](USBDFUUpdater *self, SEL a2)
{
  int result; // w0
  int v4; // w20

  result = -[USBDFUUpdater openDfuDevice](self, "openDfuDevice");
  if ( !result )
  {
    v4 = -[USBDFUUpdater dfuGetStateCmd:](self, "dfuGetStateCmd:", &self->_currentStatus.bState);
    -[USBDFUUpdater closeDfuDevice](self, "closeDfuDevice");
    return v4;
  }
  return result;
}