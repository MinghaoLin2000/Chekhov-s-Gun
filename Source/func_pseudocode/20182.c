-[NANBrowse_Entity displayName]
id __cdecl -[NANBrowse_Entity displayName](NANBrowse_Entity *self, SEL a2)
{
  return -[PKPrinterBonjourEndpoint displayNameForPrintKitUI](self->_bonjourName, "displayNameForPrintKitUI");
}