__ZN6google8protobuf2io16CodedInputStreamD2Ev
void __fastcall google::protobuf::io::CodedInputStream::~CodedInputStream(google::protobuf::io::CodedInputStream *this)
{
  if ( *((_QWORD *)this + 2) )
    google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition(this);
}