-[EAFirmwareUpdater setManifestIDs:]
void __cdecl -[EAFirmwareUpdater setManifestIDs:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  NSDictionary *v4; // x0

  v4 = (NSDictionary *)objc_msgSend(a3, "copy");
  self->_manifestIDs = v4;
  self->_manifestList = objc_retain(-[NSDictionary allKeys](v4, "allKeys"));
  self->_manifestIndex = 0;
}