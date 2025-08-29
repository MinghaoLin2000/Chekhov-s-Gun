__ZNK6google8protobuf14DynamicMessage3NewEPNS0_5ArenaE
_QWORD *__fastcall google::protobuf::DynamicMessage::New(
        google::protobuf::DynamicMessage *this,
        google::protobuf::Arena *a2)
{
  _QWORD *v4; // x19
  int *v5; // x21

  if ( a2 )
  {
    v4 = (_QWORD *)sub_10003B5B0(a2);
    bzero(v4, **((int **)this + 2));
    v5 = (int *)*((_QWORD *)this + 2);
  }
  else
  {
    v4 = operator new(**((int **)this + 2));
    v5 = (int *)*((_QWORD *)this + 2);
    bzero(v4, *v5);
  }
  *v4 = off_1001D96E8;
  v4[1] = a2;
  v4[2] = v5;
  *((_DWORD *)v4 + 6) = 0;
  google::protobuf::DynamicMessage::SharedCtor((google::protobuf::DynamicMessage *)v4, 1);
  return v4;
}