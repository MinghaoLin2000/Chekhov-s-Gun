-[UARPDFUUpdater .cxx_destruct]
void __cdecl -[UARPDFUUpdater .cxx_destruct](UARPDFUUpdater *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_goldRestoreDelegate, 0LL);
  objc_storeStrong((id *)&self->_delegateQueue, 0LL);
  objc_storeStrong((id *)&self->_accessoriesQueue, 0LL);
  objc_storeStrong((id *)&self->_uarpMessageQueue, 0LL);
  objc_storeStrong((id *)&self->_dfuOtpAccessories, 0LL);
  objc_storeStrong((id *)&self->_uarpController, 0LL);
  objc_storeStrong((id *)&self->_uarpCaptureFileName, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_log, 0LL);
}