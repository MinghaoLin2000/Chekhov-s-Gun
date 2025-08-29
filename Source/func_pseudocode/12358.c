__ZN6google8protobuf2io17CodedOutputStreamD2Ev
void __fastcall google::protobuf::io::CodedOutputStream::~CodedOutputStream(
        google::protobuf::io::CodedOutputStream *this)
{
  *((_QWORD *)this + 8) = google::protobuf::io::EpsCopyOutputStream::Trim(this, *((unsigned __int8 **)this + 8));
}