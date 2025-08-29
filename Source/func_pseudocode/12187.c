__ZNK6google8protobuf11StringPiece6substrEmm
unsigned __int64 __fastcall google::protobuf::StringPiece::substr(
        google::protobuf::StringPiece *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // x10

  if ( *((_QWORD *)this + 1) >= a2 )
    v2 = a2;
  else
    v2 = *((_QWORD *)this + 1);
  return *(_QWORD *)this + v2;
}