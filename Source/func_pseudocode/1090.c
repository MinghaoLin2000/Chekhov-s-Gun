-[DeviceSettingsPhotosViewController photosAppSyncAllFaces]
bool __cdecl -[DeviceSettingsPhotosViewController photosAppSyncAllFaces](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  id v2; // x19
  unsigned __int8 v3; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController allPeopleViewController](self, "allPeopleViewController"));
  v3 = (unsigned __int8)objc_msgSend(v2, "allCheckBoxChecked");
  objc_release(v2);
  return v3;
}