-[DeviceFooterViewController capacityTypeForDeviceKey:]
unsigned __int64 __cdecl -[DeviceFooterViewController capacityTypeForDeviceKey:](
        DeviceFooterViewController *self,
        SEL a2,
        id a3)
{
  id v3; // x19
  unsigned __int64 v4; // x20

  v3 = objc_retain(a3);
  if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", AMPDeviceAudioCategoryKey) & 1) != 0 )
  {
    v4 = 0LL;
  }
  else if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", AMPDeviceVideoCategoryKey) & 1) != 0 )
  {
    v4 = 1LL;
  }
  else if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", AMPDevicePhotosCategoryKey) & 1) != 0 )
  {
    v4 = 2LL;
  }
  else if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", AMPDeviceAppsCategoryKey) & 1) != 0 )
  {
    v4 = 3LL;
  }
  else if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", AMPDeviceGamesCategoryKey) & 1) != 0 )
  {
    v4 = 4LL;
  }
  else if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", AMPDeviceBooksCategoryKey) & 1) != 0 )
  {
    v4 = 5LL;
  }
  else if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", AMPDeviceUserDataCategoryKey) & 1) != 0 )
  {
    v4 = 6LL;
  }
  else if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", AMPDeviceLogsCategoryKey) & 1) != 0 )
  {
    v4 = 8LL;
  }
  else if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", AMPDeviceReservedCategoryKey) & 1) != 0 )
  {
    v4 = 9LL;
  }
  else if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", AMPDevicePurgeableCategoryKey) & 1) != 0 )
  {
    v4 = 10LL;
  }
  else if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", AMPDeviceOtherCategoryKey) & 1) != 0 )
  {
    v4 = 11LL;
  }
  else if ( (unsigned int)objc_msgSend(v3, "isEqualToString:", AMPDeviceFreeCategoryKey) )
  {
    v4 = 12LL;
  }
  else
  {
    v4 = 11LL;
  }
  objc_release(v3);
  return v4;
}