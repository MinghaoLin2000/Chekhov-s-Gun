-[_TtC9SPIHelper9SPIHelper addToShareFromSharingURL:containerSetupInfo:emailAddresses:phoneNumbers:accessType:permissionType:allowOthersToInvite:withReply:]
void __cdecl -[SPIHelper addToShareFromSharingURL:containerSetupInfo:emailAddresses:phoneNumbers:accessType:permissionType:allowOthersToInvite:withReply:](
        _TtC9SPIHelper9SPIHelper *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        signed __int64 a7,
        signed __int64 a8,
        bool a9,
        id a10)
{
  __int64 v15; // x19
  __int64 v16; // x23
  __int64 v17; // x8
  char *v18; // x21
  void *v19; // x20
  __int64 v20; // x27
  __int64 v21; // x26
  __int64 v22; // x28
  id v23; // x22
  _TtC9SPIHelper9SPIHelper *v24; // x20
  __int64 v25; // [xsp+10h] [xbp-70h] BYREF
  _BOOL4 v26; // [xsp+1Ch] [xbp-64h]
  signed __int64 v27; // [xsp+20h] [xbp-60h]
  signed __int64 v28; // [xsp+28h] [xbp-58h]

  v27 = a7;
  v28 = a8;
  v26 = a9;
  v15 = sub_1000A44B0(0LL);
  v16 = *(_QWORD *)(v15 - 8);
  __chkstk_darwin(v15);
  v18 = (char *)&v25 - ((v17 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = _Block_copy(a10);
  sub_1000A4470(a3);
  v20 = sub_1000A4AF0(a5, &type metadata for String);
  v21 = sub_1000A4AF0(a6, &type metadata for String);
  v22 = swift_allocObject(&unk_1000C3A28, 24LL, 7LL);
  *(_QWORD *)(v22 + 16) = v19;
  v23 = objc_retain(a4);
  v24 = objc_retain(self);
  sub_100069D2C(v18, a4, v20, v21, v27, v28, v26, sub_10009DF54, v22);
  swift_release(v22);
  swift_bridgeObjectRelease(v21);
  swift_bridgeObjectRelease(v20);
  objc_release(v24);
  objc_release(v23);
  (*(void (__fastcall **)(char *, __int64))(v16 + 8))(v18, v15);
}