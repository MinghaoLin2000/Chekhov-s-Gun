-[WACEAService home:didUpdateReprovisionStateForAccessory:]
void __cdecl -[WACEAService home:didUpdateReprovisionStateForAccessory:](WACEAService *self, SEL a2, id a3, id a4)
{
  id v5; // [xsp+30h] [xbp-20h] BYREF
  id location[2]; // [xsp+38h] [xbp-18h] BYREF
  WACEAService *v7; // [xsp+48h] [xbp-8h]

  v7 = self;
  location[1] = (id)a2;
  location[0] = 0LL;
  objc_storeStrong(location, a3);
  v5 = 0LL;
  objc_storeStrong(&v5, a4);
  objc_msgSend(v5, "setDelegate:", v7);
  objc_storeStrong(&v5, 0LL);
  objc_storeStrong(location, 0LL);
}