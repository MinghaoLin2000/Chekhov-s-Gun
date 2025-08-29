__ZN9serialize4PrimD2Ev
void __fastcall serialize::Prim::~Prim(serialize::Prim *this)
{
  void *v2; // x0

  *(_QWORD *)this = off_1000185F8;
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 6) = v2;
    operator delete(v2);
  }
  if ( *((char *)this + 39) < 0 )
    operator delete(*((void **)this + 2));
}