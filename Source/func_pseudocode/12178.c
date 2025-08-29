__ZNK6google8protobuf10TextFormat7Printer14PrintFieldNameERKNS0_7MessageEiiPKNS0_10ReflectionEPKNS0_15FieldDescriptorEPNS2_13TextGeneratorE
void __fastcall google::protobuf::TextFormat::Printer::PrintFieldName(
        __int64 a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  google::protobuf *v8; // x0
  void **v9; // x1
  unsigned __int64 v10; // x2
  _QWORD *v11; // x10
  _QWORD *v12; // x8
  unsigned __int64 v13; // x11
  bool v14; // cf
  _QWORD *v15; // x11
  _QWORD *v16; // x8
  void (*v17)(void); // x7
  void *__p[2]; // [xsp+0h] [xbp-70h] BYREF
  unsigned __int8 v19; // [xsp+17h] [xbp-59h]
  void *__src; // [xsp+18h] [xbp-58h]
  size_t v21; // [xsp+20h] [xbp-50h]
  _BYTE v22[32]; // [xsp+28h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+78h] [xbp+8h]

  if ( *(_BYTE *)(a1 + 5) )
  {
    v8 = (google::protobuf *)*(unsigned int *)(a6 + 68);
    __src = v22;
    v21 = google::protobuf::FastInt32ToBufferLeft(v8, v22, a3) - v22;
    sub_10007A6A8(__p, v22, v21);
    if ( (v19 & 0x80u) == 0 )
      v9 = __p;
    else
      v9 = (void **)__p[0];
    if ( (v19 & 0x80u) == 0 )
      v10 = v19;
    else
      v10 = (unsigned __int64)__p[1];
    (*(void (__fastcall **)(__int64, void **, unsigned __int64))(*(_QWORD *)a7 + 40LL))(a7, v9, v10);
    if ( (char)v19 < 0 )
      operator delete(__p[0]);
  }
  else
  {
    v11 = *(_QWORD **)(a1 + 40);
    if ( !v11 )
      goto LABEL_22;
    v12 = (_QWORD *)(a1 + 40);
    do
    {
      v13 = v11[4];
      v14 = v13 >= a6;
      if ( v13 >= a6 )
        v15 = v11;
      else
        v15 = v11 + 1;
      if ( v14 )
        v12 = v11;
      v11 = (_QWORD *)*v15;
    }
    while ( *v15 );
    if ( v12 != (_QWORD *)(a1 + 40) && v12[4] <= a6 )
      v16 = v12 + 5;
    else
LABEL_22:
      v16 = (_QWORD *)(a1 + 24);
    v17 = *(void (**)(void))(*(_QWORD *)*v16 + 96LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    v17();
  }
}