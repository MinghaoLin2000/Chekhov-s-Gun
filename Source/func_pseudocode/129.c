-[_TtC9SPIHelper9SPIHelper addParticipantsToShare:containerSetupInfo:emailAddresses:phoneNumbers:permissionType:allowOthersToInvite:withReply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[SPIHelper addParticipantsToShare:containerSetupInfo:emailAddresses:phoneNumbers:permissionType:allowOthersToInvite:withReply:](
        _TtC9SPIHelper9SPIHelper *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        signed __int64 a7,
        bool a8,
        id aBlock)
{
  _BOOL8 v9; // x19
  void *v16; // x26
  __int64 v17; // x21
  __int64 v18; // x22
  __int64 v19; // x27
  id v20; // x26
  id v21; // x28
  _TtC9SPIHelper9SPIHelper *v22; // x25
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v9 = a8;
  v16 = _Block_copy(aBlock);
  v17 = sub_1000A4AF0(a5, &type metadata for String);
  v18 = sub_1000A4AF0(a6, &type metadata for String);
  v19 = swift_allocObject(&unk_1000C3488, 24LL, 7LL);
  *(_QWORD *)(v19 + 16) = v16;
  v20 = objc_retain(a3);
  v21 = objc_retain(a4);
  v22 = objc_retain(self);
  sub_10007CEB8(0LL, a3, a4, v17, v18, a7, v9, sub_10009EDC4, v19);
  swift_release(v19);
  swift_bridgeObjectRelease(v18);
  swift_bridgeObjectRelease(v17);
  objc_release(v22);
  objc_release(v21);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v20);
}