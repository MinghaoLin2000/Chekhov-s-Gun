-[UARPUSBDFUAccessory applyFirmware]
int __cdecl -[UARPUSBDFUAccessory applyFirmware](UARPUSBDFUAccessory *self, SEL a2)
{
  unsigned int v3; // w0
  int v4; // w20
  OS_os_log *log; // x19
  unsigned int v6; // w0
  OS_os_log *v7; // x21
  OS_os_log *v8; // x19

  v3 = -[USBDFUUpdater openDfuDevice](self->_usbDfuAccessory, "openDfuDevice");
  if ( v3 )
  {
    v4 = v3;
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_1000193F0(log);
  }
  else if ( -[USBDFUUpdater simulator](self->_usbDfuAccessory, "simulator")
         && (v6 = -[USBDFUUpdater dfuGetVersionCmdMajor:minor:release:build:](
                    self->_usbDfuAccessory,
                    "dfuGetVersionCmdMajor:minor:release:build:",
                    &self->_stagedFW,
                    &self->_stagedFW.minor,
                    &self->_stagedFW.release,
                    &self->_stagedFW.build)) != 0 )
  {
    v4 = v6;
    v7 = self->_log;
    if ( os_log_type_enabled(v7, OS_LOG_TYPE_ERROR) )
      sub_100019378(v7);
    -[USBDFUUpdater closeDfuDevice](self->_usbDfuAccessory, "closeDfuDevice");
  }
  else
  {
    -[UARPUSBDFUAccessory disableDisconnectCallback](self, "disableDisconnectCallback");
    if ( -[USBDFUUpdater dfuSetState:](self->_usbDfuAccessory, "dfuSetState:", 0LL) )
    {
      v8 = self->_log;
      if ( os_log_type_enabled(v8, OS_LOG_TYPE_ERROR) )
        sub_100019378(v8);
      return 54;
    }
    else
    {
      -[USBDFUUpdater closeDfuDevice](self->_usbDfuAccessory, "closeDfuDevice");
      v4 = 0;
      self->_activeFW = self->_stagedFW;
      self->_stagedFW = 0u;
    }
  }
  return v4;
}