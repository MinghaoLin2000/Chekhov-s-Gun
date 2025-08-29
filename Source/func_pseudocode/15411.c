-[UARPUpdaterDisplayControllerDelegate .cxx_destruct]
void __cdecl -[UARPUpdaterDisplayControllerDelegate .cxx_destruct](UARPUpdaterDisplayControllerDelegate *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_trmRegistryEntryIDs, 0LL);
  objc_storeStrong((id *)&self->_restoreProgress, 0LL);
  objc_storeStrong((id *)&self->_restoreInfo, 0LL);
  objc_storeStrong((id *)&self->_consentInfo, 0LL);
  objc_storeStrong((id *)&self->_preflightInfo, 0LL);
  objc_storeStrong((id *)&self->_checkInfo, 0LL);
  objc_storeStrong((id *)&self->_updateController, 0LL);
  objc_storeStrong((id *)&self->_mobileAssetCustomerUpdater, 0LL);
  objc_storeStrong((id *)&self->_mobileAssetInternalUpdater, 0LL);
  objc_storeStrong((id *)&self->_transaction, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_log, 0LL);
}