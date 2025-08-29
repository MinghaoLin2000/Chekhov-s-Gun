-[LegacyAudioController setCachedActiveFirmwareAccessories:]
void __cdecl -[LegacyAudioController setCachedActiveFirmwareAccessories:](LegacyAudioController *self, SEL a2, id a3)
{
  -[NSUserDefaults setObject:forKey:](self->_database, "setObject:forKey:", a3, CFSTR("activeFirmwareAccessories"));
}