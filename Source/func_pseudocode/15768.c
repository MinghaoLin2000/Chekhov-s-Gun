-[UARPUSBDFUAccessory .cxx_destruct]
void __cdecl -[UARPUSBDFUAccessory .cxx_destruct](UARPUSBDFUAccessory *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_pRxSuperBinaries, 0LL);
  objc_storeStrong((id *)&self->_vendorName, 0LL);
  objc_storeStrong((id *)&self->_modelNumber, 0LL);
  objc_storeStrong((id *)&self->_modelName, 0LL);
  objc_storeStrong((id *)&self->_uarpAccessory, 0LL);
  objc_storeStrong((id *)&self->_pendingProperties, 0LL);
  objc_storeStrong((id *)&self->_queriesCompleteLock, 0LL);
  objc_storeStrong((id *)&self->_notificationQueue, 0LL);
  objc_storeStrong((id *)&self->_identifier, 0LL);
  objc_storeStrong((id *)&self->_usbDfuAccessory, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_log, 0LL);
}