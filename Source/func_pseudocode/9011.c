-[_TtC34AppleMediaServicesUIDynamicService31ServiceConnectionExportedObject bootstrapWithAccount:bagData:clientInfo:mediaClientData:metricsContextData:url:completion:]
void __cdecl -[ServiceConnectionExportedObject bootstrapWithAccount:bagData:clientInfo:mediaClientData:metricsContextData:url:completion:](
        _TtC34AppleMediaServicesUIDynamicService31ServiceConnectionExportedObject *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id a8,
        id a9)
{
  __int64 v16; // x0
  __int64 v17; // x8
  char *v18; // x21
  void *v19; // x25
  id v20; // x20
  id v21; // x23
  id v22; // x28
  id v23; // x22
  __int64 v24; // x26
  __int64 v25; // x1
  __int64 v26; // x27
  __int64 v27; // x20
  __int64 v28; // x1
  __int64 v29; // x19
  __int64 v30; // x23
  __int64 v31; // x1
  __int64 v32; // x24
  _TtC34AppleMediaServicesUIDynamicService31ServiceConnectionExportedObject *v33; // x22
  void *v34; // x28
  _TtC34AppleMediaServicesUIDynamicService31ServiceConnectionExportedObject *v35; // [xsp+20h] [xbp-80h] BYREF
  id v36; // [xsp+28h] [xbp-78h]
  id v37; // [xsp+30h] [xbp-70h]
  id v38; // [xsp+38h] [xbp-68h]
  __int64 v39; // [xsp+40h] [xbp-60h]
  __int64 v40; // [xsp+48h] [xbp-58h]

  v37 = a3;
  v35 = self;
  v16 = sub_100045608(0LL);
  v39 = *(_QWORD *)(v16 - 8);
  v40 = v16;
  __chkstk_darwin(v16);
  v18 = (char *)&v35 - ((v17 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = _Block_copy(a9);
  v38 = objc_retain(a3);
  v20 = objc_retain(a4);
  v36 = objc_retain(a5);
  v21 = objc_retain(a6);
  v22 = objc_retain(a7);
  v23 = objc_retain(a8);
  swift_retain(self);
  v24 = sub_100045638(a4);
  v26 = v25;
  objc_release(v20);
  v27 = sub_100045638(v21);
  v29 = v28;
  objc_release(v21);
  v30 = sub_100045638(v22);
  v32 = v31;
  objc_release(v22);
  sub_1000455C8(v23);
  objc_release(v23);
  _Block_copy(v19);
  v33 = v35;
  v34 = v36;
  sub_10003DFE4(v37, v24, v26, v36, v27, v29, v30, v32, v18, v35, v19);
  _Block_release(v19);
  sub_10002773C(v30, v32);
  sub_10002773C(v27, v29);
  sub_10002773C(v24, v26);
  objc_release(v38);
  objc_release(v34);
  swift_release(v33);
  (*(void (__fastcall **)(char *, __int64))(v39 + 8))(v18, v40);
}