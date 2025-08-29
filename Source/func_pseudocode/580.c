-[DeviceSettingsDetailsTabContentViewController .cxx_destruct]
void __cdecl -[DeviceSettingsDetailsTabContentViewController .cxx_destruct](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_disableAndCheckSelectedDetailItems, 0LL);
  objc_storeStrong((id *)&self->_detailsModelDict, 0LL);
  objc_storeStrong((id *)&self->_detailsIdentifyingObjectToNodeMap, 0LL);
  objc_storeStrong((id *)&self->_detailsCheckedItems, 0LL);
  objc_storeStrong((id *)&self->_detailsModel, 0LL);
  objc_storeStrong((id *)&self->_sourceNode, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_trailingOutlineView);
}