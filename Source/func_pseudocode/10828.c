__ZN6google8protobuf20FileDescriptorTables23AddFieldByStylizedNamesEPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::FileDescriptorTables::AddFieldByStylizedNames(
        google::protobuf::FileDescriptorTables *this,
        const google::protobuf::FieldDescriptor *a2)
{
  __int64 v4; // x22
  char *v5; // x8
  char *v6; // x1
  char *v7; // x1
  __int64 result; // x0
  __int64 v9; // [xsp+0h] [xbp-60h] BYREF
  __int64 v10; // [xsp+8h] [xbp-58h] BYREF
  __int64 v11; // [xsp+10h] [xbp-50h] BYREF
  __int64 v12; // [xsp+20h] [xbp-40h] BYREF
  __int64 v13; // [xsp+28h] [xbp-38h] BYREF
  const google::protobuf::FieldDescriptor *v14; // [xsp+38h] [xbp-28h] BYREF

  v14 = a2;
  if ( *((_BYTE *)a2 + 67) )
  {
    v4 = *((_QWORD *)a2 + 12);
    if ( v4 )
      goto LABEL_6;
    v5 = (char *)a2 + 40;
  }
  else
  {
    v5 = (char *)a2 + 80;
  }
  v4 = *(_QWORD *)v5;
LABEL_6:
  v6 = (char *)*((_QWORD *)a2 + 2);
  if ( v6[23] < 0 )
    v6 = *(char **)v6;
  v12 = v4;
  sub_1000965F4((int)&v13, v6);
  if ( (sub_10007BBA8(*((_QWORD *)this + 10), &v12, &v14) & 1) == 0 )
  {
    v10 = sub_10007C470(*((_QWORD *)this + 10), &v12);
    sub_10007BBA8((char *)this + 40, &v12, &v10);
  }
  v7 = (char *)*((_QWORD *)a2 + 3);
  if ( v7[23] < 0 )
    v7 = *(char **)v7;
  v10 = v4;
  sub_1000965F4((int)&v11, v7);
  result = sub_10007BBA8(*((_QWORD *)this + 17), &v10, &v14);
  if ( (result & 1) == 0 )
  {
    v9 = sub_10007C470(*((_QWORD *)this + 17), &v10);
    return sub_10007BBA8((char *)this + 96, &v10, &v9);
  }
  return result;
}