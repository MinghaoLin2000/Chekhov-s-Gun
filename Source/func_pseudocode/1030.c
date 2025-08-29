-[DeviceManageBackupsViewController .cxx_destruct]
void __cdecl -[DeviceManageBackupsViewController .cxx_destruct](DeviceManageBackupsViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_contextualMenuItems, 0LL);
  objc_storeStrong((id *)&self->_backups, 0LL);
  objc_destroyWeak((id *)&self->_deleteButton);
  objc_destroyWeak((id *)&self->_okButton);
  objc_destroyWeak((id *)&self->_tableView);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_deviceBackupsTextField);
}