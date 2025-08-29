-[DeviceSettingsNode setParent:]
void __cdecl -[DeviceSettingsNode setParent:](DeviceSettingsNode *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_parent, a3);
}