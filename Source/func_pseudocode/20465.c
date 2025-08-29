-[CUPSBrowse_Entity displayName]
id __cdecl -[CUPSBrowse_Entity displayName](CUPSBrowse_Entity *self, SEL a2)
{
  return -[PKPrinterBonjourEndpoint displayNameForPrintKitUI](self->_bonjourName, "displayNameForPrintKitUI");
}