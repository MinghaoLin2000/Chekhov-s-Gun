__ZN12ObjConverter5Group28removeLastSubMaterialIfEmptyEv
void __fastcall ObjConverter::Group::removeLastSubMaterialIfEmpty(ObjConverter::Group *this)
{
  __int64 v1; // x8
  void **v3; // x20
  void *v4; // x0

  v1 = *((_QWORD *)this + 1);
  if ( v1 != *(_QWORD *)this )
  {
    v3 = *(void ***)(v1 - 8);
    v4 = v3[1];
    if ( v4 == *v3 )
    {
      if ( v4 )
        operator delete(v4);
      operator delete(v3);
      *((_QWORD *)this + 1) -= 8LL;
    }
  }
}