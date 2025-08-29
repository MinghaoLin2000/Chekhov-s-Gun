-[_TtC9SPIHelper9SPIHelper addParticipantsToShare:containerSetupInfo:emailAddresses:phoneNumbers:withReply:]
void __cdecl -[SPIHelper addParticipantsToShare:containerSetupInfo:emailAddresses:phoneNumbers:withReply:](
        _TtC9SPIHelper9SPIHelper *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  void *v12; // x24
  __int64 v13; // x26
  __int64 v14; // x19
  __int64 v15; // x25
  id v16; // x22
  id v17; // x24
  _TtC9SPIHelper9SPIHelper *v18; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v12 = _Block_copy(a7);
  v13 = sub_1000A4AF0(a5, &type metadata for String);
  v14 = sub_1000A4AF0(a6, &type metadata for String);
  v15 = swift_allocObject(&unk_1000C3618, 24LL, 7LL);
  *(_QWORD *)(v15 + 16) = v12;
  v16 = objc_retain(a3);
  v17 = objc_retain(a4);
  v18 = objc_retain(self);
  sub_100079648(v16, a4, v13, v14, sub_10009EDC4, v15);
  swift_release(v15);
  swift_bridgeObjectRelease(v14);
  swift_bridgeObjectRelease(v13);
  objc_release(v18);
  objc_release(v17);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v16);
}