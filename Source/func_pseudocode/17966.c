-[WACEAService startSearchForAccessoriesNeedingReprovisioning]
void __cdecl -[WACEAService startSearchForAccessoriesNeedingReprovisioning](WACEAService *self, SEL a2)
{
  id v2; // [xsp+10h] [xbp-20h]
  HMHomeManager *v3; // [xsp+18h] [xbp-18h]

  v3 = objc_retainAutoreleasedReturnValue(-[WACEAService homeManager](self, "homeManager"));
  v2 = objc_retainAutoreleasedReturnValue(-[HMHomeManager currentHome](v3, "currentHome"));
  objc_msgSend(v2, "startSearchForAccessoriesNeedingReprovisioning");
  objc_release(v2);
  objc_release(v3);
}