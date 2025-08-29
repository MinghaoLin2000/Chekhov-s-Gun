-[WACEAService setup]
void __cdecl -[WACEAService setup](WACEAService *self, SEL a2)
{
  void **v2; // [xsp+18h] [xbp-48h] BYREF
  int v3; // [xsp+20h] [xbp-40h]
  int v4; // [xsp+24h] [xbp-3Ch]
  __int64 (__fastcall *v5)(); // [xsp+28h] [xbp-38h]
  void *v6; // [xsp+30h] [xbp-30h]
  id v7[3]; // [xsp+38h] [xbp-28h] BYREF
  id location; // [xsp+50h] [xbp-10h] BYREF
  dispatch_once_t *v9; // [xsp+58h] [xbp-8h]

  v7[2] = self;
  v7[1] = (id)a2;
  v2 = _NSConcreteStackBlock;
  v3 = -1040187392;
  v4 = 0;
  v5 = __21__WACEAService_setup__block_invoke;
  v6 = &__block_descriptor_40_e8_32s_e5_v8__0l;
  v7[0] = objc_retain(self);
  v9 = (dispatch_once_t *)&setup_once;
  location = 0LL;
  objc_storeStrong(&location, &v2);
  if ( *v9 != -1 )
    dispatch_once(v9, location);
  objc_storeStrong(&location, 0LL);
  objc_storeStrong(v7, 0LL);
}