-[UARPUpdaterDisplayControllerDelegate init]
UARPUpdaterDisplayControllerDelegate *__cdecl -[UARPUpdaterDisplayControllerDelegate init](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2)
{
  char *v2; // x19
  os_log_t v3; // x0
  void *v4; // x8
  void *v5; // x0
  DisplayMobileAssetUpdater *v6; // x0
  void *v7; // x8
  DisplayMobileAssetUpdater *v8; // x0
  void *v9; // x8
  id v10; // x0
  void *v11; // x8
  id v12; // x0
  void *v13; // x8
  id v14; // x0
  void *v15; // x8
  id v16; // x0
  void *v17; // x8
  id v18; // x0
  void *v19; // x8
  id v20; // x0
  void *v21; // x8
  id v22; // x0
  void *v23; // x8
  objc_super v25; // [xsp+0h] [xbp-30h] BYREF

  v25.receiver = self;
  v25.super_class = (Class)&OBJC_CLASS___UARPUpdaterDisplayControllerDelegate;
  v2 = -[UARPUpdaterDisplayControllerDelegate init](&v25, "init");
  if ( v2 )
  {
    v3 = os_log_create("com.apple.uarpupdaterservice.display", "controllerdelegate");
    v4 = (void *)*((_QWORD *)v2 + 1);
    *((_QWORD *)v2 + 1) = v3;
    objc_release(v4);
    v5 = (void *)*((_QWORD *)v2 + 2);
    *((_QWORD *)v2 + 2) = 0LL;
    objc_release(v5);
    v6 = -[DisplayMobileAssetUpdater initWithAssetType:internal:log:](
           objc_alloc(&OBJC_CLASS___DisplayMobileAssetUpdater),
           "initWithAssetType:internal:log:",
           CFSTR("com.apple.MobileAsset.DarwinAccessoryUpdate.A2525"),
           1LL,
           *((_QWORD *)v2 + 1));
    v7 = (void *)*((_QWORD *)v2 + 3);
    *((_QWORD *)v2 + 3) = v6;
    objc_release(v7);
    v8 = -[DisplayMobileAssetUpdater initWithAssetType:internal:log:](
           objc_alloc(&OBJC_CLASS___DisplayMobileAssetUpdater),
           "initWithAssetType:internal:log:",
           CFSTR("com.apple.MobileAsset.DarwinAccessoryUpdate.A2525"),
           0LL,
           *((_QWORD *)v2 + 1));
    v9 = (void *)*((_QWORD *)v2 + 4);
    *((_QWORD *)v2 + 4) = v8;
    objc_release(v9);
    v10 = objc_alloc_init((Class)&OBJC_CLASS___SUOSUExternalUpdateProvider);
    v11 = (void *)*((_QWORD *)v2 + 5);
    *((_QWORD *)v2 + 5) = v10;
    objc_release(v11);
    v12 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableSet);
    v13 = (void *)*((_QWORD *)v2 + 6);
    *((_QWORD *)v2 + 6) = v12;
    objc_release(v13);
    v14 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    v15 = (void *)*((_QWORD *)v2 + 7);
    *((_QWORD *)v2 + 7) = v14;
    objc_release(v15);
    v16 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    v17 = (void *)*((_QWORD *)v2 + 8);
    *((_QWORD *)v2 + 8) = v16;
    objc_release(v17);
    v18 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    v19 = (void *)*((_QWORD *)v2 + 9);
    *((_QWORD *)v2 + 9) = v18;
    objc_release(v19);
    v20 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    v21 = (void *)*((_QWORD *)v2 + 10);
    *((_QWORD *)v2 + 10) = v20;
    objc_release(v21);
    v22 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    v23 = (void *)*((_QWORD *)v2 + 11);
    *((_QWORD *)v2 + 11) = v22;
    objc_release(v23);
    *((_WORD *)v2 + 52) = 0;
    *((_QWORD *)v2 + 12) = 0LL;
    *((_DWORD *)v2 + 27) = 0;
    *(_DWORD *)(v2 + 111) = 0;
  }
  return (UARPUpdaterDisplayControllerDelegate *)v2;
}