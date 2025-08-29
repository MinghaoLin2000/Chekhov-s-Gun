-[EAFirmwareUpdater findAccessory]
bool __cdecl -[EAFirmwareUpdater findAccessory](EAFirmwareUpdater *self, SEL a2)
{
  if ( !-[EAFirmwareUpdater accessory](self, "accessory") )
    -[EAFirmwareUpdater setAccessory:](
      self,
      "setAccessory:",
      objc_msgSend(
        (id)objc_opt_class(self),
        "findAccessoryWithProtocolString:serialNum:",
        -[EAFirmwareUpdater protocolString](self, "protocolString"),
        self->_serialNumber));
  return -[EAFirmwareUpdater accessory](self, "accessory") != 0LL;
}