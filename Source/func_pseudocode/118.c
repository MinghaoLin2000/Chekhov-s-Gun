-[_TtC9SPIHelper9SPIHelper addToCloudKitSharing:containerSetupInfo:emailAddresses:phoneNumbers:accessType:permissionType:allowOthersToInvite:withReply:]
void __cdecl -[SPIHelper addToCloudKitSharing:containerSetupInfo:emailAddresses:phoneNumbers:accessType:permissionType:allowOthersToInvite:withReply:](
        _TtC9SPIHelper9SPIHelper *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        signed __int64 a7,
        signed __int64 a8,
        bool a9,
        id aBlock)
{
  void *v17; // x27
  __int64 v18; // x21
  __int64 v19; // x23
  __int64 v20; // x28
  id v21; // x25
  id v22; // x24
  _TtC9SPIHelper9SPIHelper *v23; // x26
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v17 = _Block_copy(aBlock);
  v18 = sub_1000A4AF0(a5, &type metadata for String);
  v19 = sub_1000A4AF0(a6, &type metadata for String);
  v20 = swift_allocObject(&unk_1000C3AA0, 24LL, 7LL);
  *(_QWORD *)(v20 + 16) = v17;
  v21 = objc_retain(a3);
  v22 = objc_retain(a4);
  v23 = objc_retain(self);
  sub_100066720(v21, v22, v18, v19, a7, a8, a9, sub_10009EDC4, v20);
  swift_release(v20);
  swift_bridgeObjectRelease(v19);
  swift_bridgeObjectRelease(v18);
  objc_release(v23);
  objc_release(v22);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v21);
}