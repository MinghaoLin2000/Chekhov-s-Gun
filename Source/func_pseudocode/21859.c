__ZN12ObjConverter21checkLastSubMaterialsEv
void __fastcall ObjConverter::checkLastSubMaterials(ObjConverter *this)
{
  char *v1; // x20
  char *v2; // x19
  ObjConverter::Group *v3; // x0
  char *v4; // x9
  char *v5; // x8
  bool v6; // zf

  v1 = (char *)*((_QWORD *)this + 13);
  v2 = (char *)this + 112;
  if ( v1 != (char *)this + 112 )
  {
    do
    {
      v3 = (ObjConverter::Group *)*((_QWORD *)v1 + 7);
      if ( *((_QWORD *)v3 + 1) - *(_QWORD *)v3 >= 9uLL )
        ObjConverter::Group::removeLastSubMaterialIfEmpty(v3);
      v4 = (char *)*((_QWORD *)v1 + 1);
      if ( v4 )
      {
        do
        {
          v5 = v4;
          v4 = *(char **)v4;
        }
        while ( v4 );
      }
      else
      {
        do
        {
          v5 = (char *)*((_QWORD *)v1 + 2);
          v6 = *(_QWORD *)v5 == (_QWORD)v1;
          v1 = v5;
        }
        while ( !v6 );
      }
      v1 = v5;
    }
    while ( v5 != v2 );
  }
}