-[SPCloudStorageHelper acAccount]
id __cdecl -[SPCloudStorageHelper acAccount](SPCloudStorageHelper *self, SEL a2)
{
  return -[ACAccountStore aa_primaryAppleAccount](self->_acStore, "aa_primaryAppleAccount");
}