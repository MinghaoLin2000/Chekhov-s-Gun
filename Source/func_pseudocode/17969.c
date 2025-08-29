-[WACEAService accessoryDidUpdateName:]
void __cdecl -[WACEAService accessoryDidUpdateName:](WACEAService *self, SEL a2, id a3)
{
  id location[3]; // [xsp+18h] [xbp-18h] BYREF

  location[2] = self;
  location[1] = (id)a2;
  location[0] = 0LL;
  objc_storeStrong(location, a3);
  objc_storeStrong(location, 0LL);
}