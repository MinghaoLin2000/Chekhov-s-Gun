__ZNK6google8protobuf7Message12ByteSizeLongEv
__int64 __fastcall google::protobuf::Message::ByteSizeLong(
        google::protobuf::Message *this,
        const google::protobuf::Message *a2)
{
  __int64 v3; // x20

  v3 = google::protobuf::internal::WireFormat::ByteSize(this, a2);
  (*(void (__fastcall **)(google::protobuf::Message *, __int64))(*(_QWORD *)this + 144LL))(this, v3);
  return v3;
}