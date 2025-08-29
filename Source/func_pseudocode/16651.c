-[EAAccessoryUpdater isMultiAssetSession]
bool __cdecl -[EAAccessoryUpdater isMultiAssetSession](EAAccessoryUpdater *self, SEL a2)
{
  return -[EAFirmwareUpdater isMultiAssetSession](self->firmwareUpdater, "isMultiAssetSession");
}