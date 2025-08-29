-[AUDeveloperSettingsDatabase isSeedParticipationEnabled:]
bool __cdecl -[AUDeveloperSettingsDatabase isSeedParticipationEnabled:](
        AUDeveloperSettingsDatabase *self,
        SEL a2,
        id a3)
{
  return (void *)-[AUDeveloperSettingsDatabase urlLocationTypeForAccessory:](self, "urlLocationTypeForAccessory:", a3) == (void *)3;
}